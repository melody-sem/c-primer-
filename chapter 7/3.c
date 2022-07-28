#include<stdio.h>
#define STOP    0
int main( void )
{
    int even = 0;
    double sum_e = 0;
    int odd = 0;
    double sum_o = 0;
    int i;

    scanf("%d",&i);
    while(i!=STOP){
        if(i%2==0){
            even++;
            sum_e+=i;
        }
        else{
            odd++;
            sum_o+=i;
        }
        scanf("%d",&i);
    }
    printf("even integer is %d,acerage is %.2lf\n",even,sum_e/even);
    printf("odd integer is %d,acerage is %.2lf\n",odd,sum_o/odd);
    return 0;
}