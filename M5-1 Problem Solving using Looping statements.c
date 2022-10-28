#include<stdio.h>
int main()
{
    int n,i,w;
    //clear sum garbage values
    int sum = 0;
    printf("Enter a number of passengers: ");
    scanf("%d", &n);
    i = 1;
    while (i <= n){
        scanf("%d",&w);
        sum += w;
        i++;
    }
    printf("Total sum of weight = %d ",sum);
    /*
    for (i = 1; i <= n; i++){
        scanf("%d",&w);
        sum += w;
    }
    printf("Total sum of weight = %d ",sum);
    */
    return 0;
}
