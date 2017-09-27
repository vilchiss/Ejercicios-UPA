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

#include "pol.h"
#include <math.h>

POLINOMIO simplificar_polinomio(POLINOMIO p)
{
	POLINOMIO r;
	int i = 0, contador = 0;

	for (i = p.grado; i >= 0; i--) {
		if (fabsf(p.coef[i]) < DELTA_ERROR_FLOAT)
			contador++;
		else
			break;
	}
	r = crear_polinomio(p.grado - contador);
	for (i = 0; i <= r.grado; i++)
		r.coef[i] = p.coef[i];

	return r;
}
