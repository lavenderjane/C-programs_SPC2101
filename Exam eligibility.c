/*
Name:Jane Njeri Muthoni
Reg no;CT101/G/26472/25
Description:program to check student exam eligibility
*/
#include <stdio.h>
//main function 
int main(){
    int attendance,average_mark;
    printf("enter attendance:");
    scanf("%d",&attendance);
    printf("enter average mark:");
    scanf("%d",&average_mark);
    
    if(attendance >=75 && average_mark>=40){
        printf("eligible");
    }
    else{printf("not eligible");}
    
    return 0;
    }