#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num;
    float *element;

    printf("\n\n Pointer : Find the largest element using Dynamic Memory Allocation :\n");
    printf("-------------------------------------------------------------------------\n");
    
    printf(" Input total number of elements(1 to 100): ");
    scanf("%d", &num);
    
    element = (float *)calloc(num, sizeof(float)); // Memory is allocated for 'n' elements
    
    if (element == NULL)
    {
        printf(" No memory is allocated.");
        exit(0);
    }
    printf("\n");
    for (int i = 0; i < num; ++i)
    {
        printf(" Number %d: ", i + 1);
        scanf("%f", element + i);
    }
    for (int i = 1; i < num; ++i)
    {
        if (*element < *(element + i))
            *element = *(element + i);
    }
    printf(" The Largest element is :  %.2f \n\n", *element);
    return 0;
}