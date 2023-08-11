/*:A importância de R$ 780.000,00 será dividida entre três ganhadores de
um concurso da lotofácil, sendo que:
1 O primeiro ganhador receberá 46% do total.
2 O segundo receberá 32% do total.
3 O terceiro receberá o restante.
Calcule e imprima a quantia recebida por cada um dos ganhadores.
*/

/* Bibliotecas*/

#include <stdlib.h>
#include <stdio.h>

/* Main*/

int main (void)
{

// Declaração das variaveis

    int primeiro, segundo, terceiro;

// Saida de dados - processamento

    printf("\n O primeiro recebera: %d reais", primeiro = 780000*0.46);
    printf("\n O segundo recebera: %d reais", segundo = 780000*0.32);
    printf("\n O terceiro recebera: %d reais", terceiro = 780000 - (primeiro + segundo));

    return 0;

}
