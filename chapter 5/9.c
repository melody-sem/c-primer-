#include<stdio.h>
void Temperatures(double temp);
int main()
{
    double temp;
    printf("Please enter fahrenheit :");
	while((scanf("%lf",&temp))==1){
        Temperatures(temp);
        printf("Please enter fahrenheit :");
}
    printf("Bye");
    return 0;
}
void Temperatures(double temp)
{
    const double x = 5.0;
    const double y = 9.0;
    const double m = 32.0;
    const double n = 273.16;
    double cerisius = x/y*(temp-m);


    printf("Fahrenheit is %.2lf\n ",temp);
    printf("Ceisius is %.2lf\n",cerisius);
    printf("Keivin is %.2lf\n",cerisius+n);

    //return 0;
}