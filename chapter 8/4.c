#include <stdio.h> 
#include <ctype.h> 
int main(void) 
{ 
    int ch; 
    int ct = 0; 
    int begin = 0;
    int count = 0;
    int num = 0;
    double avg;
    while ((ch = getchar()) != EOF) {
        if(isalpha(ch))
            begin=1;
        if(begin){
            num++;
            if(ispunct(ch)){
                begin=0;
                num--;
                count++;
            }
        }
    }
    printf("num=%d , count =%d\n",num,count);
    printf("The average of the letters is %.2f",(double)num/count);
    return 0; 
} 