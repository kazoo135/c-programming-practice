#include <stdio.h>

void add(int, int);
void addfl(float, float);

int main()
{
    printf("calling add\n");
    add(10, 30);
    printf("Calling addfl\n");
    addfl(22.55, 21.83);

    return 0;
}

void add(int a, int b){
    int result = a + b;
    printf("Result of %d plus %d is %d\n", a, b, result);
}

void addfl(float a, float b){
    float result = a + b;
    printf("Result of float %f plus %f b is: %f\n",a, b, result);

}


