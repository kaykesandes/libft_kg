#include "libft.h"
#include <stdio.h>

int main(void)
{
    const char *str = "Ola mundo";
    char chart = 'm';

    char *result = strrchr(str, chart);

    if (result != NULL)
        printf("Encontrado %ld \n", result - str);
    else
        printf("N encontrado\n");
}