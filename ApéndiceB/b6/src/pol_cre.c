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
#include "pol.h"

POLINOMIO crear_polinomio(int grado)
{
	POLINOMIO p;
	p.grado = grado;

	p.coef = (float *) malloc(++grado * sizeof(float)); // grado+1 por x^0
	if (!p.coef) {
		perror("Error en crear_polinomio(). No se obtuvo memoria.");
		exit(EXIT_FAILURE);
	}

	return p;
}
