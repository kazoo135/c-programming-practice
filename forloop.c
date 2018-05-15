#include <stdio.h>

int main(){

    int counter, index;
    for(counter = 0; counter <= 10; counter++){
        printf("%d\n", counter);
    }
    printf("Counter is: %d\n", counter);

    index = 0;
    while( index <= 5){
        printf("%d ", index);
        index++;
    }
    printf("Index is: %d\n", index);
}
