/*
Name:Jane Njeri Muthoni
Reg no;CT101/G/26472/25
Description:program to calculate water bill
*/
#include<stdio.h>
//main function
int main (){
    float units,total_bill;
    printf("enter number of units:");
    scanf("%f",&units);
    if(units<=30){
        total_bill=units*20;
    }
    else if(units<=60){
        total_bill=units*25;
    }
    else{total_bill=units*30;}
    
    printf("total bill is kes %.2f",total_bill);
    
    return 0;
    }