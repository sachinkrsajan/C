//decrypt the code in 6

#include <stdio.h>
#include <string.h>
int main() {
    char str[]="Tbdijo!2tu!zfbs";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i]=str[i]-1;
    }
    printf("%s",str);
    return 0;
}