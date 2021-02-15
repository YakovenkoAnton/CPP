#include <iostream>
using namespace std;

class Distance
{
private:
	int feet;
	float inches;
	const float MTF;
public:

	Distance() : feet(0), inches(0.0), MTF(3.280833F) { }
	
	Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F) { }

	Distance(float meters) : MTF(3.280833F)
	{
		float fltfeet = MTF * meters; // перевод в футы
		feet = int(fltfeet); // число полных футов
		inches = 12 * (fltfeet-feet); // остаток - это дюймы
	}


	operator float() const
	{
		float fracfeet = inches / 12;
		fracfeet += static_cast<float>(feet);
		return fracfeet / MTF;
	}

	void getdist()
	{
		cout << "\nВведите число футов : ";
		cin >> feet;
		cout << "\nВведите число дюймов : ";
		cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\' - " << inches << "\"\n";
	}
	
	Distance operator-(const Distance& d2) const;
	Distance operator+ (const Distance&) const;

	friend Distance operator-(const Distance&);
	friend std::ostream& operator<< (std::ostream& out, const Distance& dist);
};

Distance operator-(const Distance&)
{
	return Distance();
}

std::ostream& operator<< (std::ostream& out, const Distance& dist)
{
	out << dist.feet << "\' - " << dist.inches << "\"\n";
	return out;
}

Distance Distance::operator-(const Distance& d2) const
{
	int f = feet - d2.feet;
	float i = inches - d2.inches;
	if (i<0)
	{
		i += 12;
		f--;
	}
	return Distance(f, i);
}

Distance Distance::operator+ (const Distance & d2) const
{
	int f = feet + d2.feet;
	float i = inches + d2.inches;
	if (i >= 12.0)
	{
		i -= 12.0;
		f++;
	}
	return Distance(f, i);
}



int main()
{
	system("chcp 1251");
	Distance dist1, dist2, dist3, dist4;
	//dist1.getdist();
	//dist2.getdist();
	//dist3 = dist1 + dist2;
	//dist3.showdist();
	//dist4 = dist1 + dist2 + dist3;
	//dist4.showdist();

	//dist4 = dist4 - dist1;
	//dist4.showdist();

	//cout << "\ndist1 перегруж = " << dist1;

	Distance dist11 = 2.35F;
	float mtrs;
	dist11.showdist();
	mtrs = static_cast<float>(dist11);
	mtrs = dist11;
	cout << mtrs;

	


}
