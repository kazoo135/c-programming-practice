#include <stdio.h>

/* print odd nums uainf xonrinuw */
int main(){
    int i;

printf("Print odd nums using continue");
    for(i = 0; i <= 10 ; i++){
        if( i % 2 == 0){
            continue;
        }
        printf("%d\n", i);
    }

    /* print even nums using modulus*/
    printf("Print even nums using continue");
    int count;
    for(count = 0; count <= 10; count++){
        if(count%2 == 0 ){
            printf("%d\n", count);
        }
    }
    return 0;
}
