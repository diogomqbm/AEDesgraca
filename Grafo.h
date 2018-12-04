#ifndef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED


#endif // GRAFO_H_INCLUDED

typedef struct grafo Grafo;

Grafo *cria_Grafo(int nro_vertices, int grau_max);

void libera_Grafo(Grafo* gr);

int contaVertice(FILE* fp);
