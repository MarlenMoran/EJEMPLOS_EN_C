/*
-Marlen Moran Camero
-Marlen
- Realiza un menú númerico de opciones 
    -Utiliza la instrucción if para cada opción
    -En cada opción se debe de imprimir el mensaje “has seleccionado la opción: #de opción”
*/
//LIBRERIAS
#include <stdlib.h>
#include <iostream>
#include <time.h>
using namespace std;

int main ()
{
    // Se genera una semilla diferente cada vez (basada en el tiempo exacto de ejecución)
    // Se debe llamar siempre, para generar números realmente diferentes cada vez
    //  La funciçon time viene de la libtrería time.h
    //srand (time(NULL));

    cout << ("Se va a generar un numero aleatorio ....\n");
    cout << ("El numero generado es : ");
   // cout << rand(); //Se genera el número con rand y se muestra en pantalla
    return 0;
}