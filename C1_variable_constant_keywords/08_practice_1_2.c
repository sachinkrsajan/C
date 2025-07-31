// area of circle 3.14 * (r)^2
// volume of cylinder 3.14*r^2*h

#include <stdio.h>
int main(){
    int r;
    int h;
    printf("Enter the radius of cylinder-\n");
    scanf("%d",&r);
    printf("Enter the height of cylinder-\n");
    scanf("%d",&h);
    //printf("The area of circle of radius %d is %f",r,3.14*r*r);
    printf("The volume of cylinder of radius %d and height %d is %f",r,h,(3.14*r*r*h));
    return 0;
}