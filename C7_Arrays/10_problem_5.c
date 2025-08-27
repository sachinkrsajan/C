#include <stdio.h>

void reverseArray(int arr[], int size) {
    int reversed[size];  // temporary array

    // Copy elements in reverse order
    for (int i = 0; i < size; i++) {
        reversed[i] = arr[size - 1 - i];
    }

    // Copy back to original array
    for (int i = 0; i < size; i++) {
        arr[i] = reversed[i];
    }
}

int main() {
    int arr[10];
    int size = 10;

    // Input elements
    printf("Enter 10 elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse the array
    reverseArray(arr, size);

    // Print reversed array
    printf("Reversed array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
