#include "choi.h"
#include "robot.h"
#include "player.h"

choi::choi()
{
    Robot b;
    player p;

    if (p.display_p_choice() == b.display_b_choice())
    {
        cout << "Robot da chon " << b.display_b_choice() << endl;

        cout << "Hoa roi -_- \n";
    }
    
    else if (p.display_p_choice() == "keo")
    {
        cout << "Robot da chon " << b.display_b_choice() << endl;

        if (b.display_b_choice() == "bua")
        {
            cout << "Ta da thang ^.^ \n";
        }
        else if(b.display_b_choice() == "bao")
        {
            cout << "Ta da thua T.T \n";
        }
    }
    
    else if (p.display_p_choice() == "bua")
    {
        cout << "Robot da chon " << b.display_b_choice() << endl;
        
        if (b.display_b_choice() == "bao")
        {
            cout << "Ta da thang ^.^ \n";
        }
        else if (b.display_b_choice() == "keo")
        {
            cout << "Ta da thua T.T \n";
        }
    }
    
    else
    {   
        cout << "Robot da chon " << b.display_b_choice() << endl;

        if (b.display_b_choice() == "keo")
        {
            cout << "Ta da thang ^.^ \n";
        }
        else if (b.display_b_choice() == "bua")
        {
            cout << "Ta da thua T.T \n";
        }
    }
}