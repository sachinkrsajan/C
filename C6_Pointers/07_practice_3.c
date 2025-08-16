#include <stdio.h>
int times_10(int *);
int times_10(int *i){
    *i=*i*10;
    return *i;

}


int main() {
    int i =10;
    printf("The value of i is %d\n",i);
    times_10(&i);
    printf("The value of i is %d\n",i);

    return 0;
}