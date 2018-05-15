#include <stdio.h>

int main(){

    long nc;
    long numchars;
    int i;
    i = nc = 0;
    numchars = 0;

    while( ( getchar() != EOF))
        ++nc;
    printf("%ld\n", nc);

    for(i; getchar() != EOF; i++)
        ++numchars;
    printf("Num Characters : %ld\n", numchars);


}
