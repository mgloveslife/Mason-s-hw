//
// Created by 10373 on 2022/12/23.
//

#include <iostream>

int main()
{
    char grade;
    std::cout << "Enter your letter grade (ABCDEFG): ";
    std::cin >> grade;
    switch (grade) {
        case 'A':
            std::cout << "Finally!\n";
            break;
        case 'B':
            std::cout << "You can do better!\n";
            break;
        case 'C':
            std::cout << "I'm disappointed in you!\n";
            break;
        case 'D':
            std::cout << "You're not smart!\n";
            break;
        case 'E':
            std::cout << "do you try your best?\n";
            break;
        case 'F':
            std::cout << "please retake this class\n";
            break;
        case 'G':
            std::cout << "please talk to me\n";
            break;
        default:
            std::cout << "That's not even a grade!\n";
            break;
    }
            return 0;
    }