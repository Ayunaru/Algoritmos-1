/*O ´Indice de Massa Corporal (IMC) ´e uma f´ormula que indica se um adulto
est´a acima do peso, se est´a obeso ou abaixo do peso ideal considerado saud´avel. A f´ormula para calcular
o
´Indice de Massa Corporal ´e: IMC = peso/(altura)
2
.
A Organiza¸c˜ao Mundial de Sa´ude usa um crit´erio simples para considerar quem est´a acima do peso e
quem ´e obeso:
Desenvolva um programa que leia o peso (em kg, tipo float) e altura (em metros, tipo float) e em seguida
calcule o IMC e mostre qual a situa¸c˜ao do adulto de acordo com a tabela:*/

//Bibliotecas

#include <stdlib.h>
#include <stdio.h>

// Main

int main (void)
{

// Declaração de variaveis

    float imc, m, h;

// Atribuição de valor para variaveis

    printf("\n Digte um peso: \n");
    scanf(" %f", &m);

    printf("\n Digte uma altura: \n");
    scanf(" %f", &h);

    // Processamento de dados - saida de dados

    imc=m/(h*h);

    if (m<=0 || h <=0)
    {
    printf("OPCAO INVALIDA DE PESO OU ALTURA");
    }

    else if (imc<=20)
    {
    printf("\n Abaixo do peso \n");
    printf("\n IMC: %f", imc);
    }

    else if (imc>20 && m<=25)
    {
    printf("\n Peso normal \n");
    printf("\n IMC: %f", imc);
    }

    else if (imc>25 && imc<=30)
    {
    printf("\n Acima do peso \n");
    printf("\n IMC: %f", imc);
    }

    else if (imc>30 && imc<=34)
    {
    printf("\n Obeso \n");
    printf("\n IMC: %f", imc);
    }

    else if (imc>34)
    {
    printf("\n Muito obeso \n");
    printf("\n IMC: %f", imc);
    }

    return 0;
}
