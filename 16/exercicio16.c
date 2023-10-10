#include <stdio.h>

void main()
{
    int array[10];
    int lenght, soma = 0;
    int *ptr_array;

    printf("\n\n Pointer : soma of all elements in an array :\n");
    printf("------------------------------------------------\n");

    printf(" Input the number of elements to store in the array (max 10) : ");
    scanf("%d", &lenght);

    printf(" Input %d number of elements in the array : \n", lenght);
    for (int i = 0; i < lenght; i++)
    {
        printf(" element - %d : ", i + 1);
        scanf("%d", &array[i]);
    }

    ptr_array = array; // ptr_array store the base address of array array

    for (int i = 0; i < lenght; i++)
    {
        soma = soma + *ptr_array;
        ptr_array++;
    }

    printf(" The soma of array is : %d\n\n", soma);
}