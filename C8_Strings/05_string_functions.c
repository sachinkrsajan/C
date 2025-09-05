#include <stdio.h>
#include <string.h>
int main() {
    //char st[]="harry";
    //printf("%d",strlen(st));

    char source[]="harry";
    char target [30];
    strcpy(target,source);
    // printf("%s %s",source,target);
    // printf("\n");
    // printf("%s",target);

    char st[]="harry";
    char st1[56]="Harry";
    char st2[56]=" Bhai!";

    strcat(st1,st2);
    printf("%s\n",st1); // the string gets added and stored to st1
    printf("%s\n",st2);

    int a=strcmp("far","joke");
    int b=strcmp("far","far");
    int c=strcmp("joke","far");
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    
    return 0;
}