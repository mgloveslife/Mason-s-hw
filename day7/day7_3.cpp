//
// Created by 10373 on 2022/12/2

#include <iostream>

class SimpleCat
{
public:
    SimpleCat();
    ~SimpleCat();
private:
    int itsAge;
};

SimpleCat::SimpleCat()
{
    std::cout << "Constructor called\n";
    itsAge = 1;
}

SimpleCat::~SimpleCat()
{
    std::cout << "Destructor called\n";
}

int main()
{
    std::cout << "SimpleCat Frisky ...\n";
    SimpleCat Frisky;

    std::cout << "SimpleCat *pRags = new SimpleCat ...\n";
    SimpleCat * pRags = new SimpleCat;

    std::cout << "delete pRag s ...\n";
    delete pRags;

    std::cout << "Exiting, watch Frisky go ...\n";

    std :: cout << "Simple Cat Spooky...\n";
    SimpleCat Spooky;


    return 0;
}