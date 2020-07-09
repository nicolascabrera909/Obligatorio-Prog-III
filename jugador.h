#ifndef JUGADOR_H_INCLUDED
#define JUGADOR__H_INCLUDED

#include "string.h"

typedef struct{ int identificador;
                int cedula;
                string nombre;
                string apellido;
                string direccion;
                int partidasDisputadas;
                int partidasGanadas;
                }jugador;



//crear jugador
void crearAsistente(jugador &a,int ident,int ci,string nombre,string apellido,string dir ,int cantidadP, int cantidadG);

//imprimir jugador
void mostrarJugador(jugador a);

// devuelvo numero
int obtengoIdentificador(jugador a);

// devuelvo la cedula
int obtengoCedula(jugador a);

//obtengo nombre
void obtengoNombre(jugador a,string &nombre);

//obtengo apellido
int obtengoApellido(jugador a,string &apellido);

//obtengo direccion
int obtengoDireccion(jugador a,string &direccion);

//obtengo cantidad de partidas jugadas
int obtengoCantidadJugadas(jugador a);

//obtengo cantidad de partidas jugadas
int obtengoCantidadJugadas(jugador a);

// verifico si dos jugadores son iguales
bool sonIguales(jugador a,jugador b);

#endif // vertAr_H_INCLUDED
