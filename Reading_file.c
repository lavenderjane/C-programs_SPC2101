/*
NAME: JANE NJERI MUTHONI 
REG NO:CT101/G/26472/25
COURSE:COMPUTER SCIENCE GROUP A
DESCRPTION:reading file and calculating total
*/
#include <stdio.h>
int main(){
     FILE *sold;
     int price;
     int sum=0;
	sold=fopen("C:\\Users\\HP\\Desktop\\c work\\sales.txt","r");
/*	
	printf("enter the price of sold item:");
	scanf("%d",&price);
	fprintf(sold,"\n %d",price);
	*/
	
	
   
   while(fscanf(sold,"%d",&price)==1){
	printf("\n %d",price);
	sum=sum+price;
   }
   printf("\n the total amount sold is: %d",sum);
   

	
	
	fclose(sold);
	
	return 0;
}