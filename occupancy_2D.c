/*
NAME:JANE NJERI MUTHONI
REG NO:CT101/G/26472/25
COURSE:COMPUTER SCIENCE GROUP A
DESCRPTION:2D array for display of hotrl occupancy
*/
#include <stdio.h>
int main(){
	int i,j;
	int occupancy[5][10];
	for(i=0;i<=4;i++){
		for(j=0;j<=9;j++){
		printf("enter 1 or 0 to represent occupied or vaccant respectively:");
		scanf("%d",&occupancy[i][j]);	
		}		
	}
	for(i=0;i<=4;i++){
		for(j=0;j<=9;j++){
			printf("\t %d",occupancy[i][j]);
			
		}
			printf("\n");
	}
		
	
}