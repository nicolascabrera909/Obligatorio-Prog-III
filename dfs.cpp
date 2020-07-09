

#include "dfs.h"


void crearArrBool(visitado &V)
{
    for(int j=0 ; j<n ;j++)
    {
        V[j]=false;
    }
}

/*
void DFSLista (GrafoL G, int verticeActual,bool visitado[n])
{
    
    //marco el vértice actual como
    visitado[verticeActual] = true;
    printf("\n A la ida :%d",verticeActual);
    // aquí va el procesamiento que al vértice actual antes de continuar por las subramas de sus vecinos
    //recorremos los vecinos del vértice actual
    listaAdy aux = G[verticeActual];
    while (aux != NULL)
    {
            // si aux->vert no fue visitado, sigo por la subrama que parte desde él
            if (!visitado[aux->vert])
                DFSLista(G, aux->vert, visitado);
            aux = aux->sig;
    }
    printf("\n A la vuelta :%d",verticeActual);

}*/

/* aquí va el procesamiento que le queramos dar al vértice actual luego de procesadas las subramas de sus vecinos. */
  
/*void DFSMatriz  (GrafoM G, int actual,bool visitado[n])
{
    
    //marco el vértice actual como
    visitado[actual] = true;
    //aquí va el procesamiento que al vértice actual antes de continuar por las subramas de sus vecinos
    // recorremos los vecinos del vértice actual
    printf("\n A la ida :%d",actual);
    for(int j=0;j<n-1;j++)
    {
        if( G[actual][j] == 1 )
        {
            if (!visitado[j])
                DFSMatriz(G, j, visitado);
        }
           
    }
    printf("\n A la vuelta :%d",actual);
}*/


/*
void recorreM(GrafoM G)
{
    bool visitado[n];
    for (int i=0; i<n; i++)
    {
        visitado[i]=false;
    }
    for (int i=0; i<n; i++)
    {
        if(!visitado[i])
            DFSMatriz(G,i,visitado);
    }
}*/
/*
void recorreL(GrafoL G)
{
    bool visitado[n];
    for (int i=0; i<n; i++)
    {
        visitado[i]=false;
    }
    for (int i=0; i<n; i++)
    {
        if(!visitado[i])
            DFSLista(G,i,visitado);
    }
}*/

