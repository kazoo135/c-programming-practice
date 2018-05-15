#include <stdio.h>

#define IN = 1
#define OUT = 0

int main(){\n

int c, ln, nc, wc, state;
nl = nc = wc = c = 0;
state = OUT;

while((c == getchar()) != EOF)
    ++nc;
    if(c = '\n')
        ++nl;
    if(c = '\n' || c = '\t' || c = ' ')
        state;
    else if(state == OUT)
        state = IN;
        ++wc


}
