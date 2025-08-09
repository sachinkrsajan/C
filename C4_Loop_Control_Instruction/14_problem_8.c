#include <stdio.h>

int main() {
    int n =10;
    int factorial = 1;
    for (int i=1 ; i<=n ; i++){

        factorial*=i;
        printf("%d\n",factorial);

    }
    return 0;
}