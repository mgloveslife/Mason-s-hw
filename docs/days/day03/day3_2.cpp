//
// Created by 10373 on 2022/12/21.
//

#include <iostream>

int add(int x, int y, int z)
{
    std :: cout<< "runing the calculator \n" ;
    return(x+y+z);

}

int main()
{
    std :: cout << "What is 867+5309+999?\n";
    std :: cout << "The sum is "<< add(867, 5309,999) << "\n\n";
    return 0;

}