/* #include <stdio.h>

int main() {
    int n=0;
    int i=1;
    while (i<=10){
        n=n+i;
        printf("%d\n",n);
        i++;
    }
    return 0;
} */

/* #include <stdio.h>

int main() {

    int n=0;
    int i=1;
    do {
        n=n+i;
        printf("%d\n",n);
        i++;
    } while (i<=10);

    
    return 0;
} */

#include <stdio.h>

int main() {
    int n=0;
    for (int i=1 ; i<=10 ; i++){
        n+=i;
        printf("%d\n",n);
    }
    return 0;
}