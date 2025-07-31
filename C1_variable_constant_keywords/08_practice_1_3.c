// (cel * 1.8)+32

#include <stdio.h>
int main(){
    float cel;
    printf("Enter the temperature in celcius-\n");
    scanf("%f",&cel);
    printf("The given temperature in celcius is %f and in farenheit it is %f",cel,((cel*1.8)+32));
    return 0;
}