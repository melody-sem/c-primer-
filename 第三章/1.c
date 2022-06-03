#include<stdio.h>
int main()
{
    int intmax = 2147483647;
    float toobig ;
    float toosmall;
    printf("%d %d %d\n",intmax+1,intmax+2,intmax);
    toobig = 3.4E38*10.0f ;
    printf("%e\n",toobig );
    toosmall = 0.123456789E-10/10;
    printf("%e\n",toosmall);

    return 0;
}