/* Efetuar a leitura de trˆes valores inteiros e apresentar o valor do meio.
Entrada de dados Sa´ıda esperada
1 N´umero do meio ´e: 2
2
3
11 N´umero do meio ´e: 22
33
22
333 N´umero do meio ´e: 222
111
222
*/

//Bibliotecas

#include <stdlib.h>
#include <stdio.h>

// Main

int main (void)
{

// Declaração de variaveis

    int a, b, c;

// Atribuição de valor para variaveis

    printf("\n Digte um num: \n");
    scanf("%d", &a);

    printf("\n Digte um num: \n");
    scanf("%d", &b);

    printf("\n Digte um num: \n");
    scanf("%d", &c);

// Processamento de dados - saida de dados

    if (a==b==c)
    {
    printf("Os tres sao iguais");
    }

    else if (a>b && b>c)
    {
    printf("\n %d > %d > %d \n", a, b, c);
    }

    else if (a>c && c>b)
    {
    printf("\n %d > %d > %d \n", a, c, b);
    }

    else if (b>a && a>c)
    {
    printf("\n %d > %d > %d \n", b, a, c);
    }

    else if (b>c && c>a)
    {
    printf("\n %d > %d > %d \n", b, c, a);
    }

    else if (c>a && a>b)
    {
    printf("\n %d > %d > %d \n", c, a, b);
    }

    else if (c>b && b>a)
    {
    printf("\n %d > %d > %d \n", c, b, a);
    }

    return 0;
}
