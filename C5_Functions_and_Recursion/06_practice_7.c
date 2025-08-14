#include <stdio.h>

int main() {
    int n;
    printf("Enter the no:");
    scanf("%d",&n);
    for (int i =0 ; i<n ; i++){
        //This loop runs from 0 to 2
        // if i =0 ----> print 1 star
        // if i =1 ----> print 3 stars
        // if i =2 ----> print 5 stars
        // no_of_stars =(2*i+1) odd natural nos

        for (int j=0; j<2*i+1 ; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}