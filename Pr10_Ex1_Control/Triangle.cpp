#include "Triangle.h"
#include <math.h>
#include <iostream>

//Triangle::Triangle(Dot a, Dot b, Dot c)
//{
//    dot_a = a;
//    dot_b = b;
//    dot_c = c;
//}

Triangle::Triangle(Dot& a, Dot& b, Dot& c) 
{
    dot_a = new Dot(a);
    dot_b = new Dot(b);
    dot_c = new Dot(c);
}

Triangle::~Triangle()
{
    delete dot_a;
    delete dot_b;
    delete dot_c;
}

double Triangle::Square()
{
    /*double a = dot_a.distanceTo(dot_b);
    double b = dot_b.distanceTo(dot_c);
    double c = dot_c.distanceTo(dot_a);*/

    double a = dot_a->distanceTo(*dot_b);
    double b = dot_b->distanceTo(*dot_c);
    double c = dot_c->distanceTo(*dot_a);


    double half_per = (a+b+c) / 2;
    double S = sqrt(half_per * (half_per - a) * (half_per - b) * (half_per - c));
    return S;
}

double Triangle::Per() 
{
    /*double a = dot_a.distanceTo(dot_b);
    double b = dot_b.distanceTo(dot_c);
    double c = dot_c.distanceTo(dot_a);*/

    double a = dot_a->distanceTo(*dot_b);
    double b = dot_b->distanceTo(*dot_c);
    double c = dot_c->distanceTo(*dot_a);
    return a + b + c;
}

void Triangle::Print_dist()
{
    //std::cout << "\nДлины сторон треугольника:\n" << dot_a.distanceTo(dot_b) << "\n" << dot_b.distanceTo(dot_c) <<"\n"<< dot_c.distanceTo(dot_a)<<std::endl;
    std::cout << "\nДлины сторон треугольника:\n" << dot_a->distanceTo(*dot_b) << "\n" << dot_b->distanceTo(*dot_c) << "\n" << dot_c->distanceTo(*dot_a) << std::endl;
}