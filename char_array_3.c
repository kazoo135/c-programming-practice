#include <stdio.h>
#include <stdlib.h>

int main(){
	char s3[] = "Cooking Tofu";
	int size = 60;
	int i;
	printf("%s\n", s3);
	for(i = 0; i < size; i++){
		if(s3[i] == '\0'){
			break; 
		}else{
			printf("%d\t%c\n", i, s3[i]);
		}
	}
	
	return 0;
	}
