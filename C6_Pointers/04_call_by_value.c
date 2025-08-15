#include <stdio.h>

int sum(int ,int);

//sum function cannot change the value of x as it gets a copy of x
int sum(int a ,int b){
    a=6;
    return a+b;
}
int main() {
    int x=1;
    int y=6;
    printf("The sum of 1 and 6 is %d\n",sum(x,y));
    printf("The value of x is %d\n",x);
    return 0;
}