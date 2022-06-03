#include<stdio.h>
#define PLAN    2.54
int main()
{
    float inch;
    float cm;
    printf("输入身高（英寸)：");
    scanf("%f",&inch);
    cm  =   inch*PLAN;
    printf("身高为 %.2f 厘米",cm);
    return 0;
}