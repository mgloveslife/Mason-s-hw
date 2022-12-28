//
// Created by 10373 on 2022/12/23.
//


#include <iostream>

int main()
{
    int y = 0;
    int x = 0;

    while (x < 100)
    {
        y++;
        if (y % 16 != 0)
        {
            continue;
        }
        std::cout << y << " ";
        x++;
    }

    std::cout << "\n";
    return 0;
}