
#include "partida.h"

//crear partida
void crearPartida(partida &a,int numero,int ci1, int ci2,int ciGandor,bool finalizada)
{
    a.numeroPartida=numero;
    a.cedulaJ1=ci1;
    a.cedulaJ2=ci2;
    a.finalizada=finalizada;
}

//imprimir partida
void mostraPartida(partida a)
{
    printf("Numero Partida: %d",a.numeroPartida);
    printf("Ci de los jugadores: %d y %d",a.cedulaJ1, a.cedulaJ2);
    printf("Ganador de la partida: %d",a.cedulaGanador);
    if(a.finalizada)
        printf("La partida esta finalizada");
    else
        printf("La partida esta en juego");
}


// devuelvo numero Partida
int obtengoNPartida(partida a)
{
    return a.numeroPartida;
}

// devuelvo las cedula de los jugadores
void obtengoJugadores(partida a,int &ciJ1,int &ciJ2)
{
    ciJ1=a.cedulaJ1;
    ciJ2=a.cedulaJ2;
}

//obtengo ganador de la partida
int obtengoGanador(partida a)
{
    return a.cedulaGanador;
}

// verifico si la partida termino
bool partidaFinalizada(partida a)
{
    return a.finalizada;
}






//crear asistente
void crearAsistente(asistente &a,int d,int b, int c)
{
    
}




//imprimir asistente
void mostrarAsistente(asistente a)
{
    printf("Numero:%d  Cedula :%d  Edad:%d",a.numero, a.cedula, a.edad);
}

// devuelvo numero
int obtengoNumero(asistente a)
{
    return a.numero;
}

// devuelvo la cedula
int obtengoCedula(asistente a)
{
    return a.cedula;
}

//obtengo edad
int obtengoEdad(asistente a)
{
    return a.edad;
}

// verifico si dos asistentes son iguales
bool sonIguales(asistente a,asistente b)
{
    return (a.cedula==b.cedula);
}
