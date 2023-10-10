#include <stdlib.h>
#include <stdio.h>

struct employee
{
    char *nome;
    int id;
};

int main()
{
    printf("\n\n Pointer : Show a pointer to an array which contents are pointer to structure :\n");
    printf("-----------------------------------------------------------------------------------\n");

    static struct employee emp1 = {"Jhon", 1001},
                           emp2 = {"Alex", 1002},
                           emp3 = {"Taylor", 1003};
    struct employee(*emp_array[]) = {&emp1, &emp2, &emp3};
    struct employee(*(*pt)[3]) = &emp_array;

    printf(" Exmployee Name : %s \n", (**(*pt + 1)).nome);
    printf("---------------- Explanation --------------------\n");
    printf("(**(*pt+1)).nome\n");
    printf("= (**(*&emp_array+1)).nome   as pt=&emp_array\n");
    printf("= (**(emp_array+1)).nome     from rule *&pt = pt\n");
    printf("= (*emp_array[1]).nome       from rule *(pt+i) = pt[i]\n");
    printf("= (*&emp2).nome        as emp_array[1] = &emp2\n");
    printf("= emp2.nome = Alex       from rule *&pt = pt\n\n");
    printf(" Employee ID :  %d\n", (*(*pt + 1))->id);
    printf("---------------- Explanation --------------------\n");
    printf("(*(*pt+1))-> id\n");
    printf("= (**(*pt+1)).id     from rule -> = (*).\n");
    printf("= emp2.id = 1002\n");
    printf("\n\n");
    return 0;
}
