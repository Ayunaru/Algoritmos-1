/*Leia uma velocidade em km/h (quil�metros por hora) e apresente
convertida em m/s (metros por segundo).
A f�rmula de convers�o � M = K/36, sendo K a velocidade em km/h e M em m/s.*/

/* Bibliotecas*/

#include <stdlib.h>
#include <stdio.h>


/* Main*/

int main (void)
{

// Declara��o das variaveis

    float m, km;

// Atribui��o de valor para variaveis

    printf("\n Digite uma velocidade em km: \n");
    scanf(" %f", &km);

// Processamento de dados

    m = km/36;

// Saida de dados

    printf("\n A velocidade eh de: %.2f m/s", m);

    return 0;
}
