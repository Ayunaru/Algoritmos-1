/*: : Leia o valor do raio de um círculo. Calcule e imprima a área do círculo
correspondente.
A área do círculo é A = Π * raio2
, sendo Π = 3.141592.*/

/* Bibliotecas*/

#include <stdlib.h>
#include <stdio.h>


/* Main*/

int main (void)
{

// Declaração das variaveis

    int r;
    float a, pi = 3.141592;

// Atribuição de valor para variaveis

    printf("\n Digite um valor para o raio: \n");
    scanf(" %d", &r);

// Processamento de dados

    a = pi * (r*r);

// Saida de dados

    printf("\n A area do circulo eh: %.f", a);

    return 0;

}

