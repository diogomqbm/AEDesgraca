#include <stdio.h>
#include <stdlib.h>
#include "textGenerator.h"

typedef struct grafo Grafo;




struct grafo{
    int nro_vertices;
    int gra_max;
    int** arestas;
    int* grau;
};





int main()
{
    int count;
    FILE* file = fopen("texto_base.txt","r+");
    while(file != feof){
        if()
    }

    Grafo *gr;
    gr = cria_Grafo(10)

    if(file == NULL){
        printf("Erro ao abrir arquivo\n");
    }
    char a;
    fscanf(file,"%c",&a);
    printf("%c",a);

    return 0;
}
