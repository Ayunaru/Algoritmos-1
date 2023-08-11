/* Elabore um programa que, dada a idade de um jogador de futebol, classifique-o
em uma das seguintes categorias:
Obs.: Se a idade for menor do que 0 (zero) informe: OPCAO INVALIDA */

//Bibliotecas

#include <stdlib.h>
#include <stdio.h>

// Main

int main (void)
{

// Declaração de variaveis

    int idade;

// Atribuição de valor para variaveis

    printf("\n Digte uma idade: \n");
    scanf("%d", &idade);

// Processamento de dados - saida de dados

    if (idade<0)
    {
    printf("OPCAO INVALIDA");
    }

    else if (idade>0 && idade<=4)
    {
    printf("\n AINDA EH CEDO PARA JOGAR FUTEBOL!!! \n");
    }

    else if (idade>=5 && idade<=10)
    {
    printf("\n %d - Sub-10 \n", idade);
    }

    else if (idade>=11 && idade<=17)
    {
    printf("\n %d - Sub-17 \n", idade);
    }

    else if (idade>=18 && idade<=20)
    {
    printf("\n %d - Sub-20 \n", idade);
    }

    else if (idade>=21 && idade<=35)
    {
    printf("\n %d - Profissional \n", idade);
    }

    else if (idade>=36 && idade<=55)
    {
    printf("\n %d - Master \n", idade);
    }

    else if (idade>=56)
    {
    printf("\n %d - MELHOR APOSENTAR AS CHUTEIRAS... \n", idade);
    }

    return 0;
}
