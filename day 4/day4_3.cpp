//
// Created by 10373 on 2022/12/23.
//
#include <iostream>

int main()
{
    int grade;
    std::cout << "Enter a grade (1-100): ";
    std::cin >> grade;

    if (grade >= 70)
    {
        if (grade >= 90)
        {
            std::cout << "\nPass with an A grade\n";

        }
        if (grade >= 80)
        {
            std::cout << "\nPass with a B grade\n";

        }
        std::cout << "\nPass with a C grade\n";
    }
    else
        std::cout << "\nFail\n";



}