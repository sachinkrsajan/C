#include <stdio.h>

int main() {
    int arr[]={10,40,39,43,9,66,71,85,96,10};
    int* ptr=&arr[0];
    printf("The value of ptr is %d\n",ptr);
    printf("The value of ptr is %d\n",ptr+2);
    printf("The value of 3rd element using 1st element is %d\n",*(ptr+=2));
    printf("The adress of 3rd element is %d\n",&arr[2]);
    for (int i = 0; i < 10; i++)
    {
        printf("The address of index %d is %d and value is %d\n",i,&arr[i],arr[i]);
    }
    
    return 0;
}