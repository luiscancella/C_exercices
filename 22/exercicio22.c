#include <stdio.h>

int main()
{
    char str[50];
    char revstr[50];
    char *ptr_str = str;
    char *ptr_rev = revstr;
    int i = -1;

    printf("\n\n Pointer : Print a string in reverse order :\n");
    printf("------------------------------------------------\n");

    printf(" Input a string : ");
    scanf("%s", str);

    while (*ptr_str)
    {
        ptr_str++;
        i++;
    }

    while (i >= 0)
    {
        ptr_str--;
        *ptr_rev = *ptr_str;
        ptr_rev++;
        --i;
    }
    
    *ptr_rev = '\0';
    printf(" Reverse of the string is : %s\n\n", revstr);
    return 0;
}