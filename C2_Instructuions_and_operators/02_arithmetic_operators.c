#include <stdio.h>
int main(){
    int a=4,b=3;
    //modulus operators is used to get the remainder
    // % cannot be applied to float
    // % sign is same as of numerator (-5 % 2 = - 1)
    /* there is no operator to perform exponential in c however
    we can use pow(x,y) from <math.h> */ 

    printf("The remainder when a is divied by b is %d", a%b);
    return 0;
    
}