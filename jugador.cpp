
#include "jugador.h"


//crear asistente
void crearAsistente(asistente &a,int d,int b, int c)
{
    a.cedula=b;
    a.numero=d;
    a.edad=c;
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
