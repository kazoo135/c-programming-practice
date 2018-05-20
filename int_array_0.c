
#include <stdio.h>

#define SIZE 5

void displayRay(int[]);
void displayPointer(int *p);

// Global var
float y = 123.456; 
int main(){
	int ray[] = {1, 4, 7, 9, 2};
	int x = 33; 

	displayRay(ray);
	displayPointer(&x);
	
	printf("Value of x from main %d\n", x);
	printf("Address of x from main %p\n", &x);
	printf("Global var y value from main is %f", y);


	}
	
void displayRay(int list[])
{
	int i = 0;
	while(i < SIZE){
		printf("%d\t%d\n", i, list[i]);
		i++;
		}
	}

void displayPointer(int *p){
		printf("From displayPointer() Value of x passed as pointer p %d\n", *p);
		printf("Value of p as pointer %p\n", p);
		printf("Global var y from displayPointer %f\n", y);

		
	}


