/*Ler o numerador e o denominador de uma divis˜ao e realiz´a-la verificando a
posibilidade de “divis˜ao por zero”.
Entrada de dados Sa´ıda esperada
27 27/9 = 3
9
53 53/6 = 18.67
6
27 27/0 = Erro: divisao por zero
0
*/

// Bibliotecas


#include <stdio.h>
#include <stdlib.h>

// Main
int main (void){

    int n1, n2;
    float res;

// Entrada de dados
    printf("Digite um valor:");
    scanf("%d", &n1);

    printf("Digite um segundo valor:");
    scanf("%d", &n2);

// Processamento
    if (n2 == 0)
    {
        printf(" %d/%d = Erro: divisao por zero", n1, n2); // Saida
    }

    else
    {
        res = (float)n1/n2;
        printf(" %d/%d = %.2f ", n1, n2, res); // Saida
    }

    return 0;
}

