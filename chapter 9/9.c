#include <stdio.h>
double power(double n, int p); // ANSI prototype
int main(void)
{
    double x, xpow;
    int exp;
    
    printf("Enter a number and the positive integer power");
    printf(" to which\nthe number will be raised. Enter q");
    printf(" to quit.\n");
    while (scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = power(x,exp);   // function call
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        if(x == 0&&exp == 0)
        {
            printf("0 的0 次幂未定义,故为1\n");
        }
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");
    
    return 0;
}

double power(double n, int p)  // function definition
{
    
    if (p == 0)
    {
        return 1;
    }
    else if(p<0)
    {
        p = -p;
        n = 1.0/n;
    }
    
    return n*power(n,p-1);                // return the value of pow
}



