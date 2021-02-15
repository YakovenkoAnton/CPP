// Задание 3. Размен монет

#include <iostream>
#include <math.h>

using namespace std;

int exch(int coin, int& amount)
{ 
    int rez = amount / coin;
    amount -= rez * coin;
    return rez;
}

int main()
{   
    system("chcp 1251");
    int amount;
    int coins[] = { 10,5,2,1};
    cout << "Введите зачение для размена: ";
    cin >> amount;
    for (int i : (coins))
    {
        cout << "Монета " << i << " рублей " << exch(i, amount) << " шт." << endl;
    }
}
