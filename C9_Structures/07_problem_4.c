#include <stdio.h>
typedef struct employee{
    int salary;
    float score;
}emp;
int main() {
    emp e1;
    emp* ptr1=&e1;
    //(*ptr1).salary=56;
    //(*ptr1).score=57.3;
    ptr1->salary=56;
    ptr1->score=57.3;
    printf("The value of salary is %d and score is %.1f\n",ptr1->salary,ptr1->score); // rounding %f
    return 0;
}