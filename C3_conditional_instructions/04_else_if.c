#include <stdio.h>
int main(){
    int age=66;
    if (age>65){
        printf("You can drive and you are senior citizen\n");
    }

    else if (age>18){
        printf("You can drive.\n");
    }

    else {
        printf("You cannot drive.\n");
    }

    return 0;
}