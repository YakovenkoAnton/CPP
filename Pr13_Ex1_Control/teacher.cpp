#include "teacher.h"

    void teacher::get_data()
    {
        human::get_data();
        cout << "Введите количество часов:";
        cin >> work_time;
    };

    void teacher::print_data()
    {
        cout << "\nПреподаватель:\n";
        human::print_data();
        cout << "\nКоличество часов:" << work_time << endl;
    };

    
