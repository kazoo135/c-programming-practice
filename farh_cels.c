#include <stdio.h>

/*converts fahrenheit to celsius with a step of 20
and print the values as table */
int main(){ 
/* declar vars before assignment */
	int fahr, celsius;
	int lower, upper, step;
/* initialize vars */
	lower = 0;
	upper = 300;
	step = 20;

/* perform operations */
	while(fahr <= upper){
	celsius = 5 * (fahr - 32) / 9;
	printf("%d\t%d\n", fahr, celsius);
	fahr = fahr + step; 
 	}
}
