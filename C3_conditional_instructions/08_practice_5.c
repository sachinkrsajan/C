// program to determine that the character is lower case or not.
// ascii code

#include <stdio.h>
int main(){
    char ch='a';
    printf("The charcter is %c\n",ch);
    printf("The value of character is %d\n",ch);

    if (ch>=97 && ch<=122){
        printf("this character is lowercase\n");
    }
    else{
        printf("this character is not lowercase\n");    

    }
    return 0;
}