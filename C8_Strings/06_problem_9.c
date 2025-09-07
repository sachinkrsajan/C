#include <stdio.h>
#include <string.h>
int main() {
    char st[]="I am the best.";
    char c;
    int check=0;
    printf("Enter the chacracter to check its presence:");
    scanf("%c",&c);
    for (int i = 0; i < strlen(st); i++)
    {
        if(st[i]==c){
            check++;
            break;
        }
    }
    if (check){
            printf("Character is present.\n");
        }
        else{printf("Character not present.\n");}
    return 0;
}