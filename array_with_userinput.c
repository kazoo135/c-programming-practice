#include <stdio.h>

/* Take in user float vals, add them to an array of length size*/

int main(){
    int size;
    float grades[size];
    int index, counter;
    float sum;
    float avg;

    printf("How many students are in your class?\n");
    scanf("%d", &size);
    printf("Enter a number grade for each \n");

/*user inputs value to the grades array */
    for(index = 0; index < size; ++index){
        scanf("%f", &grades[index]);
    }
///* output each element of the array grades*/
    printf("Grades are:\n");

    for(counter = 0; counter < size; counter++){
        printf("%.2f ,", grades[counter]);
        sum += grades[counter];
    }

    avg = sum/size;
   printf("\nClass Average is: %.2f", avg);

    return 0;
}
