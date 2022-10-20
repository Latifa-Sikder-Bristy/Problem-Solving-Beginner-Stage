#include <stdio.h>
int main() {
    int a;
    int b;
    //take two user input
    printf("Enter an integer a: ");
    scanf("%d",&a);
    printf("Enter an integer b: ");
    scanf("%d",&b);

    //operations between two numbers
    int sumOfNum = a + b;
    int subOfNum = a - b;
    int muilOfNum = a * b;

    printf("%d %d %d", sumOfNum, subOfNum, muilOfNum);

    return 0;
}
