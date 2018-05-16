#include <stdio.h>

int addIt(int, int);

int main(){
    int num1, num2;
    printf("Enter two integers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    int result = addIt(num1, num2);

    printf("The result of %d plus %d is: %d\n", num1, num2, result);
    return 0;
}

int addIt(int x, int y){

    return x + y;
}
