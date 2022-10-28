/*//input initial chocolate
//for 4 packet get 1 chocolate
chocolate   packet
100         100
25          25
6           6+1=7
1           1+3=4
1           1
*/
#include<stdio.h>
int main()
{
    int n;
    printf("How many chocolate : ");
    scanf("%d", &n);
    int choc = n;
    int pack = n;

    while(pack >= 4){
        choc += (pack / 4);
        pack = (pack/4) + (pack%4);
    }
    printf("Total chocolate %d",choc);
    return 0;
}
