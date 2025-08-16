#include <stdio.h>

int main() {
    int i = 100;
    int *j= &i;
    printf("The address of i is %p\n",&i);
    printf("The address of i is %p\n",j);
    printf("The value of i is %d\n",*j);
    return 0;
}