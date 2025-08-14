// write a program using recursion to calculate the nth element of finonacci series
#include <stdio.h>

int fibonacci(int); 
// 0, 1, 1, 2 ,3 ,5, 8,13, 21....
//fibonacci(n-1)+fibonacci(n-2);
int fibonacci(int n){
    if(n==1 || n==2){
        return n-1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}


int main() {
    int n=10;
    printf("the fibonacci series for %d is %d\n",n,fibonacci(n));
    return 0;
}