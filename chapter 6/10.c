#include<stdio.h>
int main()
{
    int max,min;
    long int squeare_sum = 0;
    printf("Enter lower and upper integer limits:");
    scanf("%d %d",&min,&max);
    while(max>min)
    {   
        squeare_sum = 0;
        for(int i=min;max>=i;i++)
        {
            squeare_sum += i*i;
        }
        printf("The sum of the squares from %d to %d is %d\n",min*min,max*max,squeare_sum);
        printf("Enter next set of limits:");
        scanf("%d %d",&min,&max);
    }
    printf("Done");
    return 0;
}