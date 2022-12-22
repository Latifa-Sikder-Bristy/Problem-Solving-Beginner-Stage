//3-1 Week 03 Conceptual Session 01 [31st Oct]11
//https://drive.google.com/file/d/1NrFWRtAhbUfqUJ5ehrBVC656k5WHynrl/view?usp=sharing
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int array[n],i;

    //input array loop
    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++) {
                printf("%d %d ", i,j);
            if(array[i] != array[j])
                printf("No \n");
            else
                printf("Yes \n");
        }
    }
    return 0;
}

