/* Faça um programa que calcule o ano de nascimento de uma pessoa a
partir de sua idade e do ano atual.*/

/* Bibliotecas*/

#include <stdlib.h>
#include <stdio.h>


/* Main*/

int main (void)
{

// Declaração das variaveis

    int idade, atual, nasc;

// Atribuição de valor para variaveis

    printf("\n Digite uma idade: \n");
    scanf(" %d", &idade);

    printf("\n Digite o ano atual: \n");
    scanf(" %d", &atual);

// Saida de dados - processamento

    printf("\n O ano de seu nascimento foi: %.d", atual-idade);

    return 0;
}
