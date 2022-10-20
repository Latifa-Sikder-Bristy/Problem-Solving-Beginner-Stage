//Write a C program to take three non-negative integers as input and tell if it forms a valid triangle. A triangle is valid if sum of its two sides is greater than the third side. Print YES or NO. All sides must be valid (greater than 0).
// Write a C program for one non negative integer as input and check if it is even or odd

#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three non negative integer: ");
    scanf("%d %d %d",&a, &b, &c);

    if(((a + b) > c) && ((c + b) > a) && ((a + c) > b) ){
        printf("Yes");
    }else {
        printf("No");
    }

    return 0;
}

