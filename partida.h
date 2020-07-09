#ifndef PARTIDA_H_INCLUDED
#define PARTIDA_H_INCLUDED

#include <stdio.h>

typedef struct{ int numeroPartida	;
                int cedulaJ1;
                int cedulaJ2;
                int cedulaGanador;
                bool finalizada;
    }partida;



//crear partida
void crearPartida(partida &a,int numero,int ci1, int ci2,int ciGandor,bool finalizada);

//imprimir partida
void mostraPartida(partida a);

// devuelvo numero Partida
int obtengoNPartida(partida a);

// devuelvo las cedula de los jugadores
void obtengoJugadores(partida a,int &ciJ1,int &ciJ2);

//obtengo ganador de la partida
int obtengoGanador(partida a);

// verifico si la partida termino
bool partidaFinalizada(partida a);

#endif // vertAr_H_INCLUDED
