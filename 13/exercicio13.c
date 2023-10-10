#include <stdlib.h>
#include <stdio.h>

int main()
{
    char texto[50];
    char *ptr_texto;
    int vogal, consoantes;
    printf("\n\n Pointer : Count the number of vowels and consonants :\n");
    printf("----------------------------------------------------------\n");
    printf(" Input a string: ");
    
    fgets(texto, sizeof texto, stdin);

    ptr_texto = texto;

    vogal = consoantes = 0;
    while (*ptr_texto != '\0')
    {
        if (*ptr_texto == 'A' || *ptr_texto == 'E' || *ptr_texto == 'I' || *ptr_texto == 'O' || *ptr_texto == 'U' || *ptr_texto == 'a' || *ptr_texto == 'e' || *ptr_texto == 'i' || *ptr_texto == 'o' || *ptr_texto == 'u')
            vogal++;
        else
            consoantes++;
        ptr_texto++;
    }

    printf(" Number of vowels : %d\n Number of consonants : %d\n", vogal, consoantes - 1);
    return 0;
}
