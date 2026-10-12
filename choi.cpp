#include "choi.h"
#include "robot.h"
#include "player.h"

choi::choi()
{
    Robot b;
    player p;

    string player_choice = p.display_p_choice();
    string robot_choice = b.display_b_choice();

    cout << "Robot da chon " << robot_choice << endl;

    if (player_choice == robot_choice)
    {
        cout << "Hoa roi -_- \n";
    }
    else if (player_choice == "keo")
    {
        if (robot_choice == "bao")
        {
            cout << "Ta da thang ^.^ \n";
        }
        else
        {
            cout << "Ta da thua T.T \n";
        }
    }
    else if (player_choice == "bua")
    {
        if (robot_choice == "keo")
        {
            cout << "Ta da thang ^.^ \n";
        }
        else
        {
            cout << "Ta da thua T.T \n";
        }
    }
    else if (player_choice == "bao")
    {
        if (robot_choice == "bua")
        {
            cout << "Ta da thang ^.^ \n";
        }
        else
        {
            cout << "Ta da thua T.T \n";
        }
    }
}