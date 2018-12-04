#include <stdio.h>
#include <stdlib.h>
#include "Grafo.h"


int main()
{
    int count;
    FILE* file = fopen("texto_base.txt","r+");
    while(file != feof){
    }

    Grafo *gr;
    gr = cria_Grafo(10,1);

    if(file == NULL){
        printf("Erro ao abrir arquivo\n");
    }
    char a;
    fscanf(file,"%c",&a);
    printf("%c",a);

    return 0;
}
