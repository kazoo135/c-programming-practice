#include <stdio.h>

#define CHECK(number) if(number >= 10){ \
						printf("The number is great than 10");\
						}else{	\
							printf("The number is less than 10"); \
							}	

int main(){
	
	CHECK(2);
	printf("\nHello\n");
	return 0; 
	}
