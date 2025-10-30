/*
NAME:JANE NJERI MUTHONI
REG NO:CT101/G/26472/25
COURSE:COMPUTER SCIENCE GROUP A
DESCRPTION:1D array for input and calculation of earnings
*/
#include <stdio.h>
int main(){
	int i;
	int average;
	int sum=0;
	int revenue[7];
	for(i=0;i<=6;i++){
		printf("enter the earnings of each day:");
		scanf("%d",&revenue[i]);	
	}
	for(i=0;i<=6;i++){
		printf("\t %d",revenue[i]);
		sum=sum+revenue[i];
		
	}
	average=sum/7;
	printf("\n the total revenue is:%d",sum);
	printf("\n the average revenue is:%d",average);
	
}