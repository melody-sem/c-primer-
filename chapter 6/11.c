#include<stdio.h>
#define NUMBER  8
int main()
{
    int a[NUMBER];

    printf("Enter 8 integer:");
    for(int i=0;i<NUMBER;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Output 8 integer:");
    for(int i=NUMBER-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    
    return 0;

}