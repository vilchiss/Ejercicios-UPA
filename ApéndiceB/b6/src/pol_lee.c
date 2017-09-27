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
#include "pol.h"

POLINOMIO leer_polinomio(int grado)
{
	POLINOMIO p;
	int i = 0;

	p = crear_polinomio(grado);
	for (i = 0; i <= grado; i++) {
		printf("Coeficiente x^%d = ", i);
		scanf("%f", &p.coef[i]);
	}

	return p;
}
