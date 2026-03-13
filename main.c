#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char alumno1[16];
    char alumno2[16];
    char jugadores[3][20];
    int i, longuitud;
    char lista [5][6];


    //Ejemplo 1 utilizando scanf
    printf("\nIngrese el nombre del alumno 1:\n");
    scanf("%15s", alumno1);
    printf("%s\n", alumno1);

    printf("\nIngrese el nombre del alumno 2:\n");
    scanf("%15s", alumno2);
    printf("%s\n", alumno2);

    getchar(); // limpiar el buffer antes de fgets

    //Ejemplo 2 usando fgets

    printf("\nIngrese nuevamente el nombre del alumno 2:\n");
    fgets(alumno2, sizeof(alumno2), stdin);
    alumno2[strcspn(alumno2, "\n")] = '\0';
    printf("%s\n", alumno2);

    //Ejemplo 3 usando arreglos de caracteres


    for (i=0; i<3; i++)
    {
        printf("\n Ingrese el nombre  de los jugadores: %d", i+1);
        fgets(jugadores[i], sizeof(jugadores[i]), stdin);

        jugadores[i][strcspn(jugadores[i], "\n")] = 0;
    }
    printf("\nLista final de jugadores:");

    for (int i = 0; i < 3; i++) {
        int longitud = strlen(jugadores[i]);
        printf("\nJugador %d: %s (longitud: %d)", i + 1, jugadores[i], longitud);
    }

    return 0;


}
