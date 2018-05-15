#include <stdio.h>

int main(){

    int num;
    num = 3;

    printf("Enter 1 to start, 2 to play, or 3 to quit:\n");
    scanf("%d", &num);

/* think of the case as options that depend on the value of the expression within switch()*/
/* Note your case statements do not to be in ascending order - random order will still work */
    switch(num){
        case 1:
            printf("Get Ready\n");
            break;
        case 2:
            printf("Good Luck\n");
            break;
        case 3:
            printf("Good Bye\n");
            break;
        default:
            printf("Number not found\n");
    }

/* since the characters are stored in mememory as ints based on ASCII code
They can also be used in switch( express )
*/
char c = 'A';
printf("%d\n", c);

char grade;

printf("Enter letter grade 'A', 'B', or 'C':\n");
scanf("%c", &grade);

switch(grade){
        case 'A':
            printf("Excellent Work\n");
            break;
        case 'B':
            printf("Good Job\n");
            break;
        case 'C':
            printf("Not Bad\n");
            break;
        default:
            printf("Take the course again\n");

}

    return 0;
}
