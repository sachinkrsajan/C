//program to encrypt a string by adding 1 to ascii value of its characters

#include <stdio.h>
#include <string.h>
int main() {
    char str[]="Sachin 1st year";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i]=str[i]+1;
    }
    printf("%s",str);
    return 0;
}