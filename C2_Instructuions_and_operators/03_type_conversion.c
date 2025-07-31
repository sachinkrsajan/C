/*  int/int--- gives int
    int/float--- gives float
    float/float--- gives float */

#include <stdio.h>
int main(){
    int a = 9;
    int b = 2;
    float c = 9/2; // int/int gives int so 9/2 is 4 which in float means 4.0
    int d = 6.7;
    printf(" The value of a/b is %f\n",c);
    printf("%d",d);

    return 0;
}