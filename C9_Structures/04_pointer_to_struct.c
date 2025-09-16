#include <stdio.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};

int main() {
    struct employee e1;
    e1.code=101;
    struct employee *ptr;
    ptr=&e1;
    //now we can print structure element using:

    printf("%d\n",(*ptr).code);
    printf("%d\n",ptr->code); // same as *ptr
    
    return 0;
    //end
}