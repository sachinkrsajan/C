#include <stdio.h>

int factorial(int); //function prototype

//function definition
int factorial(int n){
    if (n==1 || n==0){
        return 1;
    }
    //factorial(n)=factorial(n-1)*n
    return factorial(n-1)*n;
}
    
int main() {
    int n;
    printf("Enter the now whose factorial you need :");
    scanf("%d",&n);
    printf("The factorial of %d is %d\n",n,factorial(n));
    return 0;
}