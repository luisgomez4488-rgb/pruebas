int tablero[5][5];
int fila, columna;
// Inicializar tablero
for(int i = 0; i < 5; i++) {
for(int j = 0; j < 5; j++) {
tablero[i][j] = 0;
}
}
// Colocar barcos manualmente
tablero[1][2] = 1;
tablero[3][4] = 1;
tablero[0][0] = 1;
// Mostrar tablero inicial
for(int i = 0; i < 5; i++) {
for(int j = 0; j < 5; j++) {
printf("~ ");
}
    printf("\n");
}
// Pedir disparo
printf("Fila: ");
scanf("%d", &fila);

printf("Columna: ");
scanf("%d", &columna);
// AQUÍ DEBES COMPLETAR:
// evaluar si hay barco o agua

    if(           )
