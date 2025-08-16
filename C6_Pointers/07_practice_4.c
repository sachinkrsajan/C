#include <stdio.h>
int times_100(int *);
int times_100(int *i){
    *i=*i*100;
    return *i;

}


int main() {
    int i =10;
    printf("The value of i is %d\n",i);
    times_100(&i);
    printf("The value of i is %d\n",i);

    return 0;
}