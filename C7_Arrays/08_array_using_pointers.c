#include <stdio.h>

int main() {
    int marks[]={12,34,53,56};
    //int* ptr=&marks[0];
    int *ptr=marks; // same as int* ptr=&marks[0];

    for (int i = 0; i < 4; i++)
    {
        printf("The marks at index %d is %d\n",i,marks[i]);  //using array
        printf("The marks at index %d is %d\n",i,*ptr);      //using pointers
        ptr++;
    }
    
    return 0;
}