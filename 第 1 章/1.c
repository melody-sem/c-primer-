#include<stdio.h>
#define PLAN    2.54
int main()
{
    float inch;
    float cm;
    printf("����Ӣ�磺");
    scanf("%f",&inch);
    cm  =   inch*PLAN;
    printf("%.2f Ӣ����� %.2f ����",inch,cm);
    return 0;
}