/* operator precedence - no bodmas is followed
   1st priority- * / % 
   2nd priority- + -
   3rd priority- = 
   this priority is for in absence of paranthesis
   * and / follow left to right associativity */

#include <stdio.h>
int main(){
    
    int a= 3;
    int b= 6;
    int c= 9;

    printf("The value of %d\n",a*b/c+7);
    
    printf("%d\n",3*b/2*c+7*a);

    return 0;
}