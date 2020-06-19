#include<stdio.h>

//Structure Arrays

struct Sisters{
	
	char name[20];
	int age;
	char interested[30];
};


int main(){
	
	int i;
	
	struct Sisters sister[3];
	
	for(i=0;i<3;i++){
		printf("Enter the information of %dth sister(name,age,interested):",i+1);
		scanf("%s %d %s",&sister[i].name,&sister[i].age,&sister[i].interested);
	}
	for(i=0;i<3;i++){
		printf("Information of %dth sister:\n",i+1);
		printf("Her name is %s.\nHer age is:%d\nHer interested is:%s\n",sister[i].name,sister[i].age,sister[i].interested);
	}
	
	return 0;
}
