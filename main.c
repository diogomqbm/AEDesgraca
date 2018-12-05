#include <stdio.h>
#include <stdlib.h>
#include "Grafo.h"


int main()
{
    FILE* fp = fopen("texto_base.txt","r+");

    if(fp == NULL){
        printf("Erro ao abrir arquivo\n");
    }

    Grafo *gr = cria_Grafo(contaVertice(fp),1);

    insereVertices(fp,gr);
    fclose(fp);
    return 0;
}
