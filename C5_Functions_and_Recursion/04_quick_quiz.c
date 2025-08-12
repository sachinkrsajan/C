#include <stdio.h>
#include <math.h>

int main() {

    int a=10;
    float b=pow(a,2);
    int a1=b;
    printf("The area of the sqaure is %f\n",pow(a,2));    
    //pow produces double data type so we use %f

    printf("%d\n",a1);

    return 0;
}