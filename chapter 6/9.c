#include <stdio.h> 
double resx(double n,double m);
int main( void ) 
{ 
    double n, m; 
    
    printf("Enter a pair of numbers: "); 
    
    while (scanf("%lf %lf", &n, &m) == 2) 
    { 
       resx(n,m);
    }
    return 0;
}
double resx(double n,double m)
{
        double res; 
        res = (n - m) / (n * m); 
        printf("(%.3g - %.3g)/(%.3g*%.3g) = %.5g\n", n, m, n, m, res); 
        printf("Enter next pair (non-numeric to quit): ");
}