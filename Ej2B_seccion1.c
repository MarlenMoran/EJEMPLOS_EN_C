/*comentarios son para recordar que hace
-Ejercicio 2: operaciones aritméticas con variables de diferentes tipos
-MARLEN MORAN CAMERO
-Modificado por: MARLEN MORAN CAMERO
-Que hace el programa:
    Declara una variable de tipo entero. Con valor asignado
    Declara una variable de tipo decimal (float). Con valor asignado
    Con esas variables realiza las operaciones aritméticas básicas (suma, resta multiplicación y división)
    Imprime el resultado de cada operación de manera ordenada
-Necesita un circuito? 
    Por ahora no
*/
//----------------------------------------------------------------------------------
//Bibliotecas para consultar palabras y funciones para nuestro progrma

# include <stdio.h>     //Proporciona el núcleo de las capacidades de entrada/salida del lenguaje C (incluye la venerable función printf).
# include <stdlib.h>    /*Para realizar ciertas operaciones como conversión de tipos, generación de números pseudo-aleatorios, gestión de 
                        memoria dinámica, control de procesos, funciones de entorno, de señalización (??), de ordenación y búsqueda.*/
# include <math.h>      //Contiene las funciones matemáticas comunes

//---------------------------------------------------------------------------------------
//Declaraci´on de variables con el tipo corre

//estructura main
int main ()
{
    int     var1=5;     //variable  uno
    float   var2=7.2;   //variable dos
    float suma, resta, mult, div;   //variables donde se guardaran las operaciones 
    suma=var1+var2;     //suma de los dos numeros
    resta=var1-var2;    //resta de dos numeros
    mult=var1*var2;     //multiplicacion de dos numeros
    div=var1/var2;      //divicion de dos numeros
    printf("\n%d + %f = %f\n\n",var1,var2,suma);//imprime la suma de las variables
    printf("\n%d - %f = %f\n\n",var1,var2,resta);//imprime la suma de las variables
    printf("\n%d %c %f = %f\n\n",var1,'%',var2,div);//imprime la suma de las variablediv
    return 0; 
}