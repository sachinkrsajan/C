#include <stdio.h>
#include <string.h>
int my_strlen(char st[]){
    int i=0,count;
    char c=st[i];
    while (c!='\0'){
        c=st[i];
        i++;
    }
    count =i-1;
    return count; 
}
void my_strcpy(char target[],char source[]){
    for (int i = 0; i < my_strlen(source); i++)
    {
        target[i]=source[i];
    }
    target[my_strlen(source)]='\0';
    
}
int main() {
    char source[]="sachin is live";
    char target[30];
    my_strcpy(target,source);
    printf("%s %s",source,target);
    return 0;
}