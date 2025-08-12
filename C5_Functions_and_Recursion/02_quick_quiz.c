#include <stdio.h>

void good_morning();
void good_afternoon();
void good_night();


void good_morning(){
    printf("GOOD MORNING!\n");
}

void good_afternon(){
    printf("GOOD AFTERNOON!\n");
}

void good_night(){
    printf("GOOD NIGHT!\n");
}

int main() {

    good_morning();
    good_afternon();
    good_night();
    
    return 0;
}