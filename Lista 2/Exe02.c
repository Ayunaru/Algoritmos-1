//Bibliotecas

#include <stdlib.h>
#include <stdio.h>

// Main

int main (void)
{

// Declaração de variaveis

    int m;

// Atribuição de valor para variaveis

    printf("\n Digte um mes: \n");
    scanf("%d", &m);

    // Processamento de dados - saida de dados

    if (m<=0)
    {
    printf("OPCAO INVALIDA");
    }

    else if (m<=1 || m<=3)
    {
    printf("\n Primeiro trimestre \n");
    }

    else if (m<=4 || m<=6)
    {
    printf("\n Segundo trimestre \n");
    }

    else if (m<=7 || m<=9)
    {
    printf("\n Terceiro trimestre \n");
    }

    else if (m<=10 || m<=12)
    {
    printf("\n Quarto trimestre \n");
    }

    return 0;
}
