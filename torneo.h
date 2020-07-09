#ifndef MATRIZAD_H_INCLUDED
#define MATRIZAD_H_INCLUDED

#include "arreglo.h"


const int n =5;
typedef int GrafoM [n][n];




// crear un grafo vacio
void crearM(GrafoM &G);
//Agregar una arista entre dos vértices
void agregarM(GrafoM &G, int u, int v);
//mostrar matriz
void mostrarMatriz (GrafoM G);

//Listar en pantalla los vértices adyacentes a un vértice dado.
void listaradyacenter(GrafoM &G,int v);
//Determinar el grado de un vértice dado.
int gradoVertice(GrafoM G,int v);
//Dados dos vértices, determinar si hay una arista que los une
bool hayArista(GrafoM G,int v,int u);


/*Crear un grafo de N vértices y sin aristas.
• Agregar una arista entre dos vértices.
• Determinar el grado de un vértice dado.
• Listar en pantalla los vértices adyacentes a un vértice dado.
• Dados dos vértices, determinar si hay una arista que los une.*/

//ejercicio 4
//multiplicar matriz
void Producto (GrafoM A, GrafoM B, GrafoM &C);

// verifico si hay vuelos
int hayVuelo(GrafoM vuelos, int destino1, int destino2);

//mostrar matriz
void mostrarMatriz (GrafoM G);


//ejercicio 5

//calcular largo de arreglo
int largoArreglo(GrafoM G);


void DFSMatriz  (GrafoM G, int actual,bool visitado[n]);
void recorreM(GrafoM G);


//cuenta cantidad de compolrnentes conexos  DFS
void cantidadComponenetesConexosDFS (GrafoM G, int actual,bool visitado[n],int &cant);

//cuenta cantidad de compolrnentes conexos  devuelvo la cantidad
int cantidadComponenetesConexos(GrafoM G);

//valida si un par de vertices es puente en un grafo
bool esPuente(GrafoM g , int u, int v);

//el camino mas largo ,dfs
void DfsCaminoMasLargo(GrafoM G,int a,array_dinamico &camino, bool visitado[n]);

//el camino mas largo
void caminoMasLargo(GrafoM G,array_dinamico &camino,bool visitado[n]);





#endif // MATRIZAD_H_INCLUDED
