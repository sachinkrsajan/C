// write a program with a structure representing a complex no

#include <stdio.h>
typedef struct c{
    int real;
    int imaginary;
}complex;
int main(){
    complex c1={1,2};
    printf("The value of vector is %d + %di\n",c1.real,c1.imaginary);
    return 0;
}