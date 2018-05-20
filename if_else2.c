#include <stdio.h>

int main(){
    int age;
    int child = 12;
    int adolescent = 21;
    int senior = 65;

    printf("Enter your age:\n");
    scanf("%d", &age);

    if(age < 13){
        printf("You are a child\n");
    }else if(age >= 13 && age <21){
        printf("You are a teenager\n");
    }else if(age >=21 && age < 65){
        printf("You an adult\n");
    }else{
        printf("You must be a senior\n");
        }

return 0;

}
