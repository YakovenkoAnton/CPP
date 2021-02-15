#pragma once
#include "Dot.h"

class Triangle
{
public:
    //Triangle(Dot, Dot, Dot);
    Triangle(Dot&, Dot&, Dot&);
    ~Triangle();
    double Square();
    double Per();
    void Print_dist();
private:
    /*Dot dot_a;
    Dot dot_b;
    Dot dot_c;*/
    Dot* dot_a;
    Dot* dot_b;
    Dot* dot_c;

};

