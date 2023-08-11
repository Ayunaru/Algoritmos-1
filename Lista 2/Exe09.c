/* Elabore um programa que leia o dia e o mˆes de nascimento de uma pessoa e
determine o seu signo conforme a tabela a seguir:
Intervalo Signo
de 22/12 at´e 20/1 Capric´ornio
de 21/1 at´e 19/2 Aqu´ario
de 20/2 at´e 20/3 Peixes
de 21/3 at´e 20/4 Aries ´
de 21/4 at´e 20/5 Touro
de 21/5 at´e 20/6 Gˆemeos
de 21/6 at´e 21/7 Cˆancer
de 22/7 at´e 22/8 Le˜ao
de 23/8 at´e 22/9 Virgem
de 23/9 at´e 22/10 Libra
de 23/10 at´e 21/11 Escorpi˜ao
de 22/11 at´e 21/12 Sagit´ario
Entrada de dados Sa´ıda esperada
30 Signo: Sagit´ario
11
03 Signo: Aqu´ario
02

*/

// Bibliotecas


#include <stdio.h>
#include <stdlib.h>

// Main
int main (void){

    int d , m;

// Entrada de dados
    printf("\n Digite um dia: \n");
    scanf("%d", &d);

    printf("\n Digite um mes: \n");
    scanf("%d", &m);

// Processamento
    if (d == 0 || m == 0)
    {
        printf(" %d/%d = Erro: dia ou mes invalido"); // Saida
    }

    else if ((d>=22 && m==12) || ( d<20 && m==1))
    {
        printf(" Signo: Capricornio "); // Saida
    }

    else if ((d>=21 && m==1) || ( d<19 && m==2))
    {
        printf(" Signo: Aquario "); // Saida
    }

    else if ((d>=20 && m==2) || ( d<20 && m==3))
    {
        printf(" Signo: Peixes "); // Saida
    }

    else if ((d>=21 && m==3) || ( d<20 && m==4))
    {
        printf(" Signo: Aries "); // Saida
    }

    else if ((d>=21 && m==4) || ( d<20 && m==5))
    {
        printf(" Signo: Touro "); // Saida
    }

    else if ((d>=21 && m==5) || ( d<20 && m==6))
    {
        printf(" Signo: Gemeos "); // Saida
    }

    else if ((d>=21 && m==6) || ( d<21 && m==7))
    {
        printf(" Signo: Cancer "); // Saida
    }

    else if ((d>=22 && m==7) || ( d<22 && m==8))
    {
        printf(" Signo: Leao "); // Saida
    }

    else if ((d>=23 && m==8) || ( d<22 && m==9))
    {
        printf(" Signo: Virgem "); // Saida
    }

    else if ((d>=23 && m==9) || ( d<22 && m==10))
    {
        printf(" Signo: Libra "); // Saida
    }

    else if ((d>=23 && m==10) || ( d<21 && m==11))
    {
        printf(" Signo: Escorpiao "); // Saida
    }

    else if ((d>=22 && m==11) || ( d<21 && m==12))
    {
        printf(" Signo: Sagitario "); // Saida
    }
    return 0;
}
