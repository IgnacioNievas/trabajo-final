#include "header.h"

int main(void){
    srand(getpid());
   int M_Costos[VERTICES][VERTICES], i, j;
    Grafo *lista = NULL;
    
    for(i = 0; i < VERTICES; i++){
        for(j = i+1; j < VERTICES; j++){

            // printf("Ingrese costo de lado entre vertices %d y %d :  ", i, j);
            // scanf("%d", &M_Costos[i][j]);
            
            M_Costos[i][j] = rand()%10+1;

             if(M_Costos[i][j] != 0){
                inserta(i, j, M_Costos[i][j], &lista);
            }
        }
        }
    
    printf("\nGrafo:\n\n");
    mostrar(lista);
    printf("\nArbol abarcador de costo minimo: \n\n");
    kruskal(&lista);
   free(lista);
   
    return 0;
}
