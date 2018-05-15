#include <stdio.h>

int main(){

    float avg[2];
    int marks[6];

    marks[0] = 1;
    marks[1] = 10;
    marks[2] = 20;
    marks[3] = 30;
    marks[4] = 40;
    marks[5] = 50;

    /* can also be initialized like this */
    int marker[6] = {1,20, 30, 40, 50};
    /* or it can be initialized without setting size*/
    int grades[] = {50, 65, 75, 85, 90, 100};

    avg[0] = 79.4;
    avg[1] = 84.6;

    printf("Average: %.3f\n", avg[1]);
    printf("Grade %d\n",grades[3] );
}
