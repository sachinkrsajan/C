#include <stdio.h>

int main() {
    int i=72;
    int* ptr1=&i; // j is a pointer pointing to i
    int** ptr2= &ptr1;
    printf("The address of i is %p\n",ptr1);
    printf("The adresss of i is %p\n",&i);
    printf("The adresss of i is %u\n",&i);
    printf("The value at i is %d \n",**ptr2); // ** ptr2 = *ptr1 = i
    return 0;
}