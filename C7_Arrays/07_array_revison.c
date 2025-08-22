#include <stdio.h>

int main() {
    int a=10;
    float f=5.0;
    char c1='a';
    int* ptr1=&a;
    float* ptr2=&f;
    char* ptr3=&c1;

    int marks[]={};
    marks[0]=1;
    printf("%d\n",marks[0]);

}