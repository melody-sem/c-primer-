#include<stdio.h>
#define M_K 1.609
int main()
{
    float mile_number,gas_consume;
    float speed1,speed2;//1为每加仑行驶多少英里  speed2 每百公里耗油多少升
    const int ga_l = 3.785;

    printf("输入里程：");
    scanf("%f",&mile_number);
    printf("输入消耗汽油量（加仑）：");
    scanf("%f",&gas_consume);

    speed1 = mile_number/gas_consume;
    printf("%.1f 英里/加仑\n",speed1);
    speed2 = gas_consume*ga_l/(mile_number*M_K/100);
    printf("%.1f 升/100公里\n",speed2);


    return 0;
}