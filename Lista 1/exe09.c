/* : Uma pessoa resolveu fazer uma aplica��o em uma poupan�a
programada. Para calcular seu rendimento, ela dever� fornecer o valor constante da
aplica��o mensal, a taxa e o n�mero de meses. Sabendo-se que a f�rmula usada
para este c�lculo �:*/

// Bibliotecas

#include <stdlib.h>
#include <stdio.h>
#include <math.h>


// Main

int main (void)
{

// Declara��o das variaveis

    float p, i, n, j, valor;

// Atribui��o de valor para variaveis

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
