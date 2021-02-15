#pragma once
#include "human.h"

class student :
    public human
{
public:
    
    void get_data();
    void print_data();

private:
    int score;
};

