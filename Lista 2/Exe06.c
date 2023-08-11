/* Desenvolver um programa que calcula e retorna o Gasto Energ´etico Basal
(GEB), utilizando as seguintes f´ormulas:
para homens: GEB = 66.47 + (13.75 * PC) + (5 * Alt) – (6.76 * I)
para mulheres: GEB = 655.1 + (9.56 * PC) + (1.85 * Alt) – (4.67 * I)
onde: PC = Peso corporal em kg; Alt = altura em cm e I = Idade.

*/

//Bibliotecas

#include <stdlib.h>
#include <stdio.h>

// Main

int main (void)
{

// Declaração de variaveis

    int sexo;
    float pc, alt, i, geb;

// Atribuição de valor para variaveis

    printf("\n Digte 1 para Homem e 0 para Mulher: \n");
    scanf("%d", &sexo);

    printf("\n Digte um peso: \n");
    scanf("%f", &pc);

    printf("\n Digte uma altura (cm): \n");
    scanf("%f", &alt);

    printf("\n Digte uma idade: \n");
    scanf("%f", &i);

// Processamento de dados - saida de dados

    if (sexo==1)

    {
    printf("\n Seu sexo: H \n");

    geb = 66.47+(13.75*pc)+(5*alt)-(6.76*i);

    printf("\n o GEB  foi de %.2f kcal \n", geb);
    }

    else

    {
    printf("\n Seu sexo: M \n");

    geb = 655.1+(9.56*pc)+(1.85*alt)-(4.67*i);

    printf("\n o GEB  foi de %.2f kcal", geb);
    }

    return 0;
}
