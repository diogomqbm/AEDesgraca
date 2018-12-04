#include <stdio.h>
#include <stdlib.h>
#include "Grafo.h"


int main()
{
    FILE* fp = fopen("texto_base.txt","r+");

    Grafo *gr;

    if(fp == NULL){
        printf("Erro ao abrir arquivo\n");
    }

    cria_Grafo(contaVertice(fp),1);


    fclose(fp);
    return 0;
}
