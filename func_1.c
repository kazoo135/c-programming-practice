#include <stdio.h>

/*

return_type function_name(parameters)
{
    function_body
}
*/
//function prototype declares the
//function so compile knows we will define this somewhere in our program
// alternatively we can define functions before main
//without the prototype compiler sees function call in main but sees no definition
//so compiler thinks it is an undefined function and an error will ensue
void sayhello();

int main()
{
    sayhello();
    return 0;
}

void sayhello(){
    printf("Hello and Good Morning from function\n");
}
