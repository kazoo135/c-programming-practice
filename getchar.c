#include <stdio.h>

int main(){
	int i;
	int size = 10; 
	int count = 0; 
	char a = 'a';
	char s[size];
	char x; 
	printf("ASCII Vlaue of a is: %d\n", a);
	printf("Enter a single char:\n");
	x = getchar();
	printf("You input %c\n", x);
	printf("ASCII value of %c is %d\n", x, x);
	
	printf("Enter several chars");
	
	while(count < size){
		s[count] = getchar();
		++count; 
		}

	for(i = 0; i < size; i++){
		if( (int)s[i] == 10)
			continue;
		else
			printf("%c \t %d\n", s[i], (int)s[i]);

	}
	

	return 0; 
	}
