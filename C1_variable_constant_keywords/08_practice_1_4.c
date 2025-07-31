// simple interest is SI = (P * R * T)/100

#include <stdio.h>
int main(){
    float p,r,t;
    printf("Enter the Principal amount-\n");
    scanf("%f",&p);
    printf("Enter the Rate of interest-\n");
    scanf("%f",&r);
    printf("Enter the Time-\n");
    scanf("%f",&t);
    printf("The Simple interest on the amt of %f over a period of %f year with the rate of interest %f will be %f.",p,t,r,(p*r*t)/100);
    return 0;
}