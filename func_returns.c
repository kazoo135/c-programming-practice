#include <stdio.h>

int addWithReturn(int, int);

int main(){
    int num1, num2;
    num1 = 200;
    num2 = num1 * 2;
    int result = addWithReturn(num1, num2);
    printf("Returned result of function is: %d\n", result);

    return 0;
}

int addWithReturn(int a, int b){

    return a+b;
}
