//to pass a student requires 40% total and 33% in each subject (3 subjects)

#include <stdio.h>
int main(){
    int sub1,sub2,sub3;
    int total;

    printf("Enter Sub1 Marks:");
    scanf("%d",&sub1);
    printf("Enter Sub2 Marks:");
    scanf("%d",&sub2);
    printf("Enter Sub3 Marks:");
    scanf("%d",&sub3);
    printf("The marks are %d %d and %d\n",sub1,sub2,sub3);
    total=(sub1+sub2+sub3)/3;
    if (total>40 && sub1>33 && sub2>33 && sub3>33){
        printf("You pass in all subjects and total percentage is %d",total);
    }
    else if (sub1<33||sub2<33||sub3<33){
        printf("You fail as your individual subject score is less.");
    }
    else if (total<40){
        printf("You fail as your total score is less.");
    }

    return 0;

}