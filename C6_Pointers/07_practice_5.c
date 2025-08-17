#include <stdio.h>

// int sum(int a,int b);
// int avg(int a,int b);

int* sum(int a,int b){
    int s=a+b;
    int* ptr=&s;
    printf("The sum is %d\n",s);
    return ptr;
    // return &s; ERROR FUNCTION RETURNS ADDRESS OF LOCAL VARIABLE
}

float* avg(int a,int b){
    float average=(a+b)/2.0;
    float* ptr=&average;
    printf("The average is %f\n",average);
    return ptr;
    // return &average; ERROR FUNCTION RETURNS ADDRESS OF LOCAL VARIABLE
}


int main() {
    int x=4;
    int y=6;
    int* ptr1;
    float* ptr2;

    ptr1=sum(x,y);
    ptr2=avg(x,y);

    printf("The address of sum is %u and of average is %u\n",ptr1,ptr2);
    return 0;
}