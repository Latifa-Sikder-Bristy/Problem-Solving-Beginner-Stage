//3n+1 problem
//if n even n/2
//if n odd 3n+1
//continue do by loop
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    while (n > 1){
        //here printf for print the enter value
        printf("%d \n", n);
        if (n % 2 == 0){
            n = n / 2;
        }
        else{
            n = 3 * n + 1;
        }
    }
    printf("--->%d \n", n);

    return 0;
}
