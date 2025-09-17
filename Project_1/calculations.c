#include <stdio.h>
int sum(int a,int b);
int diff(int a,int b);
float avg(int a,int b);
int product(int a,int b);

int sum(int a,int b){
    return a+b;
}
int diff(int a,int b){
    return a-b;
}
float avg(int a,int b){
    return((a+b)/2);
}
int product(int a,int b){
    return a*b;
}
int main() {
    int a,b,choice;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);

    while (123){
        printf("A is %d and B is %d\n",a,b);
        printf("Enter 1 for sum.\nEnter 2 for difference.\nEnter 3 for average.\nEnter 4 for product.\nEnter your choice:");
        scanf("%d",&choice);
        if (choice==1){
            printf("The sum of %d and %d is %d\n",a,b,sum(a,b));
        }
        else if(choice==2){
            printf("The difference of %d and %d is %d\n",a,b,diff(a,b));
        }
        else if(choice==3){
            printf("The average of %d and %d is %d\n",a,b,avg(a,b));
        }
        else if(choice==4){
            printf("The product of %d and %d is %d\n",a,b,product(a,b));
        }
        else{
            printf("Invalid input RETRY!!\n");
        }
    }
    return 0;
}