//
// Created by 10373 on 2022/12/2
// two matrices
#include <stdio.h>
int main() {
    int data[5];

    printf("Enter elements in term of 5: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", data + i);

    printf("You entered: \n");
    for (int i = 0; i < 5; i++)
        printf("%d\n", *(data + i));
    return 0;
}