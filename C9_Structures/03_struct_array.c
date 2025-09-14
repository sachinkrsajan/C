#include <stdio.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};

int main() {
    struct employee facebook[100]; //an array of structures
    // we can access the data using
    facebook[0].code=100;
    facebook[0].salary=77.2;
    facebook[1].code=101;
    facebook[1].salary=100.0;
    printf("%d %f %d %f\n",facebook[0].code,facebook[0].salary,facebook[1].code,facebook[1].salary);
    printf("%d\n",&facebook);

    struct employee sachin={100,10.2,"sachin"};
    printf("%d %f %s\n",sachin.code,sachin.salary,sachin.name);
    
    return 0;
}