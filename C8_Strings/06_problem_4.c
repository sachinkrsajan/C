#include <stdio.h>
char* slice(char str[],int m,int n){
    
    char* ptr1=&str[m];
    printf("%s\n",ptr1);
    printf("%d\n",ptr1);
    char* ptr2=&str[n];
    
    str=ptr1;
    printf("%s\n",str);
    str[n]='\0';
    return str;
}
int main() {
    char str[]="abcdefghijk";
    
    printf("%s",slice(str,1,5));
    return 0;
}