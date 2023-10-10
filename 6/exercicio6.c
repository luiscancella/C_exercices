#include <stdlib.h>
#include <stdio.h>

void main(int argc, char const *argv[])
{
    int num1,
        num2;

    int *ptr_num1 = &num1,
        *ptr_num2 = &num2;

    printf("\n\n Pointer : Find the maximum number between two numbers :\n");
    printf("------------------------------------------------------------\n");

    printf(" Input the first number : ");
    scanf("%d", ptr_num1);
    printf(" Input the second  number : ");
    scanf("%d", ptr_num2);

    if (*ptr_num1 > *ptr_num2)
    {
        printf("\n\n %d is the maximum number.\n\n", *ptr_num1);
    }
    else
    {
        printf("\n\n %d is the maximum number.\n\n", *ptr_num2);
    }
}
