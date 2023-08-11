/*Exercício 01: Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela
equação:
Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa através
da fórmula dada. Imprima o resultado.
Exercício 02: Leia a altura e o raio de um cilindro circular e imprima o volume desse
cilindro.
O volume de um cilindro circular é calculado por meio da seguinte fórmula:
em que Π = 3.141592*/

/* Bibliotecas*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Main*/

int main (void)
{

// Declaração das variaveis

    int a, b;
    float h;

// Atribuição de valor para variaveis

    printf("\n Digite um valor para a: \n");
    scanf(" %d", &a);

    printf("\n Digite um valor para b: \n");
    scanf(" %d", &b);

// Processamento de dados

    h = sqrt((a*a) + (b*b));

// Saida de dados

    printf("\n O valor da hipotenusa eh: %.f", h);

    return 0;

}
