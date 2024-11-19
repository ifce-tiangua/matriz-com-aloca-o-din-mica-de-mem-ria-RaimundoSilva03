#include <stdio.h>
#include <stdlib.h>

int main() {
    int **matriz, i, j, lin, col;

    // Leitura do número de linhas e colunas
    //printf("Digite o número de linhas da matriz: ");
    scanf("%d", &lin);
    //printf("Digite o número de colunas da matriz: ");
    scanf("%d", &col);

    // Verifica se a matriz é vazia
    if (lin == 0 || col == 0) {
        printf("[matriz vazia]\n");
        return 0; // Sai do programa se a matriz for vazia
    }

    // Alocação de memória para a matriz
    matriz = (int**)malloc(lin * sizeof(int*));
    if (matriz == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1; // Retorna erro se não conseguir alocar memória
    }
    
    for (i = 0; i < lin; i++) {
        matriz[i] = (int*)malloc(col * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro na alocação de memória.\n");
            return 1; // Retorna erro se não conseguir alocar memória para a linha
        }
    }

    // Leitura dos elementos da matriz
    //printf("Digite os elementos da matriz:\n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Apresentação dos dados da matriz
    //printf("Matriz digitada:\n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("%d", matriz[i][j]);
            if (j < col - 1) {
                printf(" "); // Espaço entre os números, mas não após o último
            }
        }
        printf("\n"); // Nova linha após cada linha da matriz
    }

    // Desalocação da memória
    for (i = 0; i < lin; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}

