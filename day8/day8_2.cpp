//
// Created by 10373 on 2022/12/2
// find the largest element in an array
#include<stdio.h>
#include<iostream>
int main()
{
    int n;
    double arr[100];
    printf("please enther the number of elements (1 to 100):");
    scanf("%d",&n);

    for (int i=0; i<n; i++)
    {
        printf("please enter the numbers %d: ",i+1);
        scanf("%lf",&arr[i]);

    }

    for (int i=1;i<n;i++)
    {
        if (arr[0]<arr[i])
        {
            arr[0]=arr[i];
        }

    }
    printf("Largest element will be =%.2lf",arr[0]);
    return 0;
    

}

