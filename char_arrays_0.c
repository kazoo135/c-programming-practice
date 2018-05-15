#include <stdio.h>

/* characger arrays in c are strings */
int main()
{
    char name[] = {'S', 'a', 'l'};
    printf("%c", name[2]);
    printf("%c", name[0]);
    printf("%c\n", name[1]);

    printf("%s\n", name);
/* The char string ends with a null value */
/* if you don't include one in your char array you get garbage at end*/
    char sis[] = {'D', 'o', 'n','n','a', '\0'};
    printf("%s\n",sis);

/* a string has double quotes but is also treated as a character array with index 0 and length*/
    char sirname[] = "Ruccione";
    printf("%s\n", sirname);
/* To reference a char in a string array - us %c and index of char you want*/
    printf("%c\n", sirname[3]);


    return 0;
}
