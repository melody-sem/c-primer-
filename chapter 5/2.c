#include<stdio.h>
int main()
{
    int integer;
    int number=0;
    printf("Please enter an integer:");
    scanf("%d",&integer);
    while(number<=10)
    {
        printf("%d ",integer++);
        //printf("%d\t",integer++);
        //printf("%d\n",integer++);

        number++;
    }
    return 0;
}