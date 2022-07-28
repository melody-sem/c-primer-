#include<stdio.h>
#include<math.h>
int main( void )
{
    int x;
    double sum1=0;
    double sum2=0;

    printf("Enter an integer:");
    scanf("%d",&x);
    while(x>0)
    {
        for(int i=1;i<=x;i++)
        {
            sum1=sum1+1.0/i;
            sum2=sum2+pow(-1.0,i-1)*1.0/i;
        }
        printf("%f\n",sum1);
        printf("%f\n",sum2);

        printf("Enter the next integer:");
        scanf("%d",&x);
    }
    return 0;
}