#include <stdio.h>
#include <stdlib.h>
#define maxlin 3
#define maxcol 4

int main()
{
    float media;
    int linha, coluna, soma = 0;
    int matriz[maxlin][maxcol] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    char nome[7] = {'j', 'u', 'l', 'i', 'a', 'n'};

    for(linha = 0; linha<maxlin; linha++){
        for(coluna = 0; coluna<maxcol; coluna++){
            printf("%d ", matriz[linha][coluna]);

            soma = soma + matriz[linha][coluna];
            printf("Soma: %d\n", soma);
        }
        printf("\n");
    }
    printf("\n");
    for(linha=0; linha<7; linha++){
        printf("%c", nome[linha]);
    }
    printf("\n");
    printf("\n");
    printf("Total = %d\n", soma);
    media =(float)soma / (maxlin*maxcol);
    printf("Media: %.2f", media);
}
