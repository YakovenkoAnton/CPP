#include <string>
#include <iostream>

using namespace std;

class DivideByZeroError
{
public:
    DivideByZeroError() : message("Деление на нуль") { }

    void printMessage() const { cout << message << endl; }

private: string message;
};

float quotient(int numl, int num2)
{
    if (num2 == 0)
        throw DivideByZeroError();
    return (float)numl / num2;
}
    
int main() 
{
    system("chcp 1251");
    cout << "Введите числитель операции деления:\n";
    int number;
    cin >> number;
    for (int i = -10; i < 10; i++)
    {
        try
        {
            float result = quotient(number, i);
            cout << "Частное равно " << result << endl;
        }
        catch (DivideByZeroError& error)
        {
            cout << "ОШИБКА: "; error.printMessage();
        }
    }
    return 0;
}
    


