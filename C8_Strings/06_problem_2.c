// problem 1 was mcq

#include <stdio.h>
int main(){
    char st[6];
    //scanf("%s",st);
    for (int i=0; i<5 ; i++){
        scanf("%c",&st[i]);
        fflush(stdin);
    }
    printf("%s",st);
    return 0;
}