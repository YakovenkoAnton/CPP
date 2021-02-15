// Задание 1. Запись текста в файл
// Требуется написать программу для записи небольшого стихотворения с клавиатуры в текстовый файл.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	system("chcp 1251");
	string input[20];      
	string filename = "test.txt";
	ofstream fout(filename);  
	int i=0;
	cout << "Введите строки для записи в файл, завершения введите [q]" << endl;
	do
	{
		getline(cin, input[i]);	
		i++;
	} while (input[i-1] != "q");

	for (int j = 0; j < i-1; j++)
	{
		fout << input[j] << "\n";
	}
	fout.close(); 
}
