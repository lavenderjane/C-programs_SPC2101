/*
NAME:JANE NJERI MUTHONI
REG NO:CT101/G/26472/25
COURSE:COMPUTER SCIENCE GROUP A
DESCRPTION:3D array for a chain of hotel occupancies 
*/
#include <stdio.h>
int main(){
	int chain[3][5][10];
	int k,i,j;
	for(k=0;k<=2;k++){
		for(i=0;i<=4;i++){
		 for(j=0;j<=9;j++){
		printf("enter 1 or 0 to represent occupied or vaccant respectively:");
		scanf("%d",&chain[k][i][j]);}	
		}		
	}
	for(k=0;k<=2;k++){
		int sum=0;
		for(i=0;i<=4;i++){
			printf("\n");
		 for(j=0;j<=9;j++){
		 printf("\t %d",chain[k][i][j]);
		 sum=sum+chain[k][i][j];	
		 }	 
		}
		printf("\nthe total numer of occupied rooms:%d",sum);	 	
		
		printf("\n");
	}
	
}