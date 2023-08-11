/*: Leia a altura e o raio de um cilindro circular e imprima o volume desse
cilindro.
O volume de um cilindro circular é calculado por meio da seguinte fórmula:
em que Π = 3.141592*/

/* Bibliotecas*/

#include <stdlib.h>
#include <stdio.h>


/* Main*/

int main (void)
{

// Declaração das variaveis

    int h, r;
    float v, pi = 3.141592;

// Atribuição de valor para variaveis

    printf("\n Digite um valor para a altura: \n");
    scanf(" %d", &h);

    printf("\n Digite um valor para o raio: \n");
    scanf(" %d", &r);

// Processamento de dados

    v = pi * (r*r) * h;

// Saida de dados

    printf("\n O volume eh: %.f", v);

    return 0;

}
