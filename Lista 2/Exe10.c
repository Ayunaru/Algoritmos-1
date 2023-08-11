/*- Escreva um programa em C que receba trˆes n´umeros inteiros diferentes digitados no teclado e imprima a soma, a m´edia, o produto, o menor e o maior desses n´umeros. A tela de
di´alogo deve aparecer como se segue::

Entrada de dados Sa´ıda esperada
13 A soma eh 54
27 A media eh 18.00
14 O produto eh 4914
O menor eh 13
O maior eh 27
39 A soma eh 106
2 A media eh 35.33
65 O produto eh 5070
O menor eh 2
O maior eh 65

*/

// Bibliotecas

#include <stdio.h>
#include <stdlib.h>

// Main
int main (void){

    int n1, n2, n3;
    float res;

// Entrada de dados

    printf("\n Digite um valor: \n");
    scanf("%d", &n1);

    printf("\n Digite um segundo valor: \n");
    scanf("%d", &n2);

    printf("\n Digite um terceiro valor: \n");
    scanf("%d", &n3);

// Processamento

    printf("\n Soma: %.f \n", (float)n1 + n2 + n3);
    printf("\n Media: %.2f \n",((float)n1 + n2 + n3)/3 );
    printf("\n Produto: %.f \n", (float)n1 * n2 * n3);

    if (n1 > n2 && n2 > n3)
    {
        printf( "\n %d eh o maior \n", n1);
        printf( "\n %d eh o menor \n", n3);
    }

        else if (n1 > n3 && n3 > n2)
    {
        printf( "\n %d eh o maior", n1);
        printf( "\n %d eh o menor", n2);
    }

        else if (n2 > n3 && n3 > n1)
    {
        printf( "\n %d eh o maior", n2);
        printf( "\n %d eh o menor", n1);
    }

        else if (n2 > n1 && n1 > n3)
    {
        printf( "\n %d eh o maior", n2);
        printf( "\n %d eh o menor", n3);
    }

        else if (n3 > n1 && n1 > n2)
    {
        printf( "\n %d eh o maior", n3);
        printf( "\n %d eh o menor", n2);
    }

        else if (n3 > n2 && n2 > n1)
    {
        printf( "\n %d eh o maior", n3);
        printf( "\n %d eh o menor", n1);
    }


    return 0;
}

