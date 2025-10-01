/*
Name: Jane Njeri Muthoni
Reg No.CT101/G/26472/25
Date: 25th September 
 #include <stdio.h>
#include <math.h>
int main () {
   float principal,rate,time;
   //Number of times interest is compounded per year 
   int n;
   float simple interest, compound interest, amount;
   
   //input values 
   printf("Enter principal amount :");
   scanf("%f", & principal);
   printf("Enter rate of interest (in%):");
   scanf("%f",&rate);
   printf("Enter time (in years):");
   scanf("%f",&time);
   
   // simple interest calculation 
   simple interest = (principal*rate*time)/100;
   printf("/n simple interest= %2f/n", simple interest);
   // Input for compound interest 
   printf("/n Enter number of times interest is compounded (n):");
   scanf("%d",&n);
   
   //compound interest calculation 
   Amount=principal*pow((1+(rate/(n*100))),n*time);
   compound interest=Amount- principal;
   printf("compound interest %2f/n", compound interest); 
   printf("Total amount compound interest=%2f/n", amount);
   return 0;}