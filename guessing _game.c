/*
NAME- JANE NJERI MUTHONI 
REG NO- CT101/G/26472/25
COURSE-COMPUTER SCIENCE,group A
DISCRIPTION-number guesing game
 
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(NULL));
	int random_num=(rand()%20)+1;
	int guess;
	int attempts = 0;
	
	printf("ENTER NUMBER THAT IS BETWEEN 1-20");
		
	
	while(random_num!=guess)
	{
		printf("\nenter your guess:");
		scanf("%d",&guess);
	
	attempts++;
		
		if(guess>random_num){printf("\n Too High !");
	}else if(guess<random_num)
	{printf("\n Too Low !");
	}

	else{printf("\n congratulation");
		
	
	}
	

	}
	printf(" \n  number of attempts is %d",attempts);
	
	

	
	return 0;
}