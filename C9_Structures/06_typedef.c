#include <stdio.h>
#include <string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[20];
}emp;

int main(){
    // typedef int sachin;
    // sachin a=10;
    // printf("The value of a is %d\n",a);
    emp e1;
    e1.code=101;
    strcpy(e1.name,"sachin");
    e1.salary=10;

    printf("%d %s %f\n",e1.code,e1.name,e1.salary);

    return 0;
}