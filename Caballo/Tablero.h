#include <stdio.h>

#define N 5
#define ncuad N*N


void mover(int tablero[][N],int i, int pos_x, int pos_y)
const int ejex[8] = { -1,-2,-2,-1, 1, 2, 2, 1 },
          ejey[8] = { -2,-1, 1, 2, 2, 1,-1,-2 };
          
          


void mover(int tablero[][N],int i, int pos_x, int pos_y)
{
  int k, u, v;

  for (k = 0; k < 8; k++) {
    u = pos_x + ejex[k]; v = pos_y + ejey[k];
    if (u >= 0 && u < N && v >= 0 && v < N) { /* esta dentro de los limites */
      if (tablero[u][v] == 0) {
        tablero[u][v] = i;  
        if (i < ncuad)   
          mover(tablero,i+1,u,v);
        else imprimir_solucion(tablero);
        tablero[u][v] = 0;  
      }
    }
  }
}
