#include <stdio.h>

/*converts celsius to fahrenheit with a step of 10 
and print the values as table */
int main(){ 
/* declar vars before assignment */
	float fahr, celsius;
	int lower, upper, step;
/* initialize vars */
	lower = 0;
	upper = 300;
	step = 10;

/* perform operations */
	printf("C temp\t F temp\n");
	while(fahr <= upper){
	fahr = ( celsius * 9.0)/5.0 + 32.0; 
	printf("%3.1f\t%3.0f\n",celsius, fahr);
	celsius = celsius + step;
	if(celsius == 100){
		printf("Boiling\n");	
		} 
 	}
}
