//
// Created by 10373 on 2022/12/23.
//
#include <iostream>

float convert(float);

int main()
{
    float fahrenheit;
    float celsius;

    std::cout << "Please enter the temperature in Celsius: ";
    std::cin >> celsius;

    fahrenheit = convert(celsius);

    std::cout << "\nHere's the temperature in Fahrenheit: ";
    std::cout << fahrenheit << "\n";
    return 0;
}

float convert(float celsius)
{
    float fahrenheit;
    fahrenheit = celsius * 9 / 5 + 32;
    return fahrenheit;
}