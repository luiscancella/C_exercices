#include <stdlib.h>
#include <stdio.h>

union empAdd
{
    char *nome;
    char endereco[20];
    int pincode;
};

int main()
{
    printf("\n\n Pointer : Show a pointer to union :\n");
    printf("----------------------------------------\n");
    
    union empAdd employee, *ptr_employee;
    employee.nome = "Jhon Mc\0Donald"; // assign  the string up to null character i.e. '\0'

    ptr_employee = &employee;

    printf(" %s %s\n\n", ptr_employee->nome, (*ptr_employee).nome);

    return 0;
}