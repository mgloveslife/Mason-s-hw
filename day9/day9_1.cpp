//
// Created by 10373 on 2022/12/2
#include <iostream>
short factor(int, int&, int&);
int main()
{
    int number, squared, cubed;
    short error;
    printf("please enter the number (0-20): ");
    std::cin>> number;

    error = factor(number, squared, cubed);

    if (!error)
    {
        std::cout << "number: " << number << "\n";
        std::cout << "square: " << squared << "\n";
        std::cout << "cubed: "  << cubed   << "\n";
    }
    else
        std::cout << "Error encountered!!\n";
    return 0;
}

short factor(int n, int &psquared, int &pcubed)
{
    short value = 0;
    if (n > 20)
    {
        value = 1;
    }
    else
    {
        psquared = n*n;
        pcubed = n*n*n;
        value = 0;
    }
    return value;


}


