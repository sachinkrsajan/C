/*  switch (integer expression)
    {
    case 1:
        //code
    case 2:
        //code
    case 3:
        //code
    case 4:
        //code
    default :
        //code
    }

*/

#include <stdio.h>
int main (){

    int a;
    printf("Enter the a:");
    scanf("%d",&a);

    switch(a){
        case 1:
        printf("Entered 1");
        break;
        case 2:
        printf("Entered 2");
        break;
        case 3:
        printf("Entered 3");
        break;
        case 4:
        printf("Entered 4");
        break;
        default:
        printf("No match");
        
    }
    return 0;
}