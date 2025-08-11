#include <stdio.h>

int sum(int,int); // function prototype

//function definition
int sum(int x, int y){  
    printf("The sum of x and y is %d\n",x+y);
    return x+y;
}

int main() {
    int a=1;
    int b=2;
    sum(a,b);
    printf("%d\n",sum(a,b));
    return 0;
}