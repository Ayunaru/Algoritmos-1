/* Faça um algoritmo que receba o preço de custo de um produto e mostre
o valor de venda. Sabe-se que o preço de custo receberá um acréscimo de acordo com
um percentual informado pelo usuário.
*/

/* Bibliotecas*/

#include <stdlib.h>
#include <stdio.h>


/* Main*/

int main (void)
{

// Declaração das variaveis

    float custo, venda, por;

// Atribuição de valor para variaveis

    printf("\n Digite um valor para o produto: \n");
    scanf(" %f", &custo);

    printf("\n Digite uma porcentagem de aumento: \n");
    scanf(" %f", &por);

// Processamento

    venda = custo + (custo * (por/100));

// Saida de dados

    printf("\n Seu novo valor de venda foi de: %.2f \n", venda);
    printf("\n Porcentagem de aumento: %.f \n", por);

    return 0;
}
