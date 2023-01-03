#include<iostream>

void debt(int temp)
{
    for (int i=1; i<=10;i++)
    {
        temp=temp+235;
        std::cout<<"the "<<i<<"day balance is :"<<temp<<"\n";
    }

}
int main()
{
    int temp;
    printf("please input the current national debt number(in unit of billion):");
    std::cin>> temp;
    debt(temp);

    return 0;

}
