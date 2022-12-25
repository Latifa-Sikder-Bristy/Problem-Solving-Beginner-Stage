//https://www.hackerrank.com/contests/batch-2-course-2-lab-assignment-01/challenges/bablu-and-phone
#include<stdio.h>
int main()
{
    //STEP 1 INPUT ARRAY SIZE
    int arr[100]; //Each element memory size
    int x, i = 0;
    char c;
    scanf("%d",&x);

    int battery3x, battery2x, battery1x;


    //STEP 2 INPUT ARRAY ELEMENT
    for(i = 0; i < x; i++){
        scanf("%d",&arr[i]);
        scanf("%c",&c);
    }

    //int input[0];
    for(i = 0; i <= x; i++){

        //Conditional logics
        if(arr[i] >= 80 && arr[i] <= 100)
        {
            battery3x = 3 * (100 - arr[i]);
            printf("%d minutes\n", battery3x);
        }
        else if(arr[i] >= 60 && arr[i] < 80)
        {
            battery3x = 3 * (100 - 80);
            battery2x = 2 * (80 - arr[i]);
            int sum60to100 = battery3x + battery2x;
            printf("%d minutes\n", sum60to100);
        }
        else if(arr[i] >= 0 && arr[i] < 60)
        {
            battery1x = (60 - arr[i]);
            battery2x = 2 * (80 - 60);
            battery3x = 3 * (100 - 80);

            int sum0to100 = battery3x + battery2x + battery1x;
            printf("%d minutes\n", sum0to100);
        }
        else{

        }
    }
    return 0;
}

