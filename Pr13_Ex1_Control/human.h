#pragma once
#include <string>
#include <iostream>

using namespace std;
 
class human 
{

public:
	string name;
	string last_name;
	string second_name;
	
public:
	virtual void print_data();
	virtual void get_data();
};
