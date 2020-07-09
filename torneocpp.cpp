#include "matrizAd.h"


// crear un grafo vacio
void crearM(GrafoM &G)
{
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<n;j++)
      {
      G[i][j]=0;
      }
   }
}


//agregar al grafo una arista
void agregarM(GrafoM &G, int u, int v)
{
   G[u][v]=1;
   if(u!=v)
      G[v][u]=1;
}


//mostrar matriz
void mostrarMatriz (GrafoM G)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
            printf ("%d ",G[i][j]);
        printf ("\n");
    }
    
}

//listarar vertices adyasentes
void listaradyacenter(GrafoM &G,int v)
{
   //printf("vertices adyacentes:");
   for(int i=0;i<n;i++)
   {
      if(G[v][i]==1)
         printf("\n%d", i);
   }
}



//Determinar el grado de un vértice dado.
int gradoVertice(GrafoM G,int v)
{
    int resultado=0;
    for (int i=0 ; i<n; i++)
    {
        if(G[v][i]==1)
            resultado=resultado+1;
    }
    return resultado;
}


//Dados dos vértices, determinar si hay una arista que los une
bool hayArista(GrafoM G,int v, int u)
{
return G[u][v]>0;
}

void Producto (GrafoM A, GrafoM B, GrafoM &C)
 // guardo en C el resultado del producto de AxB.
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
        }
}
    printf("\nLa matriz es :\n");
    mostrarMatriz(C);

}



void DFSMatriz(GrafoM G, int actual,bool visitado[n])
{
    
    //marco el vértice actual como
    visitado[actual] = true;
    /* aquí va el procesamiento que al vértice actual antes de continuar por las subramas de sus vecinos */
    /* recorremos los vecinos del vértice actual */
    //printf("\n A la ida :%d",actual);
    for(int j=0;j<n-1;j++)
    {
      if( G[actual][j] == 1 )
        {
            if (!visitado[j])
                DFSMatriz(G, j, visitado);
        }
           
    }
    //printf("\n A la vuelta :%d",actual);
}


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
}



//cuenta cantidad de compolrnentes conexos
void cantidadComponenetesConexosDFS(GrafoM G, int actual,bool visitado[n],int &cant, bool impar,bool par)
{
    visitado[actual] = true;
    cant++;
           
       for(int j=0;j<n-1;j++)
       {
           if( G[actual][j] == 1 )
           {
               if (!visitado[j])
                   cantidadComponenetesConexosDFS(G, j, visitado,cant);
           }
              
       }
}

int cantidadComponenetesConexos(GrafoM G)
{
    int cantidad=0;
    int resultado=0;
    bool visitado[n];
    for (int i=0; i<n; i++)
    {
        visitado[i]=false;
    }
    for (int i=0; i<n; i++)
    {
        if(!visitado[i])
            cantidadComponenetesConexosDFS(G,i,visitado,cantidad);
        if(cantidad>1 )
            resultado=resultado+1;
        cantidad=0;
    }
    return resultado;
}

void DFSPuente(GrafoM G, int actual,int v,bool visitado[n])
{
    
    visitado[actual] = true;
    int j=0;
    while(j<n-1 && !visitado[v] )
    {
      if( G[actual][j] == 1 )
        {
            if (!visitado[j])
                DFSPuente(G, j,v, visitado);
        }
        j++;
    }
    //printf("\n A la vuelta :%d",actual);
}



bool esPuente(GrafoM g , int u, int v)
{
    bool visitado[n];
    for (int i=0; i<n; i++)// order n
    {
        visitado[i]=false;
    }
    
    g[u][v]=0;
    g[v][u]=0;   //orden 1
    
    DFSPuente(g,u,v,visitado); //order  -> max(|V|,|A|(son aristas)) -> |V|=n  |A|=n(n-1)/2-->n cuadrado
    g[u][v]=1;
    g[v][u]=1; //  orden  1
    
    return !visitado[v]; // orden  1
}


void DfsCaminoMasLargo(GrafoM G,int a,array_dinamico &camino, bool visitado[n])
{
     //marco el vértice actual como
       visitado[a] = true;
       for(int j=0;j<n-1;j++)
       {
           if( G[a][j] == 1 )
           {
               if (!visitado[j])
               {
                   cargarArreglo(camino,j);
                   DfsCaminoMasLargo(G, j,camino, visitado);
               }
            }
              
       }
}




//el camino mas largo
void caminoMasLargo(GrafoM G,array_dinamico &camino,bool visitado[m])
{
    array_dinamico masLargo;
    crear(masLargo);
    for (int i=0; i<n; i++)
    {
        visitado[i]=false;
    }
    for (int i=0; i<n; i++)
    {
        if(!visitado[i])
        {
            cargarArreglo(camino, i);
            DfsCaminoMasLargo(G,i,camino,visitado);
            if(mayor(masLargo , camino )==1)
                masLargo=camino;
            camino.tamanio=0;
        }
    }
    camino=masLargo;
}
