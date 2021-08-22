/*comentarios son para recordar que hace
-Ejercicio 1: imprimir un menú
-MARLEN MORAN CAMERO
-Modificado por: MARLEN MORAN CAMERO
-Que hace el programa:
    Realiza un menú número de opciones
    Utiliza la instrucción if para cada opción
    En cada opción se debe de imprimir el mensaje “has seleccionado la opción: #de opción”
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
    int opcion; //variable donde se guradara la opcion elegida
    int num=1;  //numero que inclementara para encontrar el numero del menu elegido
    int max=5;  //numero maximo que hay en el menu
    int min=1;  //el numero minimo dentro del menu

    printf("Menu de opciones:\n1. FRESA\n2. Manzana\n3. Moras\n4. NARANJAS\n5. UVAS");//imprime el menu de opciones 
    printf("\nElige una opcion del menu: ");//pide que se digite la opcion elegida
    scanf("%d",&opcion);//lectura de un dato tipo entero
    
    while (1)
    {
         if (opcion > max)
        {
            printf("\nElige una opcion del menu: ");
            scanf("%d",&opcion);
        }
        else if(opcion < min)
        {
            printf("\nElige una opcion del menu: ");
            scanf("%d",&opcion);
        }
        if (opcion==num)
            {
            printf("\n-----------------------------------------------------------");
            printf("\nELegiste la opcion: %d\n\n",opcion);
            break;
            }
        else 
            {num++;}
    }
    
   return 0; 
}