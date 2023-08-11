/* : Uma pessoa resolveu fazer uma aplicação em uma poupança
programada. Para calcular seu rendimento, ela deverá fornecer o valor constante da
aplicação mensal, a taxa e o número de meses. Sabendo-se que a fórmula usada
para este cálculo é:*/

// Bibliotecas

#include <stdlib.h>
#include <stdio.h>
#include <math.h>


// Main

int main (void)
{

// Declaração das variaveis

    float p, i, n, j, valor;

// Atribuição de valor para variaveis

    printf("\n Digite o valor para aplicar constantemente: \n");
    scanf(" %f", &p);

    printf("\n Digite uma taxa para ser aplicada \n");
    scanf(" %f", &j);

    printf("\n Digite o tempo aplicado \n");
    scanf(" %f", &n);

// Processamento

i = j*0.01;

valor = ( p * ((pow( 1 + i, n)) - 1 )) / i;

// Saida de dados

    printf("\n O valor acumulado foi de: %.2f", valor);

    return 0;
}
