//print triangle star by nested loop
#include<stdio.h>
int main(){
    //input the size of array
    int n, q, v;
    int sum = 0;
    scanf("%d", &n);
    //declear the input in array
    int array[n],i;

    //input value indexing by array loop
    for(i = 0; i < n; i++)
        scanf("%d", &array[i]);

    //input value Q refers to queries
    scanf("%d", &q);

    for(i = 0; i < q; i++){
       scanf("%d %d\n", &i, &v);
       array[i] += v;
    }
    for(i = 0; i < n; i++)
        printf("%d ", array[i]);


    return 0;
}
