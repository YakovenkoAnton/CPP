#include <iostream>
using namespace std;

template<class T>
double average(T arr[], int size)
{
    T sum = 0;
    for (int i = 0; i < size; i++) 
        sum += arr[i];
    return (double)sum/size;
}

template<class T>
void print_arr(T arr[], int size)
{
    int i = 0;
    for (int i = 0; i < size; i++) cout << arr[i] << ";";
    cout << endl;

}

int main()
{
    int arr[] = { 9,3,17,6,5,4,31,2,12 };
    double arrd[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 };
    char arrc[] = "Hello, word";
    long arrl[] = { 123456789, 234567891,123446551 };
    int k1 = sizeof(arr) / sizeof(arr[0]);
    int k2 = sizeof(arrd) / sizeof(arrd[0]);
    int k3 = sizeof(arrc) / sizeof(arrc[0]) - 1;
    int k4 = sizeof(arrl) / sizeof(arrl[0]);

    cout<< average(arr, k1) << endl;
    cout << average(arrd, k2) << endl;
    cout << average(arrc, k3) << endl;
    cout << average(arrl, k4) << endl;
}