#include <stdio.h>

int main(){
    int size;
    int grades[size];
    int i;

    printf("How many students do you have?: \n");
    scanf("%d", &size);

    printf("Enter a number grade for each student\n");
    for(i = 0; i < size; i++){
        scanf("%d", &grades[i]);
    }

    for(i = 0; i < size; i++){
        printf("student %d received a grade of %d\n", i+1, grades[i]);
    }

}
