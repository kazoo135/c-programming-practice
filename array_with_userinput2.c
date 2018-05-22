#include <stdio.h>

int main(){
	int size;
	int i;
	printf("How many marks will you enter?:\n");
	scanf("%d", &size);
	float marks[size];


	if(size <= 0){
		printf("You did not enter any grades");
		}else
		for(i = 0; i < size; i++){
			printf("Enter mark %d: ", i+1);
			scanf("%f", &marks[i]);
		}
		printf("The marks you entered:\n");
		for(i = 0; i < size; i++){
			printf("%d\t%.3f\n",i+1, marks[i]);
		}	
		
	return 0; 
	}
