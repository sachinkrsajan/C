#include <stdio.h>

int main() {
    int n=8;
    int i=1;
    int sum1=0;
    while (i<=10){
        int m= n*i;
        sum1+=m;
        printf("%d\n",m);
        i++;
    }
    printf("The sum of all multiples of 8 is %d\n",sum1);
    return 0;
}