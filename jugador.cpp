
#include "jugador.h"

//crear jugador
void crearAsistente(jugador &a,int ident,int ci,string nombre,string apellido,string dir ,int cantidadP, int cantidadG)
{
    a.identificador=ident;
    a.apellido=apellido;
    a.cedula=ci;
    a.direccion=dir;
    a.nombre=nombre;
    a.partidasDisputadas=cantidadP;
    a.partidasGanadas=cantidadG;
}

//imprimir jugador
void mostrarJugador(jugador a)
{
    printf("Identificador:%d\nCedula:%d",a.identificador, a.cedula);
    printf("\nNombre:");
    mostrarString(a.nombre);
    printf("\nApellido:");
    mostrarString(a.apellido);
    printf("\nDireccion:");
    mostrarString(a.direccion);
    printf("Patidas jugadas:%d\nPartidas ganadas:%d",a.partidasDisputadas, a.partidasGanadas);
}

// devuelvo numero
int obtengoIdentificador(jugador a)
{
    return a.identificador;
}

// devuelvo la cedula
int obtengoCedula(jugador a)
{
    return a.cedula;
}

//obtengo nombre
void obtengoNombre(jugador a,string &nombre)
{
    strcop(a.nombre, nombre);
}

//obtengo apellido
int obtengoApellido(jugador a,string &apellido)
{
    strcop(a.apellido, apellido);
}

//obtengo direccion
int obtengoDireccion(jugador a,string &direccion)
{
    strcop(a.direccion, direccion);
}

//obtengo cantidad de partidas jugadas
int obtengoCantidadJugadas(jugador a)
{
    return a.partidasDisputadas;
}

//obtengo cantidad de partidas jugadas
int obtengoCantidadGanadas(jugador a)
{
    return a.partidasGanadas;
}



// verifico si dos jugadores son iguales
bool sonIguales(jugador a,jugador b)
{
    return a.cedula==b.cedula;
}

