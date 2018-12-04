#include <stdio.h>
#include <stdlib.h>
#include "Grafo.h"

struct grafo{
    int nro_vertices;
    int gra_max;
    int** arestas;
    int* grau;
};


int contaVertice(FILE* fp){
    int count = 0;
while(!feof){
    //if(getchar() == ' ')
        count++;
}
rewind(fp);
return count;
}

Grafo* cria_Grafo(int nro_vertices, int grau_max){
    Grafo *gr = (Grafo*) malloc(sizeof(struct grafo));
    if(gr != NULL){
    int i;
    gr->nro_vertices = nro_vertices;
    gr->arestas = (int**)malloc(nro_vertices*sizeof(int*));
    for(i=0; i<nro_vertices; i++)
    gr->arestas[i]=(int*)malloc(grau_max*sizeof(int));
    }
    return gr;
}

void libera_Grafo(Grafo* gr){
    if(gr != NULL){
        int i;
        for(i=0; i<gr->nro_vertices; i++)
            free(gr->arestas[i]);
        free(gr->arestas);
    }
    free(gr->grau);
    free(gr);
}

int insereAresta(Grafo* gr, int orig, int dest, FILE* fp){




}
