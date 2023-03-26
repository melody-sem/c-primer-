#include <stdio.h> 
//#define BASEPAY 10 // $10 per hour 
#define BASEHRS 40 // hours at basepay 
#define OVERTIME 1.5 // 1.5 time 
#define AMT1 300 // 1st rate tier 
#define AMT2 150 // 2st rate tier 
#define RATE1 0.15 // rate for 1st tier 
#define RATE2 0.20 // rate for 2nd tier 
#define RATE3 0.25 // rate for 3rd tier 
void showMessage();
int main(void) 
{  
    double hours;  
    double gross;  
    double net;  
    double taxes;   
    double a;
    char number;

    while(1){
        showMessage();
        scanf("%c",&number);
        while (getchar() != '\n')
            continue;
        while(1){
            if(number=='a'||number=='b'||number=='c'||number=='d'||number=='q'){
            break;
            }
            else {   
                printf("Please enter the right number.\n");         
                showMessage();
                scanf("%c",&number); 
                while (getchar() != '\n')
                    continue;
            }
        }
        if(number == 'q') break;
        switch(number)
        {
            case 'a': a=8.75;
                    break;
            case 'b': a=9.33;
                    break;
            case 'c': a=10.00;
                    break;
            case 'd': a=11.20;
                    break;
        }
        printf("Enter the number of hours worked this week: ");  
        scanf("%lf", &hours);
        while (getchar() != '\n')
            continue;  
        if (hours <= BASEHRS)  
            gross = hours * a;  
        else  
            gross = BASEHRS * a + (hours - BASEHRS) * a * OVERTIME;  

        if (gross <= AMT1)  
            taxes = gross * RATE1;  
        else if (gross <= AMT1 + AMT2)  
            taxes = AMT1 * RATE1 + (gross - AMT1) * RATE2;  
        else  
            taxes = AMT1 * RATE1 + AMT2 * RATE2 + (gross - AMT1 - AMT2) * RATE3;  

        net = gross - taxes;  
        printf("gross: $%.2f; taxes: $%.2f; net: $%.2f\n\n\n", gross, taxes, net);   
    }
    printf("It is end.");
    return 0; 
}  
void showMessage(){
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("a) $8.75/hr\tb) $9.33/hr\n");
    printf("c) $10.00/hr\td) $11.20/hr\n");
    printf("q) quit\n");
}