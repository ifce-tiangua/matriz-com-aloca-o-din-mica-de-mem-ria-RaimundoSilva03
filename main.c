#include <stdlib.h>
#include <stdio.h>

int main()
{
    int **mat, lin, col;
    int i, j;
    //printf("numero de linhas: \n");
    scanf("%d", &lin);
    //printf("numero de colunas: \n");
    scanf("%d", &col);
    
    if(lin <= 0 || col <= 0) {
        printf("[matriz vazia]");
        return 0;
    }   
    
     //Alocar a matriz
     mat = (int**)malloc(lin*sizeof(int*));
       
     for(int i = 0; i < lin; i++) {
         mat[i] = (int*)malloc(col*sizeof(int));
     }
   //Leitura dos elementos
   //printf("Elementos da matriz\n");
   for(i = 0; i < lin; i++) {
       for(j = 0; j < col; j++){
           scanf("%d", &mat[i][j]);
       }
   }
   //Exibição da matriz
   //printf("Matriz\n");
   for(i = 0; i < lin; i++) {
       
       for(j = 0; j < col; j++) {
           printf("%d ", mat[i][j]);
      
       }
       printf("\n");
   } 
   //Desaloca a memória
   for(i = 0; i < lin; i++) {
    free(mat[i]); 
   }
   free(mat);
    return 0;
}
