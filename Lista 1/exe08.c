/*Em �pocas de pouco dinheiro, os comerciantes est�o procurando
aumentar suas vendas oferecendo desconto. Fa�a um algoritmo que possa receber um
valor de um produto e que escreva o novo valor tendo em vista que o desconto foi de
7%.*/

/* Bibliotecas*/

#include <stdlib.h>
#include <stdio.h>


/* Main*/

int main (void)
{

// Declara��o das variaveis

    float valor;

// Atribui��o de valor para variaveis

    printf("\n Digite o valor do produto: \n");
    scanf(" %f", &valor);

// Saida de dados - processamento

    printf("\n Valor com desconto: %.2f", valor=valor*0.93);

    return 0;

}
