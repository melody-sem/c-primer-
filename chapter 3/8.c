#include<stdio.h>
#define Pint_m  0.5
#define Ounce_m 8
#define Big_m   16
#define Small_m 48

int main()
{
    int cup;

    printf("Input number:");
    scanf("%d",&cup);
    printf("%d cup = %.2f pint\n",cup,(float)(cup*Pint_m) );
    printf("%d cup = %.2f ounce\n",cup,(float)(cup*Ounce_m) );
    printf("%d cup = %.2f big\n",cup,(float)(cup*Big_m) );
    printf("%d cup = %.2f small\n",cup,(float)(cup*Small_m) );

    return 0;
}