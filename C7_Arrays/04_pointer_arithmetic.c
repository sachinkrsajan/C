#include <stdio.h>

int main() {
    int a=5;
    int* ptr=&a;
    printf("The address of a is %u\n",&a);
    printf("The address of a is %u\n",ptr);
    ptr++; 
    // increases ptr by 1 according to data type for integer it is 4.
    //float ke lie bhi 4 bytes
    //string ke lie 1 byte
    printf("The address of a is %u\n",ptr);
    return 0;
}