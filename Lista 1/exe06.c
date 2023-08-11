/*Leia uma velocidade em km/h (quilômetros por hora) e apresente
convertida em m/s (metros por segundo).
A fórmula de conversão é M = K/36, sendo K a velocidade em km/h e M em m/s.*/

/* Bibliotecas*/

#include <stdlib.h>
#include <stdio.h>


/* Main*/

int main (void)
{

// Declaração das variaveis

    float m, km;

// Atribuição de valor para variaveis

    printf("\n Digite uma velocidade em km: \n");
    scanf(" %f", &km);

// Processamento de dados

    m = km/36;

// Saida de dados

    printf("\n A velocidade eh de: %.2f m/s", m);

    return 0;
}
