/* Fa�a um algoritmo que receba o pre�o de custo de um produto e mostre
o valor de venda. Sabe-se que o pre�o de custo receber� um acr�scimo de acordo com
um percentual informado pelo usu�rio.
*/

/* Bibliotecas*/

#include <stdlib.h>
#include <stdio.h>


/* Main*/

int main (void)
{

// Declara��o das variaveis

    float custo, venda, por;

// Atribui��o de valor para variaveis

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
