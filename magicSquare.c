#include <stdio.h>
#include "magicSquare.h"

int cuadradoMagico(int filas, int columnas, int cuadrado[filas][columnas]) {
    int constantemagica = calcularConstanteMagica(filas, columnas, cuadrado[filas][columnas]);
    for (int i = 1; i < filas; i++) {
        int suma = 0;
        int sumadefilas= 0;
        int sumadecolumnas = 0;
        for (int j = 0; j < columnas; j++) {
            sumadefilas += cuadrado[i][j];
            sumadecolumnas += cuadrado[j][i];
        }
        if (sumadefilas != constantemagica || sumadecolumnas != constantemagica)
        {
            return 0;
        }
        
    }
    for (int j = 0; j < filas; j++) {
        int suma = 0;
        for (int i = 0; i < columnas; i++) {
            suma += cuadrado[i][j];
        }
        if (suma != constantemagica)
        {
            return 0;
        }
        
    }
    return 1;
}

int calcularConstanteMagica(int filas, int columnas, int cuadrado[filas][columnas]) {
    int sumadiagonal;
    for (int i = 0; i < filas; i++)
    {
        sumadiagonal += cuadrado[i][0];
    }
    return sumadiagonal;
}

void imprimirCuadrado(int filas, int columnas, int cuadrado[filas][columnas]) {
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; i < columnas; j++)
        {
            printf(" %d ", cuadrado[i][j]);
        }
       printf("\n");
    }
    
}