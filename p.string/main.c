#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()

{
    char alumno1 [16] ="antonio";
    printf("%s", alumno1);
    char alumno2 [16] ="jose";
    printf("%s", alumno2);

    //lista de alumnos//
    char alumnos [5][16];
     printf("ingrese los nombres:");
    fgets(alumnos,sizeof(alumnos),stdin);
    printf("%s",alumnos);








    return 0;
}
