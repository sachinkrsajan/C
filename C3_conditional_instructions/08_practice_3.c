/*  income tax paid
    2.5-5.0L = 5% tax
    5.0-10.0L = 20% tax
    above 10.0L = 30% 
*/

#include <stdio.h>
int main(){
    int salary;
    int tax=0;
    printf("Enter the Salary:");
    scanf("%d",&salary);

    if (salary>250000 && salary<=500000){
        tax=0.05*(salary-250000);
        printf("For your salary %d income tax will be %d",salary,tax);
    }
    else if (salary>500000 && salary<=1000000){
        tax=0.05*(500000-250000)+0.2*(salary-500000);
        printf("For your salary %d income tax will be %d",salary,tax);
    }
    else if (salary>1000000){
        tax=0.05*(500000-250000)+0.2*(1000000-500000)+0.3*(salary-1000000);
        printf("For your salary %d income tax will be %d",salary,tax);
    }
    else {
        printf("For your salary %d income tax will be 0");
    }

    return 0;

}

