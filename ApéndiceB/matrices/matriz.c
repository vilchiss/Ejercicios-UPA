/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * @Autor: Oropeza Vilchis Luis Alberto <vilchissfi@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

matriz leer_matriz()
{
    matriz m;
    int i = 0, j = 0;

    printf("Datos de la matriz\n");
    printf("Filas: ");
    scanf("%d", &m.filas);
    printf("Columnas: ");
    scanf("%d", &m.columnas);
    m = crear_matriz(m.filas, m.columnas);
    for (i = 0; i < m.filas; i++) {
        for (j = 0; j < m.columnas; j++) {
            printf("Dato[%d][%d]\n", i, j);
            m.coef[i][j] = leer_complejo();
        }
    }

    return m;
}

matriz crear_matriz(int filas, int columnas)
{
    matriz m;
    int i = 0;

    m.filas = filas;
    m.columnas = columnas;
    m.coef = (complejo**) malloc(filas * sizeof(complejo*));
    for (i = 0; i < filas; i++)
        m.coef[i] = (complejo *) malloc(columnas * sizeof(complejo));

    return m;
}

void destruir_matriz(matriz m)
{
    int i = 0;

    for (i = 0; i < m.filas; i++)
        free(m.coef[i]);
    free(m.coef);
    m.filas = 0;
    m.columnas = 0;
}

void escribir_matriz(matriz m)
{
    int i = 0, j = 0;

    for (i = 0; i < m.filas; i++) {
        for (j = 0; j < m.columnas; j++) {
            escribir_complejo(m.coef[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}

matriz sumar_matrices(matriz a, matriz b)
{
    matriz resultado;
    int i = 0, j = 0;

    if (!(a.filas == b.filas && a.columnas == b.columnas)) {
        printf("Error al sumar matrices. No son del mismo orden.\n");
        exit(EXIT_FAILURE);
    }
    resultado = crear_matriz(a.filas, a.columnas);
    for (i = 0; i < a.filas; i++)
        for (j = 0; j < a.columnas; j++)
            resultado.coef[i][j] = csum(a.coef[i][j], b.coef[i][j]);

    return resultado;
}

matriz multiplicar_matrices(matriz a, matriz b)
{
    matriz resultado;
    int i = 0, j = 0, n = 0;

    if (!(a.columnas == b.filas)) {
        printf("Error al multiplicar matrices. El orden no es compatible.\n");
        exit(EXIT_FAILURE);
    }
    resultado = crear_matriz(a.filas, b.columnas);
    for (i = 0; i < a.filas; i++)
        for (j = 0; j < b.columnas; j++)
            for (n = 0; n < a.columnas; n++)
                resultado.coef[i][j] = csum(resultado.coef[i][j],
                                       cmul(a.coef[i][n], b.coef[n][j]));

    return resultado;
}
