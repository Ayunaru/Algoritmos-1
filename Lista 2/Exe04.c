//Bibliotecas

#include <stdlib.h>
#include <stdio.h>

// Main

int main (void)
{

// Declaração de variaveis

    int n, m;

// Atribuição de valor para variaveis

    printf("\n Digte um num: \n");
    scanf("%d", &m);

    printf("\n Digte outro num: \n");
    scanf("%d", &n);

    // Processamento de dados - saida de dados

    if (m==n)
    {
    printf("Os dois sao iguais");
    }

    else if (m>n)
    {
    printf("\n %d e maior que %d \n", m,n);
    }

    else if (m<n)
    {
    printf("\n %d e maior que %d \n", n,m);
    }

    return 0;
}
