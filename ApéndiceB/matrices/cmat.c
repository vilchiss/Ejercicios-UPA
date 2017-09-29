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

// Función main para probar la biblioteca
#include <stdio.h>
#include "matriz.h"

int main(int argc, char **argv)
{
    matriz a, b;

    printf("***** Multiplicación *****\n");
    a = leer_matriz();
    b = leer_matriz();
    printf("\nResultado: \n");
    escribir_matriz(multiplicar_matrices(a, b));
    destruir_matriz(a);
    destruir_matriz(b);
    printf("\n***** Suma *****\n");
    a = leer_matriz();
    b = leer_matriz();
    printf("\nResultado: \n");
    escribir_matriz(sumar_matrices(a, b));
    destruir_matriz(a);
    destruir_matriz(b);

    return 0;
}
