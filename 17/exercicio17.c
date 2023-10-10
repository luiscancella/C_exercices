#include <stdlib.h>
#include <stdio.h>

void main()
{
    int array_lenght, array[15];
    int *ptr_array;

    printf("\n\n Pointer : Print the elements of an array in reverse order :\n");
    printf("----------------------------------------------------------------\n");

    printf(" Input the number of elements to store in the array (max 15) : ");
    scanf("%d", &array_lenght);

    ptr_array = &array[0]; // ptr_array stores the address of base array array
    
    printf(" Input %d number of elements in the array : \n", array_lenght);
    for (int i = 0; i < array_lenght; i++)
    {
        printf(" element - %d : ", i + 1);
        scanf("%d", ptr_array); // acceptr_array the address of the value
        ptr_array++;
    }

    ptr_array = &array[array_lenght - 1];

    printf("\n The elements of array in reverse order are :");

    for (int i = array_lenght; i > 0; i--)
    {
        printf("\n element - %d : %d  ", i, *ptr_array);
        ptr_array--;
    }
    printf("\n\n");
}