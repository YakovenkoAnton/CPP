#include "teacher.h"

    void teacher::get_data()
    {
        human::get_data();
        cout << "������� ���������� �����:";
        cin >> work_time;
    };

    void teacher::print_data()
    {
        cout << "\n�������������:\n";
        human::print_data();
        cout << "\n���������� �����:" << work_time << endl;
    };

    
