#include <stdio.h>

int main() {
    
    FILE*ptr;
    ptr=fopen("int.txt","r");
    int num;
    fscanf(ptr,"%d",&num);
    printf("%d",num);
    fclose(ptr);

    FILE*ptr2;
    ptr2=fopen("int.txt","w");
    fprintf(ptr2,"%d",num*2);
    fclose(ptr2);
    return 0;
}