#include <stdio.h>

int main()
{
    int num_array[25], array_lenght;
    
    printf("\n\n Pointer : Store and retrieve elements from an array :\n");
    printf("------------------------------------------------------------\n");

    printf(" Input the number of elements to store in the array :");
    scanf("%d", &array_lenght);

    printf(" Input %d number of elements in the array :\n", array_lenght);

    for (int i = 0; i < array_lenght; i++)
    {
        printf(" element - %d : ", i);
        scanf("%d", num_array + i);
    }
    
    printf(" The elements you entered are : \n");
    for (int i = 0; i < array_lenght; i++)
    {
        printf(" element - %d : %d \n", i, *(num_array + i));
    }
    return 0;
}