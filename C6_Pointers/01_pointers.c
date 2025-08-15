#include <stdio.h>

int main() {
    int i=72;
    int *j=&i; // j is a pointer pointing to i
    printf("The address of i is %p\n",j);
    printf("The adresss of i is %p\n",&i);
    printf("The adresss of i is %u\n",&i);
    printf("The value at i is %d \n",*(&i)); // *j = *(&i)
    return 0;
}