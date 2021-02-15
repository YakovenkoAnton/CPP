#include <iostream>
#include "human.h"
#include "student.h"
#include "teacher.h"
using namespace std;

int main()
{
	system("chcp 1251");
	char choice;
	const int n=5;
	human* hum[n]; 
	
	for (int i=0; i<n; i++)
		{
		cout << "\nВводить данные для студента или преподавателя (s/t)?";
		cin >> choice;
		if (choice == 's')			
			hum[i] = new student;		
		else						
			hum[i] = new teacher;      
		hum[i]->get_data();
	} 
	
	for (human* h : hum) 
		h->print_data();
	
	return 0;
}