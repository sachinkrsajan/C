// program to count the occurence of a given character

#include <stdio.h>
#include <string.h>
int main() {
    char st[]="haary is the hairy potter";
    char user_input;
    int count=0;
    printf("Which character to find : ");
    scanf("%c",&user_input);
    for (int i = 0; i < strlen(st); i++)
    {
        if (st[i]==user_input){
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}