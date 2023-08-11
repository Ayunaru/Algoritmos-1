/*Leia um ângulo em graus e apresente-o convertido em radianos.
A fórmula de conversão é R = G * Π/180, sendo G o ângulo em graus e R em
radianos e Π = 3.141592*/

/* Bibliotecas*/

#include <stdlib.h>
#include <stdio.h>

/* Main*/

int main (void)
{

// Declaração das variaveis

    float g, pi = 3.141592, r;

// Atribuição de valor para variaveis

    printf("\n Digite um valor para o angulo: \n");
    scanf(" %f", &g);

// Processamento de dados

    r = g * (pi/180);

// Saida de dados

    printf("\n O angulo em rad eh: %.2f", r);

    return 0;
}
