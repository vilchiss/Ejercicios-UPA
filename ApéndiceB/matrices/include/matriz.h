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
 
#ifndef _MATRIZ_H_
#define _MATRIZ_H_
#include "complejo.h"

/* Definición de los datos */
typedef struct {
    int filas, columnas;
    complejo **coef;
}matriz;

/* Prototipos de las funciones */
matriz leer_matriz(void);
void escribir_matriz(matriz m);
matriz sumar_matrices(matriz a, matriz b); // Devuelve a+b
matriz multiplicar_matrices(matriz a, matriz b); // Devuelve a*b
matriz crear_matriz(int filas, int columnas); // Pide memoria para coeficientes
void destruir_matriz(matriz m); // Libera memoria de los coeficientes

#endif
