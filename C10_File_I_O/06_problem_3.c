#include <stdio.h>

int main() {
    FILE* ptr;
    FILE* ptr2;

    ptr=fopen("File1.txt","r");
    ptr2=fopen("File2.txt","a");
    char ch;

    while(1){
        
        ch=fgetc(ptr);
        //when all the content of a file has been read break
        if (ch==EOF){
            break;
        }
        else{
            fprintf(ptr2,"%c",ch);
            fprintf(ptr2,"%c",ch);
            printf("%c",ch);
        }
    }
    return 0;
}