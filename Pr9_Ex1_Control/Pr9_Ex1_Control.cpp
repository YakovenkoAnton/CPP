#include <iostream>
#include <string>
using namespace std;

class Triangle
{
public:
	Triangle(int a, int b, int c) 
	{
		if ((a >= (b + c)) | (a<=0))
			throw ExScore("в конструкторе ", a);
		else if ((a >= (b + c)) | (b<=0))
			throw ExScore("в конструкторе", a);
		else if ((a >= (b + c)) | (c<=0))
			throw ExScore("в конструкторе", a);
		else
		{
			set_a(a);
			set_b(b);
			set_c(c);
		}
	}

	void set_a(int side_a)
	{
		a = side_a;
	}
	int get_a()
	{
		return a;
	}
	void set_b(int side_b)
	{
		b = side_b;
	}
	int get_b()
	{
		return b;
	}
	void set_c(int side_c)
	{
		c = side_c;
	}
	int get_c()
	{
		return c;
	}

	double square()
	{
		double p = (a + b + c) / 2;
		return sqrt(p*(p-a)*(p-b)*(p-c));
	}

private:
	int a, b, c;
	
public:
	class ExScore 
	{

	public:
		string origin; //для имени функции
		int iValue; //для хранения ошибочного значения

		ExScore(string org, int sc)
		{
			origin = org; //строка с именем виновника ошибки
			iValue = sc; //сохраненное неправильное значение
		}
	};
};

int main()
{
	system("chcp 1251");
	int a, b, c;
	cout << "Введите стороны треугольника:";
	cout << "\na="; 
	cin >> a;
	cout << "\nb="; 
	cin >> b;
	cout << "\nc=";
	cin >> c;
	
	try
	{
		Triangle tr(a, b, c);
		cout<<"Площадь треугольника = "<< tr.square();
	}
	catch (Triangle::ExScore& ex)
	{
		cout << "\nОшибка инициализации " << ex.origin;
		cout << "\nВведенное значение длины стороны " << ex.iValue << " является недопустимым\n";
	}
	
return 0;
}


