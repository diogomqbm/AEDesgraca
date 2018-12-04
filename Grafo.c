#include <stdio.h>
#include <stdlib.h>
#include "Grafo.h"
#include <string.h>

struct grafo{
    int nro_vertices;
    char vertices*;
    int gra_max;
    int** arestas;
    int* grau;
};


void insereVertice(FILE fp*, int nro_vertices){

        int c = getc(fp);
        vertices[0] = c;

    for(int i=1; i<nro_vertices; i++){
        while((c = getc(fp)) != EOF)
            if(c != ' ' || c != '.' || c != '!' || c != '?' || c != ',')
        vertices[i] = strcat(vertices[i],vertices[i-1]);
    }

}

int contaVertice(FILE* fp){
    int count = 0;
    int c;
while((c = getc(fp)) != EOF){
    if(c == ' ')
        count++;
}
rewind(fp);
return count;
}

int insereAresta(Grafo* gr, int orig, int dest){
    if(gr==NULL)
        return 0;
    if(orig < 0 || orig >= gr ->nro_vertices)
        return 0;
    if(dest <0 || dest >= gr->nro_vertices)
        return 0;

    gr -> arestas[orig][gr->grau[orig]] = dest;

    return 1;
}

void ligaTexto(FILE* fp, Grafo* gr){
    if(gr==NULL)
    return;
    for(int i =0; i<gr->nro_vertices-1;i++){
        insereAresta(gr,i,i+1);
    }
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

void printaFrase(Grafo* gr, FILE* fp, int nro_vertices){
int count = 0;
int c;
int vertices;
vertices = rand() % nro_vertices;
while((c = getc(fp)) != EOF){
    if(count ==)
    if(c > 64 && c < 91)
    while( c != ' ')
    printf("%c",c);
    if(c == ' ')
        count++;
}
}


