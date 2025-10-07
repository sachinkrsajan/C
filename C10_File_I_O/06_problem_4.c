#include <stdio.h>

int main() {

    
    FILE* ptr;
    ptr=fopen("sachin.txt","a");

    for(int i=0 ;i<2; i++){
        char name[20];
        float salary;
        printf("Enter the name of employee:\n");
        scanf("%s",&name);
        printf("Enter the salary of employee:\n");
        scanf("%f",&salary);
        fprintf(ptr,"name:%s salary:%f",name,salary);
        fprintf(ptr,"%c",'\n');
    }
    fclose(ptr);
    return 0;
}