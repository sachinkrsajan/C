#include <stdio.h>
float convert_farenheit(float a);
float convert_farenheit(float a){
    float f=a*1.8+32;
    return f;
}
int main() {

    float c=32.0;
    printf("The Temperature %f celcius is %f farenheit.",c,convert_farenheit(c));
    
    return 0;
}