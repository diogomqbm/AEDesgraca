#ifndef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED



#endif // GRAFO_H_INCLUDED
Grafo *cria_Grafo(int nro_vertices);

void libera_Grafo(Grafo* gr);

int insereAresta(Grafo* gr, string orig, string dest, int eh_digrafo);
