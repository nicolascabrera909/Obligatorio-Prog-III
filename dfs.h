
#ifndef dfs_hpp
#define dfs_hpp

#include "matrizAd.h"
#include "listaAd.h"


/*typedef struct nodo{ int vert;
                     nodo * sig;
                    }nodo;
typedef nodo * ListaAdy;*/
/*
const int N =5; // cantidad de vertices
typedef int Grafo [N][N];*/
typedef bool visitado [n];


//typedef ListaAdy Grafo [N];


void crearArrBool(visitado &V);


void DFSMatriz (GrafoM G, int Actual,bool visitado[n]);

#endif /* dfs_hpp */
