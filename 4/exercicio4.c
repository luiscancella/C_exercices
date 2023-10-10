#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("teste");
    int num1, num2, *ptr_num1, *ptr_num2, soma;

    printf("\n\n Pointer : Add two numbers :\n");
    printf("--------------------------------\n");

    printf(" Input the first number : ");
    scanf("%d", &num1);
    printf(" Input the second  number : ");
    scanf("%d", &num2);

    ptr_num1 = &num1;
    ptr_num2 = &num2;

    soma = *ptr_num1 + *ptr_num2;

    printf(" The soma of the entered numbers is : %d\n\n", soma);

    return 0;
}
