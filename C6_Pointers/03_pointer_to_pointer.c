#include <stdio.h>

int main() {
    int i=6;
    int *j=&i;
    int **k=&j;
    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",*j);
    printf("The value of i is %d\n",**(&j));
    // ***&&& a
    // +++--- a
    // toh similarly kata piti ho jata h
    return 0;
}