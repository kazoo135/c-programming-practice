#include <stdio.h>

int main(){
    int x = 100;
    int *p;
    p = &x; 
    int **q;
    q = &p; 
    printf("Point p points to this value: %d\n", *p);
    printf("Pointer p has its own address it is: %p\n", &p);
    printf("Pointer q points to pointer p which points to x\n");
    printf("q can get to value of x **q %d\n", **q);
    printf("But remember q has it\''s own addres %p\n", &q);
    printf("The value stored in q is the address of p %p\n", q);
    printf("And the value stored in p is address of x \n");
    printf("Value of p %p and address of x %p", p, &x);
    
    
    return 0;
}
