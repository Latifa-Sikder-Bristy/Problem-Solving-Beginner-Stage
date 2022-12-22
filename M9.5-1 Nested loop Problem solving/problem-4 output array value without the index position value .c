#include <stdio.h>
int main() {
    int n, j;
    scanf("%d", &n);
    int array[n],i;

    //input array loop
    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    printf("\n");
    //output array loop
    for(i = 0; i < n; i++){
        printf("%d - ", array[i]);
        for(j = 0; j < n; j++){
            if(array[i] != array[j]){
                printf("%d ", array[j]);
            }
        }
        printf("\n");
    }

    return 0;
}

