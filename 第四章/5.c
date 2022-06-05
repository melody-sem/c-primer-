#include<stdio.h>
int main()
{
    float speed,file;
    float time;

    printf("input magabits per second and megabytes");   
    scanf("%f %f",&speed,&file);
    time = file*8/speed;

    printf("At %f meganots per second,a file of %f megabytes\n",speed,file);
    printf("download in %.2f seconds",time);



    return 0;
}