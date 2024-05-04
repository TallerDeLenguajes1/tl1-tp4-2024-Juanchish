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
    Nodo *Siguiente; // puntero al siguiente
} Nodo;

Nodo *CrearNodo(); // funcion para crear nodo

Nodo *CrearListaVacia(); // funcion para crear una lista vacia

Tarea crearTarea(); // funcion para cargar datos de una tarea, retorna tarea


int main()
{

    //Nodo *ListaPendientes = CrearListaVacia(); // creo lista de tareas pendientes

    //Nodo *ListaRealizadas = CrearListaVacia(); // creo lista de tareas realizadas

    return 0;
}

Nodo *CrearNodo()
{
    Nodo *Nnodo = (Nodo *)malloc(sizeof(Nodo));
    Nnodo->T = crearTarea();
    Nnodo->Siguiente = NULL;
    return Nnodo;
}

Nodo *CrearListaVacia()
{
    return NULL;
}

Tarea crearTarea()
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


void insertarNodo(Nodo **Start, Nodo *nuevoNodo);
void insertarNodo(Nodo **Start, Nodo *nuevoNodo)
{
    nuevoNodo->Siguiente = *Start;
    *Start = nuevoNodo;
}