/*Write a C program to take one non-negative integer as input and print the grade according to that input. The
grade system is shown below

0-32->F 60-69 -> A-
33-39->D 70-79->A
40-49 -> C 80-100-> A+
50-59->B
*/
#include <stdio.h>
int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);

    if(a < 100 && a > 0){
            if(a < 100 && a > 80){
                printf("A+");
            }else if (a < 79 && a > 70){
                printf("A");
            }else if (a < 69 && a > 60){
                printf("A-");
            }else if (a < 59 && a > 50){
                printf("B");
            }else if (a < 49 && a > 40){
                printf("C");
            }else if (a < 39 && a > 33){
                printf("D");
            }else
                printf("F");
    }else printf("Invalid ");

    return 0;
}


