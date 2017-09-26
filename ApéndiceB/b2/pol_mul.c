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

POLINOMIO multiplicar_polinomios(POLINOMIO p, POLINOMIO q)
{
	POLINOMIO resultado;
	int i = 0, j = 0;

	resultado = crear_polinomio(p.grado + q.grado);
	for (i = 0; i <= p.grado; i++) {
		for (j = 0; j <= q.grado; j++) {
			resultado.coef[i+j] += q.coef[j] * p.coef[i];
		}
	}

	return resultado;
}
