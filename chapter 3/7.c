#include<stdio.h>
#define PLAN    2.54
int main()
{
    float inch;
    float cm;
    printf("������ߣ�Ӣ��)��");
    scanf("%f",&inch);
    cm  =   inch*PLAN;
    printf("���Ϊ %.2f ����",cm);
    return 0;
}