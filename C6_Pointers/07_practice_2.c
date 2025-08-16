#include <stdio.h>
int address(int *);
int address(int *j){
    int *k=&j;
    printf("The address of i is %p\n",j);
}


int main() {
    int i= 10;
    printf("the address of i is %p\n",&i);
    address(&i);
    return 0;
}