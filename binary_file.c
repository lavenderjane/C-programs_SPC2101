/*
NAME: JANE NJERI MUTHONI 
REG NO:CT101/G/26472/25
COURSE:COMPUTER SCIENCE GROUP A
DESCRPTION:binary file creation and reading
*/
#include <stdio.h>
#include<stdlib.h>
 struct students{
     char reg_no[50];
     char name[50];
     int marks;}; 
int main(){
     FILE *info;
     struct students s;
     
	info=fopen("C:\\Users\\HP\\Desktop\\c work\\results.dat","rb");
	if(info==NULL){
		printf("error :opening file");
	}
	/*printf("enter students name :");
	scanf("%s",&s.name);
	
	printf("enter students registration number:");
	scanf("%s",&s.reg_no);
	
	printf("enter students  marks:");
	scanf("%d",&s.marks);
	fwrite(&s,sizeof(struct students),1,info);*/


	
		while(fread(&s,sizeof(struct students),1,info)==1){
			
			printf("Name:%s",s.name);
			printf("\n Marks:%d",s.marks);
		}
		fclose(info);
		return 0;
	}
	
	