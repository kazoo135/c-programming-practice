#include <stdio.h>

int main(){ 
	int age = 21;
	int adol = 18;
	int senior = 65; 
	if(age >= adol && age < senior){ 
		printf("You are an adult\n");
	}else if(age >= 13 <= 21){
		printf("You are either an adolescent");
	}else{ 
		printf("You are a senior or a child");	
	}

}	
