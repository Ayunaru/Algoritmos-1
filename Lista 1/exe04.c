/*:A import�ncia de R$ 780.000,00 ser� dividida entre tr�s ganhadores de
um concurso da lotof�cil, sendo que:
1 O primeiro ganhador receber� 46% do total.
2 O segundo receber� 32% do total.
3 O terceiro receber� o restante.
Calcule e imprima a quantia recebida por cada um dos ganhadores.
*/

/* Bibliotecas*/

#include <stdlib.h>
#include <stdio.h>

/* Main*/

int main (void)
{

// Declara��o das variaveis

    int primeiro, segundo, terceiro;

// Saida de dados - processamento

    printf("\n O primeiro recebera: %d reais", primeiro = 780000*0.46);
    printf("\n O segundo recebera: %d reais", segundo = 780000*0.32);
    printf("\n O terceiro recebera: %d reais", terceiro = 780000 - (primeiro + segundo));

    return 0;

}
