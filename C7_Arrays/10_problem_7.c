#include <stdio.h>

int main() {
    int tables[3][10];  // 3 rows for 2, 7, 9 and 10 columns for multiples

    int numbers[3] = {2, 7, 9};  // The numbers we want tables of

    // Filling the array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            tables[i][j] = numbers[i] * (j + 1);
        }
    }

    // Printing the tables
    for (int i = 0; i < 3; i++) {
        printf("Table of %d:\n", numbers[i]);
        for (int j = 0; j < 10; j++) {
            printf("%d x %d = %d\n", numbers[i], j + 1, tables[i][j]);
        }
        printf("\n");
    }

    return 0;
}
