//find greatest of the four numbers.

#include <stdio.h>
int main(){

    int a,b,c,d;

    printf("Enter no 1:\n");
    scanf("%d",&a);
    printf("Enter no 2:\n");
    scanf("%d",&b);
    printf("Enter no 3:\n");
    scanf("%d",&c);
    printf("Enter no 4:\n");
    scanf("%d",&d);

    if (a>b && a>c && a>d){
        printf("A is the greatest %d",a);
    }
    else if (b>a && b>c && b>d){
        printf("B is the greatest %d",b);
    }
    else if (c>b && c>a && c>d){
        printf("C is the greatest %d",c);
    }
    else{
        printf("D is the greatest %d",d);
    }

    return 0;


}
