#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void changePosition(char *char1, char *char2)
{
    char tmp;
    tmp = *char1;
    *char1 = *char2;
    *char2 = tmp;
}

void charPermu(char *texto, int cont, int end_cont)
{
    int i;
    if (cont == end_cont)
        printf("\n%s", texto);
    else
    {
        for (i = cont; i <= end_cont; i++)
        {
            // printf("\n N Looping: %d", cont);
            // printf("\n Controle: %d", i);
            changePosition((texto + cont), (texto + i));
            charPermu(texto, cont + 1, end_cont);
            changePosition((texto + cont), (texto + i));
        }
    }
}

int main()
{
    char str[] = "abcd";

    int str_lenght = strlen(str);

    printf("\n\n Pointer : Generate permutations of a given string :\n");
    printf("--------------------------------------------------------\n");

    printf(" The permutations of the string are : \n");
    charPermu(str, 0, str_lenght - 1);
    printf("\n\n");

    return 0;
}