#include<iostream>
using namespace std;
auto square(auto input)
{
    return input * input;
}

int main()
{
    int temp1;
    long temp2;
    float temp3;
    double temp4;
   printf("please input int- number:");
   std::cin>>temp1;
   printf("\nplease input long- number: ");
   std::cin>>temp2;
    printf("\nplease input float- number: ");
    std::cin>>temp3;
    printf("\nplease input double- number: ");
    std::cin>>temp4;
    square(temp1);
    square(temp2);
    square(temp3);
    square(temp4);

}