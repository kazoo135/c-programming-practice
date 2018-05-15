#include <stdio.h>

/*converts fahrenheit to celsius with a step of 20
and print the values as table */
int main(){ 
/* declar vars before assignment */
	float fahr, celsius;
	int lower, upper, step;
/* initialize vars */
	lower = 0;
	upper = 300;
	step = 20;

/* perform operations */
	printf("F temp\tC tem\n");
	while(fahr <= upper){
	celsius = (5.0/9.0) * (fahr - 32.0); 
	printf("%3.0f\t%6.1f\n", fahr, celsius);
	fahr = fahr + step; 
 	}
}
