/*
NAME-JANE NJERI MUTHONI 
REG NO-CT101/G/26472/25
COURSE-COMPUTER SCIENCE,group A
DISCRIPTION-electricity bill
 
*/
#include<stdio.h>
float CalculateElectricityBill(float units);
void main(){
	float units,totalbill;
	printf("enter units:");
	scanf("%f",& units);
	totalbill=CalculateElectricityBill( units);
	printf("your totalbill is: %.2f",totalbill);
}
float CalculateElectricityBill(float units){
	float bill;
	if(units<=100){
		bill=10*units;
	}
	else if(units<=200){
		bill=(100*10)+15*(units-100);
		
	}
	else{
		bill=(100*10)+(100*15)+(units-200)*20;
	}
	
	return bill;
}
