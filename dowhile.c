#include <stdio.h>

int main(){

    int counter;
    counter = 0;

    do{
        printf("%d,", counter);
        counter++;
    }while(counter < 5);
    return 0;
}
