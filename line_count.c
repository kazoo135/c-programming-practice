#include <stdio.h>
/* Reading number of chars and number of lines */

int main(){

    int  ln, c;
    long nc;

    ln = 0;
    nc = 0;

    while((c = getchar()) != EOF){
        ++nc;
        if(c == '\n')
            ++ln;
        }
    printf("Total Chars\tTotal lines\n");
    printf("%ld\t\t%d\n", nc, ln);

}
