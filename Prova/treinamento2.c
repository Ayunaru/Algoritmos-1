#include <stdlib.h>
#include <stdio.h>
#define LIN 3 // número definidos de linhas
#define COL 4 // número definidos de colunas
#define LIM 10 // número definido do limite
#define TAM 5 // número definidos do tamanho do vetor

// Este código refere-se ao estudo para a prova de fundamentos, nele vc pode comentar a função main para ver os resultados

// main
int main ()
{
    int vet[TAM];
    int matriz[LIN][COL];
    int numero;
    int num=3;

//Gerando vetor...
    gerarvet(vet);
// Verificando repeticoes vetor...
    vetsemrep(vet);
// Ordenando vetor
    ordenarvet(vet);
// Mostrando Vetor...
    printf("\n ===================================");
    printf("\n");
    printf("    Vetor gerado\n     ");
    mostrarvet(vet);
    printf("\n ===================================");
    printf("\n");
// Gerando Matriz
    printf("    Matriz gerada\n");
    geramatriz(matriz);
// Mostrando matriz
    printmatriz(matriz);
    printf("\n ===================================");
    printf("\n");
// Gerando numero randomico
    printf("    Sorteio de numero randomico \n");
    gerarnumrandom(numero);
        printf("\n");
        printf("\n ===================================");
    printf("\n");
    printf("    Jogando dado de 3 faces e contabilizando o seus lances \n\n      Numeros obtidos:");
// Jogando dado de 3 faces e contabilizando o seus lances
    jogardado(num);

    return 0;
}

// funções
void gerarvet(int vet[])
{
    int i;
    srand(time(NULL));
    for (i=0; i<TAM; i++)
    {
        vet[i] = rand() % 10;
    }
}

void mostrarvet(int vet[])
{
    int i;

    for (i=0; i<TAM; i++)
    {
        printf("%d ", vet[i]);
    }
}

void ordenarvet(int vet[])
{
    int i, j, aux;

    for (i=0; i<TAM; i++)
    {
        for (j=0; j<TAM-1; j++)
         {
            if (vet[j] > vet[j+1])
            {
                aux = vet[j];
                vet[j] = vet [j+1];
                vet[j+1] = aux;
            }
         }
    }
}

void vetsemrep(int vet[])
{
    int i, j;
    for (i=0; i<TAM; i++)
    {
        vet[i] = rand() % LIM;
        for (j=0; j<i; j++)
            {
                if (vet [i] == vet[j])
                {
                    vet[i] = rand() % LIM;
                    j=-1;
                }

            }

    }

}

void geramatriz(int matriz[LIN][COL])
{
    int i, j;
    srand(time(NULL));
    for (i=0; i<LIN; i++)
    {
        for(j=0; j<COL; j++)
        {
        matriz[i][j] = rand()%LIM;
        }
    }

}


void printmatriz(int matriz[LIN][COL])
{
    for( int i=0; i < LIN; i++)
    {
        for( int j=0; j < COL; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void gerarnumrandom(int num)
{
    num = rand() % (122-97) + 97;
    printf("\n numero sorteado: %d", num);
}

jogardado(int num)
{
    int i, dado, cont1=0, cont2=0, cont3=0;
    srand(time(NULL));
    for (i=0; i<=num; i++)
    {
        dado = rand()%3 + 1;
        printf("%d ", dado);
        if (dado==1)
    {
        cont1++;
    }
        if (dado==2)
    {
        cont2++;
    }

        if (dado==3)
    {
        cont3++;
    }

    }
    printf("\n Num 1 apareceu: %d vezes | %.f %%", cont1, ((float)cont1/4)*100);
    printf("\n Num 2 apareceu: %d vezes | %.f %%", cont2, ((float)cont2/4)*100);
    printf("\n Num 3 apareceu: %d vezes | %.f %%", cont3, ((float)cont3/4)*100);
}
