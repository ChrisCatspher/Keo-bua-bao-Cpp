#include "player.h"
#include <string>

player::player()
{
    cout << "Chon keo, bua, bao: ";
    cin >> player_choice;
    while (!kiem_tra_hop_le(player_choice))
    {
        cout << "Loi! Chon keo, bua, bao: ";
        cin >> player_choice;
    }
}

bool player::kiem_tra_hop_le(string a)
{
    string ls_player_choice[] = {"keo", "bua", "bao"};
    for (int i = 0; i < 3; i++)
    {
        if (a == ls_player_choice[i])
        {
            return true;
        }   
    }
    return false;
}

string player::display_p_choice()
{
    return player_choice;
}
