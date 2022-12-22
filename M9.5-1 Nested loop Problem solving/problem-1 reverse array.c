//print triangle star by nested loop
#include<stdio.h>
int main(){
    //input the size of array
    int n;
    scanf("%d", &n);
    //declear the input in array
    int array[n],i;

    //input value indexing by array loop
    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    //reverse operation iterate from last num
    for(i = n-1; i >= 0; i--)
    printf("%d ",array[i]);

    return 0;
}
