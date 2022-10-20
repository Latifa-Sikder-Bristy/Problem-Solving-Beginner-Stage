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
    if(a > b){
       printf("A is bigger");
    } else if (a < b){
        printf("B is bigger");
    } else{
        printf("They are equal");
    }

    return 0;
}
