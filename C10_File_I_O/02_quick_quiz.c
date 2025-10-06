#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr =fopen("sachin2.txt", "r");
    if (ptr == NULL)
    {
        printf("THE FILE DOES NOT EXIST !\n");
    }
    else
    {
        int num;
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d \n", num);
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d \n", num);
        return 0;
    }
    fclose(ptr);
    return 0;
}