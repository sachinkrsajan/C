// int *in_ptr;
// char *ch_ptr;
// float *fl_ptr;

#include <stdio.h>

int main() {
    char i='A';
    char *j=&i;
    float k=5.232;
    float *l;
    l=&k;
    printf("The address of i is %p\n",&i);
    printf("The value of i is %c\n",*(&i));
    printf("The address of k is %d\n",l);
    printf("The value of k is %f\n",*l);
    return 0;
}