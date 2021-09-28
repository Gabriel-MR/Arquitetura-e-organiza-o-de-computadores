#include <stdio.h>
#include <conio.h>
#define N 3

// protótipos das sub-rotinas
void ExibirMatriz(int[][N]);

main(){

//Definição de variaveis
    int i, j, x, cont = 0;

    int aux = 0;

    int matrizC[N][N];

    int matrizA[N][N] = {{34, 56, 32},
                        {67, 12, 98},
                        {78, 92, 58}};

    int matrizB[N][N] = {{77, 66, 33},
                        {97, 11, 22},
                        {54, 16, 29}};


    //imprime matriz A e B
    printf("Matriz A: \n");
    ExibirMatriz(matrizA);

    printf("\nMatriz B: \n");
    ExibirMatriz(matrizB);

    //printf("%i", cont);

    //produto
    while(cont<10000){
        for(i = 0; i < N; i++){

            for(j = 0; j < N; j++){
                matrizC[i][j] = 0;

                for(x = 0; x < N; x++){
                    aux +=  matrizA[i][x] * matrizB[x][j];
                }

                matrizC[i][j] = aux;
                aux = 0;
            }
        }
        cont++;
        //printf("%i", cont);
        //printf("\n");
    }

    //imprime matriz C
    printf("\nMatriz C: \n");
    ExibirMatriz(matrizC);

    //printf("%i", cont);
}

//sub-rotinas
void ExibirMatriz(int matriz[][N])
{

    int i, j;
    for (i=0; i< N; i++)
    {
        for (j=0; j< N; j++)
        {
            printf("%i  ", matriz[i][j]);
        }
        printf("\n");
    }
}
