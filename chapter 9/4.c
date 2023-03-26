#include<stdio.h>

 double har_avg(double,double);
 int main(void)
 {
    double a,b;
    printf("Enter two number(double ):");
    while(scanf("%lf %lf",&a,&b)==2)
    {
        printf("%f 和 %f 的调和平均数为 %f ",a,b,har_avg(a,b));
        printf("\nEnter two number(q to quit ):");
    }
    printf("Bye!");
    return 0;
 }

 double har_avg(double a,double b)
 {
    double res;
    res = (1/a+1/b)/2;
    return 1/res;
 }