#include <stdio.h>
int array_user(int arr[],int size);
int array_user(int arr[],int size){
    int c=0;
    for ( int i=0; i<size; i++){
        if (arr[i]>0){
            c++;
        }
    }
    return c;
}
int main() {
    int arr[10];
    int n;

    printf("Enter the number of elements in the array (max 10): ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int positives = array_user(arr, n);
    printf("The number of positive numbers in the array is: %d\n", positives);

    return 0;
}