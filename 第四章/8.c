#include<stdio.h>
#define M_K 1.609
int main()
{
    float mile_number,gas_consume;
    float speed1,speed2;//1Ϊÿ������ʻ����Ӣ��  speed2 ÿ�ٹ�����Ͷ�����
    const int ga_l = 3.785;

    printf("������̣�");
    scanf("%f",&mile_number);
    printf("�������������������أ���");
    scanf("%f",&gas_consume);

    speed1 = mile_number/gas_consume;
    printf("%.1f Ӣ��/����\n",speed1);
    speed2 = gas_consume*ga_l/(mile_number*M_K/100);
    printf("%.1f ��/100����\n",speed2);


    return 0;
}