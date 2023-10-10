#include <stdlib.h>
#include <stdio.h>

struct EmpAddress
{
    char *name;
    char endereco[20];
    int pincode;
} employee = {"John Alter", "Court Street \n", 654134}, *ptr_employee = &employee;

int main()
{
    printf("\n\n Pointer : Show the usage of pointer to structure :\n");
    printf("--------------------------------------------------------\n");
    printf(" %s from %s \n\n", ptr_employee->name, (*ptr_employee).endereco);

    return 0;
}