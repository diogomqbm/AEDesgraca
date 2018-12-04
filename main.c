#include <stdio.h>
#include <stdlib.h>
#include "Grafo.h"


int main()
{
    int count;
    FILE* file = fopen("texto_base.txt","r+");

    Grafo *gr;

    if(file == NULL){
        printf("Erro ao abrir arquivo\n");
    }
    char a;
    fscanf(file,"%c",&a);
    printf("%c",a);

    contaVertice(file);

    return 0;
}
