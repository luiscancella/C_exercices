#include <stdlib.h>
#include <stdio.h>

int main()
{
    char alfabeto[27];
    char *ptr_alfabeto;
    printf("\n\n Pointer : Print all the alphabets:\n");
    printf("----------------------------------------\n");
    ptr_alfabeto = alfabeto;

    for (int x = 0; x < 26; x++)
    {
        *ptr_alfabeto = x + 'A';
        ptr_alfabeto++;
    }
    
    ptr_alfabeto = alfabeto;

    printf(" The Alphabets are : \n");
    for (int x = 0; x < 26; x++)
    {
        printf(" %c ", *ptr_alfabeto);
        ptr_alfabeto++;
    }
    printf("\n\n");
    return (0);
}