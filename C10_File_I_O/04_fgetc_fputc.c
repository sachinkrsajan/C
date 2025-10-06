#include <stdio.h>

int main() {
    FILE* ptr;
    ptr=fopen("sachin.txt","r");
    char ch=fgetc(ptr);
    printf("%c",ch);
    fclose(ptr);

    FILE* ptr1;
    ptr1=fopen("sachin.txt","a");
    fputc('c',ptr1);
    return 0;
}