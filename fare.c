/*
NAME-JANE NJERI MUTHONI 
REG NO-CT101/G/26472/25
COURSE-COMPUTER SCIENCE,group A
DISCRIPTION- fare
 
*/
#include<stdio.h>
float calculatefare(float kilometers);
void main(){
	float kilometers,totalfare;
	printf("enter kilometers:");
	scanf("%f",&kilometers);
	totalfare=calculatefare(kilometers);
	
	printf("totalfare:%f",totalfare);
	
}
float calculatefare(float kilometers){
	float fare;
	fare=kilometers*50;
	
	return fare;
}
