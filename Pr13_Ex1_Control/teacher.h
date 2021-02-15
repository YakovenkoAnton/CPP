#pragma once
#include "human.h"

class teacher : public human {

public:
    void get_data();
    void print_data();
    
private:
	unsigned int work_time;
};