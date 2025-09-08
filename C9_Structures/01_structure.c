// structure ----> we can multi type of data. like in array one type of data

#include <stdio.h>
#include <string.h>
struct employee  // This declares a new user defined data type.
{
    int code;
    float salary;
    char  name[10];
}; // semicolon is important

int main() {
    struct employee e1 , e2;
    strcpy(e1.name,"Sachin");
    e1.salary=30.5;
    e1.code=620711;
    printf("Employee name=%s , salary= %f lpa and code= %d\n",e1.name,e1.salary,e1.code);
    strcpy(e1.name,"Kiki");
    e1.salary=32.5;
    e1.code=620711;
    printf("Employee name=%s , salary= %f lpa and code= %d\n",e1.name,e1.salary,e1.code);
    return 0;
}