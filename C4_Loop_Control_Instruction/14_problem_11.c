#include <stdio.h>

int main() {
    int n=2;
    int not_prime=0;
    int i=2;

    if (n==0 || n==1){
        not_prime=1;
    }

    else{
        while(i<n){
            if(n%i==0 && n!=2){
                not_prime=1; 
            }
            i++;
        }
    }
    
    if (not_prime){
        printf("%d is not prime",n);
    }
    else {
        printf("%d is prime",n);
    }
    return 0;
}