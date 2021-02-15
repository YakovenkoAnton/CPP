#include "Time.h"
#include <iostream>


Time::Time(int h, int m, int s)
{
	if (s >= 60)
	{
		s -= 60;
		m++;
	}

	if (m >= 60)
	{
		m -= 60;
		h++;
	}
	Time::set_h(h);
	Time::set_m(m);
	Time::set_s(s);
}

Time::Time()
{
	Time::set_h(0);
	Time::set_m(0);
	Time::set_s(0);
}

void Time::ShowTime()
{
	std::cout << h << ":" << m << ":" << s << "\n";
}

Time Time::AddTime(const Time & t1, const Time & t2)
{
	int h = t1.h + t2.h;
	int m = t1.m + t2.m;
	int s = t1.s + t2.s;
	Time t(h, m, s);
	return t;
}

void Time::set_h(int Time_h)
{
	Time::h = Time_h;
}

int Time::get_h()
{
	return Time::h;
}

void Time::set_m(int Time_m)
{
	Time::m = Time_m;
}

int Time::get_m()
{
	return Time::m;
}

void Time::set_s(int Time_s)
{
	Time::s = Time_s;
}

int Time::get_s()
{
	return Time::s;
}
