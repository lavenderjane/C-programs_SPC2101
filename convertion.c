/*
NAME-JANE NJERI MUTHONI 
REG NO-CT101/G/26472/25
COURSE-COMPUTER SCIENCE,group A
DISCRIPTION-convertion
 
*/
#include<stdio.h>
float convertToCelsius(float fahrenheit);
void main(){
	
	float fahrenheit,conversion;
	printf("enter the value of fahrenheit:");
	scanf("%f",&fahrenheit);
	conversion=convertToCelsius( fahrenheit);
	
	printf("the coversion is:%.2f",conversion);
}
float convertToCelsius(float fahrenheit){
	float celcius;
	celcius=(fahrenheit-32)*5/9;
	return celcius;
}

