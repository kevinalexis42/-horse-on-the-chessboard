#include <iostream>
#include <stdio.h>
#include "Tablero.h"

#define N 5
#define ncuad N*N

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int tablero[N][N]; /* tablero del caballo. */
  	int i,j,q;

   /* inicializa el tablero a cero */
  for (i = 0; i < N; i++)
   for (j = 0; j < N; j++)
    tablero[i][j] = 0;

   
  tablero[0][0] = 1;
  mover(tablero,2,0,0,&q);

  if (q) { 
    for (i = 0; i < N; i++) {
      for (j = 0; j < N; j++)
        printf("%3d ", tablero[i][j]);
      putchar('\n');
    }
  }
  else
    printf("\nNo existe solucion\n");

  return 0;
}
