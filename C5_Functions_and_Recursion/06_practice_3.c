#include <stdio.h>
float force_due_to_gravity(float);
float force_due_to_gravity(float m){
    float g= 9.8;
    return m*g; 
}
int main() {
    float m;
    printf("Enter the mass of object:\n");
    scanf("%f",&m);
    printf("The force due to gravity from object of mass %f kg is %f.\n",m,force_due_to_gravity(m));
    
    return 0;
}