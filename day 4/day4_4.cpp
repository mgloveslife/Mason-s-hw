//
// Created by 10373 on 2022/12/23.
//
#include <iostream>

int main()
{
    int grade;
    int passinggrade;
    std::cout << "Enter a grade (1-100): ";
    std::cin >> grade;
    std::cout << "\nEnter a passing grade: ";
    std:: cin>> passinggrade;

    if (grade >= passinggrade)
    {
        std::cout << "\nPass\n";
    }
    else
        std::cout << "\nFail\n";
    return 0;
}