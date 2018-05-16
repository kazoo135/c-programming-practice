#include <stdio.h>

int main()
{
    char s1[] = {'M', 'a', 'r', 'k'};
    char s2[] = {'C', 'a', 'r', 'u', 's','o', '\0'};
    //no need to add a \0 value - compile does that for you when making a string in this way
    char s3[] = "Donna";
    char s4[] = "This is a longer string than I have made before";
    int index = 0;
    int size = 4;

    while(index < size){
        printf("%c,", s1[index]);
        index++;
    }
    printf("\n");
    printf("Notice null value printed at end of char[]: %s\n", s1);
    printf("%s\n", s2);
    printf("Printing single char from a string %c: \n", s3[0]);
    printf("Printing entire string \'%s\'\n", s3);
    printf("%s\n", s1);
    printf("Longest String : %s\n", s4);

    return 0;
}
