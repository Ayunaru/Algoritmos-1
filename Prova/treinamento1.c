#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define TAM 10 // número definidos do tamanho do vetor
#define limsup 122 // número definidos do limite superior
#define liminf 97 // número definidos do limite inferior
#define LIN 4 // número definidos de linhas
#define COL 3 // número definidos de colunas

// Este código refere-se ao estudo para a prova de fundamentos, nele vc pode comentar a função main para ver os resultados

// main
int main ()
{
    int vet[TAM];
    int mat[LIN][COL];
    gerarvet(vet);
    vetsemrept(vet);
    ordvet(vet);
    printf("\n Vetor gerado:    ");
    mostrarvet(vet);
    printf("\n");
    printf("\n Matriz gerada: \n");
    gerarmat(mat);
    printmat(mat);
}

// funções

gerarvet(int vet[])
{
    srand(time(NULL));
    for (int i=0; i<TAM; i++)
    {
        vet[i]= rand() % (limsup-liminf) + liminf;
    }
}

mostrarvet(int vet[])
{
    for (int i=0; i<TAM; i++)
    {
        printf("%d ", vet[i]);
    }
}

ordvet(int vet[])
{
    for (int i=0; i<TAM; i++)
    {
        for (int j=0; j<TAM-1; j++)
        {
            if (vet[j] > vet[j+1])
            {
            int aux = vet[j];
            vet[j] = vet[j+1];
            vet[j+1]= aux;
            }

        }
    }
}

vetsemrept(int vet[])
{
    for (int i=0; i<TAM; i++)
    {
        vet [i] = rand() % (limsup-liminf)+limsup;

        for(int j=0; j<i; j++)
        {
            if (vet[i] == vet[j])
            {
                vet[i]= rand() % (limsup-liminf)+limsup;
                j=-1;
            }

        }
    }
}

gerarmat(int mat[LIN][COL])
{
    for (int i=0; i<LIN; i++)
    {
        for (int j=0; j<COL; j++)
        {
            mat[i][j] = rand() % (limsup -liminf)+liminf;
        }
    }
}

printmat (int mat[LIN][COL])
{
    for (int i= 0; i<LIN; i++)
    {
        for (int j =0; j<COL; j++)
        {
            printf("%d \t ", mat[i][j]);
        }
        printf("\n");
    }
}
