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

#ifndef _POL_H_
#define _POL_H_

// Constantes
#define DELTA_ERROR_FLOAT 1e-9 // Para considerar un float como cero

// Definición de los datos

typedef struct {
	int grado;
	float *coef;
} POLINOMIO;

// Prototipo de las funciones

POLINOMIO crear_polinomio (int grado);
POLINOMIO leer_polinomio (int grado);
void escribir_polinomio (POLINOMIO p);
POLINOMIO multiplicar_polinomios (POLINOMIO p, POLINOMIO q);
POLINOMIO sumar_polinomios (POLINOMIO p, POLINOMIO q);
POLINOMIO simplificar_polinomio (POLINOMIO p);
int obtener_grado_mayor(POLINOMIO p, POLINOMIO q);
int obtener_grado_menor(POLINOMIO p, POLINOMIO q);

#endif // _POL_H_
