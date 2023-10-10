#include <stdlib.h>
#include <stdio.h>

long addTwoNumbers(long *n1, long *n2)
{
    long soma;
    
    soma = *n1 + *n2;

    return soma;
}

int main(int argc, char const *argv[])
{
    long num1, num2, soma;

    printf("\n\n Pointer : Add two numbers using call by reference:\n");
    printf("-------------------------------------------------------\n");

    printf(" Input the first number : ");
    scanf("%ld", &num1);
    printf(" Input the second  number : ");
    scanf("%ld", &num2);

    soma = addTwoNumbers(&num1, &num2);
    
    printf(" The soma of %ld and %ld  is %ld\n\n", num1, num2, soma);
    
    return 0;
}
