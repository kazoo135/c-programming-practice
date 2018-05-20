#include <stdio.h>

/* the function prototype is declared before main at head of program*/
/* It tells the compiler that the program will be using this function at some point*/
/* You can define all your user defined functions before the main function
in wich case there is no need for prototyping
*/

void display();
int addtwo(int a, int b);

int main(){
    int x = 20;
    int y = 10;
    int result;
    /* a call to function from main */
    display();
    result = addtwo(x, y);
    printf("From addtwo: %d\n", result);
    return 0;
}

/* User defined functions below main */
void display(){
    printf("This text is from the display function\n");

}

int addtwo(int a, int b){
    return a+b;
}
