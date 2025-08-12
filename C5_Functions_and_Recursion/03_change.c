#include <stdio.h>

int change(int a); // function prototype

//function definition
int change(int a){  
    a=77;
    return 0;
}

int main() {
    
    int b=22;
    change(b);              //value of b remains 22
    printf("b is %d\n",b);  //prints "b is 22"

    return 0;
} 