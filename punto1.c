#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Tarea
{
    int TareaID;       // Numérico autoincremental comenzando en 1000
    char *Descripcion; //
    int Duracion;      // entre 10 – 100
} Tarea;

typedef struct Nodo
{
    Tarea T;         // dato
    //Nodo *Siguiente; // puntero al siguiente
} Nodo;

//Nodo *CrearNodo(Tarea T); // funcion para crear nodo

Nodo *CrearListaVacia(); // funcion para crear una lista vacia

Tarea CargaDeTarea();

int main()
{

    //Nodo *ListaPendientes = CrearListaVacia(); // creo lista de tareas pendientes

    //Nodo *ListaRealizadas = CrearListaVacia(); // creo lista de tareas realizadas
            
    return 0;
}

/*Nodo *CrearNodo()
{
    
}*/

Nodo *CrearListaVacia()
{
    return NULL;
}

Tarea CargaDeTarea()
{
    Tarea aux;
    char descrip[50];
    printf("\t ----CARGA DE TAREAS---- \n");
    printf("Ingrese una descripcion: \n");
    fflush(stdin);
    scanf("%s", descrip);
    aux.Descripcion = (char *)malloc(sizeof(char) * strlen(descrip) + 1);
    strcpy(aux.Descripcion, descrip);
    printf("Ingrese un ID: \n");
    scanf("%d", &aux.TareaID);
    printf("Ingrese una duracion: \n");
    scanf("%d", &aux.Duracion);
    return aux;
}