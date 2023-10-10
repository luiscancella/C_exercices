#include <stdlib.h>
#include <stdio.h>

void main()
{
    int *array, tmp, array_lenght;
    
    printf("\n\n Pointer : Sort an array using pointer :\n");
    printf("--------------------------------------------\n");

    printf(" Input the number of elements to store in the array : ");
    scanf("%d", &array_lenght);

    printf(" Input %d number of elements in the array : \n", array_lenght);
    for (int i = 0; i < array_lenght; i++)
    {
        printf(" element - %d : ", i + 1);
        scanf("%d", array + i);
    }

    for (int i = 0; i < array_lenght; i++)
    {
        for (int j = i + 1; j < array_lenght; j++)
        {
            if (*(array + i) > *(array + j))
            {
                tmp = *(array + i);
                *(array + i) = *(array + j);
                *(array + j) = tmp;
            }
        }
    }

    printf("\n The elements in the array after sorting : \n");
    for (int i = 0; i < array_lenght; i++)
    {
        printf(" element - %d : %d \n", i + 1, *(array + i));
    }
    printf("\n");
}
