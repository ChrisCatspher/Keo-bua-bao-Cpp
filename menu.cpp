#include "menu.h"
#include "choi.h"
menu::menu()
{
    while (true)
    {
        cout << "=========== Menu ===========\n";
        cout << "1. Choi keo bua bao\n";
        cout << "2. Nghi choi\n";
        cout << "Chon: ";
        cin >> menu_choice;

        while (!kiem_tra_menu_choice(menu_choice))
        {
            cout << "Loi! Chon 1, 2: ";
            cin >> menu_choice;
        }
        
        if (menu_choice == "1")
        {
            choi play;
        }
        else
        {
            cout << "Da tat chuong trinh. \n";
            break;
        }
    }
}

bool menu::kiem_tra_menu_choice(string a)
{
    string ls_menu_choice[] = {"1", "2"};
    for (int i = 0; i < 2; i++)
    {
        if (a == ls_menu_choice[i])
        {
            return true;
        }
        
    }
    
    return false;
}
