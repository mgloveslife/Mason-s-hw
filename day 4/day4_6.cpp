//
// Created by 10373 on 2022/12/23.
//
#include <iostream>

int average(int x, int y);
float average(float x1, float y1);
long average(long x2, long y2);

int main()
{
    int x;
    int y;
    std :: cout<< "please input two value to get the average:";
    std :: cin>> x ;
    std :: cin>> y;

    std :: cout<< "the average is: "<< average(x,y)<<"\n";


float x1;
float y1;

    std :: cout<< "please input two value to get the average of float values:";
    std :: cin>> x1 ;
    std :: cin>> y1;

    std :: cout<< "the average is: "<< average(x1,y1)<<"\n";


    long x2;
    long y2;
    std :: cout<< "please input two value to get the average of long values:";
    std :: cin>> x2 ;
    std :: cin>> y2;

    std :: cout<< "the average is: "<< average(x2,y2)<<"\n";

    return 0;

}

//int
int average(int x,int y)
{
    return (x+y)/2;
}
//float
float average(float x1, float y1)
{
    return (x1+y1)/2;
}
//long
long average(long x2, long y2)
{
    return (x2+y2)/2;
}