#include <stdio.h>

int main() {
    for (int i=0 ; i<15 ; i++){
        if (i==5){
            //break; //exit the loop this instant
            continue; //exit this iteration and run next one
        }
        printf("i is %d\n",i);
    }
    printf("The loop is done!");
    return 0;
}