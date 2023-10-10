#include <stdlib.h>
#include <stdio.h>

void swapNumbers(int *x, int *y, int *z);

int main()
{
    int element1, element2, element3;

    printf("\n\n Pointer : Swap elements using call by reference :\n");
    printf("------------------------------------------------------\n");
    
    printf(" Input the value of 1st element : ");
    scanf("%d", &element1);
    printf(" Input the value of 2nd element : ");
    scanf("%d", &element2);
    printf(" Input the value of 3rd element : ");
    scanf("%d", &element3);

    printf("\n The value before swapping are :\n");
    printf(" element 1 = %d\n element 2 = %d\n element 3 = %d\n", element1, element2, element3);
    swapNumbers(&element1, &element2, &element3);
    printf("\n The value after swapping are :\n");
    printf(" element 1 = %d\n element 2 = %d\n element 3 = %d\n\n", element1, element2, element3);
    return 0;
}

void swapNumbers(int *x, int *y, int *z)
{
    int tmp;
    tmp = *y;
    *y = *x;
    *x = *z;
    *z = tmp;
}