// Write a C program for one non negative integer as input and check if it is even or odd

#include <stdio.h>
int main() {
    int a;
    printf("Enter an non negative integer: ");
    scanf("%d",&a);

    //operations between two numbers
    (a % 2)? printf("Odd"): printf("Even");

    return 0;
}

