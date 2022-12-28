//
// Created by 10373 on 2022/12/22.
//
// 3_1
#include <iostream>

int team(int teamx,int teamy)
{
    if (teamx > teamy)
    std :: cout<< "the winner is teamx" "\n";

    if (teamx < teamy)
    std :: cout<< "the winner is teamy""\n";
    
}

int main()
{
const int touchdown=6;
const int fieldgoal=3;
const int aftertouchdown=1;
const int safty=2;

int teamx=0;
int teamy=0;

teamx= touchdown+fieldgoal;
teamy= safty+ touchdown;

team(teamx,teamy);

return 0;
}