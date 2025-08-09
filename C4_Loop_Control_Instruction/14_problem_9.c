#include <stdio.h>

int main() {
    int n=10;
    int factorial =1;
    int i=1;
    while (i<=n){
        factorial*=i;
        printf("%d\n",factorial);
        i++;
    }
    return 0;
}