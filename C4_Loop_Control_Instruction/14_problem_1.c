#include <stdio.h>

int main() {
    int n=5;
    printf("Enter the no:\n");
    scanf("%d",&n);

    for (int i=1 ; i<=10 ; i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}