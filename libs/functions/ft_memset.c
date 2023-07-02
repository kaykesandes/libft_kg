#include <stddef.h>
// #include <stdio.h>

void*   ft_memset(void* buffer,int value, size_t len)
{
    unsigned char* a = buffer;
    while (len--) 
    {
        *a++ = value;
    }
    return buffer;
}

// int main(void)
// {
//     char buf[0xff];
//     ft_memset(buf, 0, 0xff);
//     ft_memset(buf, 'A', 20);
//     ft_memset(buf + 20, 'B', 20);
//     printf("%s\n", buf);
// }

/*
O código apresentado é uma implementação da função ft_memset, que é usada para preencher uma área de memória com um determinado valor.
Aqui está uma explicação de cada parte do código:

    1) void* ft_memset(void* buffer, int value, size_t len): Esta linha define a função ft_memset com três parâmetros. 
    O primeiro parâmetro é um ponteiro void* chamado buffer, que aponta para a área de memória a ser preenchida. O 
    segundo parâmetro é um valor inteiro chamado value, que será atribuído a cada byte na área de memória. O terceiro 
    parâmetro é um valor size_t chamado len, que especifica o tamanho em bytes da área de memória a ser preenchida.

    2) unsigned char* a = buffer;: Nesta linha, é criado um ponteiro unsigned char* chamado a e inicializado com o valor 
    do ponteiro buffer. O ponteiro a será usado para percorrer cada byte da área de memória.

    3)while (len--): Este é um laço while que será executado enquanto o valor de len for maior que zero. O operador de 
    pós-decremento -- subtrai 1 de len e retorna o valor original antes da subtração.

    4)*a++ = value;: Nesta linha, o valor value é atribuído ao byte apontado por a, e depois o ponteiro a é incrementado 
    para apontar para o próximo byte na área de memória.

    5)return buffer;: Por fim, a função retorna o ponteiro buffer, que aponta para a área de memória preenchida com o valor especificado.

Resumidamente, a função ft_memset percorre cada byte da área de memória especificada por buffer e atribui o valor value a cada um deles, 
preenchendo assim a área de memória com esse valor.
*/