#include "robot.h"
#include <string>
#include <cstdlib>
#include <ctime>

Robot::Robot()
{
    string list[3] = {"keo", "bua", "bao"};
    int n = 3;
    srand(time(0));
    int randindex = rand() % n;
    bot_choice = list[randindex];
}

string Robot::display_b_choice()
{
    return bot_choice;
}
