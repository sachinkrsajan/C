#include <stdio.h>

int main() {
    int arr[10];
    int multiple;
    printf("User input:");
    scanf("%d",&multiple);
    for (int i=0;i<10;i++){
        arr[i]=multiple*(i+1);
    }
    for (int i=0;i<10;i++){
        printf("The array at index %d is %d\n",i,arr[i]);
    }
    return 0;
}