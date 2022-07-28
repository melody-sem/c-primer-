#include<stdio.h>
#define RADIO 0.3937
int main()
{
    float height;
    int feet;
    float inch;
    printf("Enter a height in centimeters:");
    scanf("%f",&height);
    while(height>0)
    {
        inch=height * RADIO;
        feet = inch/12;
        inch = inch - (feet*12);
        printf("%.1f cm = %d feet, %.1f inches\n",height,feet,inch);
        printf("Enter a height in centimeters(<=0 to quit):");
        scanf("%f",&height);
    }
    printf("bye");

    return 0;
}