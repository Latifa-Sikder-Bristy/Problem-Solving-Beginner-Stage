#include <stdio.h>
int main() {
    int a, b, c;
    //take three user input
    printf("Enter three integer: ");
    scanf("%d %d %d",&a,&b,&c);

    //using ternary operation
    //(a > b)?((a > c)? printf("A is bigger"): printf("C is bigger")):((b > c)? printf("B is bigger"): printf("C is bigger"));


    //operations between three numbers
    if(a > b && a > c){
       printf("A is bigger");
    } else if(b > a && b > c){
        printf("B is bigger");
    }else if(c > a && c > b){
        printf("C is bigger");
    }else if(a == b && a == c){
        printf("They are equal");
    }else if((a = b) && (a > c) && (b > c)){
        printf("A and B is bigger");
    }else if((a = c) && (a > b) && (c > b)){
        printf("A and C is bigger");
    }else {
        printf("B and C is bigger");
    }

    return 0;
}
