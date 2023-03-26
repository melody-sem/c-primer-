#include<stdio.h>
void sort(double *,double *,double *);
void exchange(double *,double *);

int main(void)
{
    double x, y,z; 
    
    printf("Enter three numbers (q to quit): "); 
    while (scanf("%lf %lf %lf", &x, &y,&z) == 3) 
    { 
        sort(&x, &y,&z); 
        printf("After sorting:min %f mid %f max %f.\n", x, y,z); 
        printf("Next three values (q to quit): "); 
    } 
    printf("Bye!\n"); 
    
    return 0; 
}

void sort(double *x,double *y,double *z)
{
    
    if(*x > *y)
        exchange(x,y);
    if(*x > *z)
        exchange(x,z);
    if(*y > *z)
        exchange(y,z);
        
}
void exchange(double *x,double *y)
{
    double val;
    val = *x;
    *x = *y;
    *y = val;
}