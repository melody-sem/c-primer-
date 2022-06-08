#include<stdio.h>
#define PLAN    2.54
int main()
{
    float inch;
    float cm;
    printf("输入英寸：");
    scanf("%f",&inch);
    cm  =   inch*PLAN;
    printf("%.2f 英寸等于 %.2f 厘米",inch,cm);
    return 0;
}