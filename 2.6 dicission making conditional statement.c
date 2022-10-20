/*You have got X marks in your exam. As you are a good and regular student,
if you ask your teacher he/she can give you at most Y bonus marks.
Now you need to tell if you take bonus marks will your number became 100?
Write a C program to take two non-negative integers X and Y as input and print YES or NO.
*/
#include <stdio.h>
int main() {
    int marks, bonus;
    printf("Enter marks and bonus: ");
    scanf("%d %d",&marks, &bonus);

    if((marks + bonus) >= 100 ){
        printf("Yes");
    }else {
        printf("No");
    }

    return 0;
}
