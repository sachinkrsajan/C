// i++ increses i by 1
// i-- decrements i by 1

#include <stdio.h>

int main() {
    int i=5;
    i=i+5;
    printf("the value of i %d\n",++i); // i++ first print then increment
    printf("the value of i %d\n",i++); // ++i increment first then print
    return 0;
}

// += is compound operator just like -=,*=,/=,&,%,=