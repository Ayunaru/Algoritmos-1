/*Elabore um programa que dado o valor de “x” calcule a f(x) neste ponto, sendo
f(x) definida por:

f : (x)
(
2x + 4 se x < 0
x + 1 se x ≥ 0

*/


// Bibliotecas

#include <stdio.h>

// Main
int main(void)

{

    int n = 0, f;

    printf("\n Digite um valor para x \n"); // Atribuir valor a variavel
    scanf("%d", &n);

    if(n >= 0)
    {
        f = n + 1; // Processamento
        printf("\n x + 1 \n");
        printf("\n %d + 1 \n", n);
        printf("\n Resultado: %d \n", f);
    }

    else

    {

        f = 2*n + 4; // Processamento
        printf("\n 2x + 4 \n");
        printf("\n 2(%d) + 4 \n", n);
        printf("\n %d + 4 \n", 2*n);
        printf("\n Resultado: %d \n", f);
    }

    return 0;
}
