#include <stdio.h>

int main() {
    int a = 5, b = 5;
    int *p1 = &a;
    int *p2 = &b;

    if (p1 == p2)
        printf("Pointers point to the same location\n");
    else
        printf("Pointers point to different locations\n");
    printf("Address of a is %u\n",&a);
    printf("Addition of a number from a pointer is %u\n",&a+2);
    printf("Subtraction of a number from a pointer is %u\n",&a+-2);
    printf("Address of b is %u\n",&b);
    printf("Subraction of one pointer from another %u\n",&a-&b);
    return 0;
}