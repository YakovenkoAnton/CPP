#pragma once
#include <string>
using namespace std;

class Time
{
public:
    Time(int, int, int);
    Time();
    void ShowTime();
    Time AddTime(const Time&, const Time&);
    void set_h(int);
    int get_h();
    void set_m(int);
    int get_m();
    void set_s(int);
    int get_s();

   
private:
    int h;
    int m;
    int s;

public:
    class ExScore
    {
    public:
        ExScore(string, int);

        string origin; 
        int iValue; 
    };
};

