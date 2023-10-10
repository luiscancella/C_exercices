#include <stdlib.h>
#include <stdio.h>

int calculateLength(char* palavra);

void main() 
{
    char str1[25];
    int resultado;

    printf("\n\n Pointer : Calculate the length of the string :\n"); 
    printf("---------------------------------------------------\n");

    printf(" Input a string : ");
    fgets(str1, sizeof str1, stdin);

    resultado = calculateLength(str1);
    
    printf(" The length of the given string %s is : %d ", str1, resultado-1);
    printf("\n\n");

}

int calculateLength(char* palavra)
{
    int cont = 0;

    while (*palavra != '\0') 
    {
        cont++;
        palavra++;
    }

    return cont;
}