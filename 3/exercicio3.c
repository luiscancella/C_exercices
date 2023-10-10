#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num1 = 10;
    float num2 = 5;
    char num3 = 'z';

    printf("\n\n Pointer : Demonstrate the use of & and * operator :\n");
    printf("--------------------------------------------------------\n");

    int *pt1;
    float *pt2;
    char *pt3;

    pt1 = &num1;
    pt2 = &num2;
    pt3 = &num3;

    printf(" num1 = %d\n", num1);
    printf(" num2 = %f\n", num2);
    printf(" num3 = %c\n", num3);

    printf("\n Using & operator :\n");
    printf("-----------------------\n");
    printf(" address of num1 = %p\n", &num1);
    printf(" address of num2 = %p\n", &num2);
    printf(" address of num3 = %p\n", &num3);

    printf("\n Using & and * operator :\n");
    printf("-----------------------------\n");
    printf(" value at address of num1 = %d\n", *(&num1));
    printf(" value at address of num2 = %f\n", *(&num2));
    printf(" value at address of num3 = %c\n", *(&num3));

    printf("\n Using only pointer variable :\n");
    printf("----------------------------------\n");
    printf(" address of num1 = %p\n", pt1);
    printf(" address of num2 = %p\n", pt2);
    printf(" address of num3 = %p\n", pt3);

    printf("\n Using only pointer operator :\n");
    printf("----------------------------------\n");
    printf(" value at address of num1 = %d\n", *pt1);
    printf(" value at address of num2= %f\n", *pt2);
    printf(" value at address of num3= %c\n\n", *pt3);
    
    return 0;
}
