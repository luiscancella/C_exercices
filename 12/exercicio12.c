#include <stdlib.h>
#include <stdio.h>

void findFact(int, int *);

int main()
{
    int fact;
    int num;

    printf("\n\n Pointer : Find the factorial of a given number :\n");
    printf("------------------------------------------------------\n");
    
    printf(" Input a number : ");
    scanf("%d", &num);

    findFact(num, &fact);
    printf(" The Factorial of %d is : %d \n\n", num, fact);
    return 0;
}

void findFact(int limit, int *fact_num)
{
    *fact_num = 1;
    for (int i = 1; i <= limit; i++)
        *fact_num = *fact_num * i;
}