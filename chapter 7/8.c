// Programming Exercise 7-7 
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
    int number;

    while(1){
        showMessage();
        scanf("%d",&number);
        while(1){
            if(number==1||number==2||number==3||number==4||number==5){
            break;
            }
            else {   
                printf("Please enter the right number.\n");         
                showMessage();
                scanf("%d",&number); 
            }
        }
        if(number == 5) break;
        switch(number)
        {
            case 1: a=8.75;
                    break;
            case 2: a=9.33;
                    break;
            case 3: a=10.00;
                    break;
            case 4: a=11.20;
                    break;
        }
        printf("Enter the number of hours worked this week: ");  
        scanf("%lf", &hours);  
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
        printf("gross: $%.2f; taxes: $%.2f; net: $%.2f\n", gross, taxes, net);   
    }
    printf("It is end.");
    return 0; 
}  
void showMessage(){
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr\t2) $9.33/hr\n");
    printf("3) $10.00/hr\t4) $11.20/hr\n");
    printf("5) quit\n");
}