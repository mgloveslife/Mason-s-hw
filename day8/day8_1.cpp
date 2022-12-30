//
// Created by 10373 on 2022/12/2
// calculate the average using array
#include <iostream>
int main()
{
    int n,i;
    float num[100], sum=0.0, avg;
    printf ("Enter the numbers of elements: ");
    scanf("%d",&n);

   if (n>100 || n<1)
   {
       printf("the number should between 1-100 please reenter your number\n");
       scanf("%d",&n);

   }

   for (i=0;i<n;i++)
   {
       printf("%d enter number: ",i+1);
       scanf("%f",&num[i]);
       sum+=num[i];

   }
    avg=sum/n;
   printf("aveage=%.2f",avg);
   return 0;


}