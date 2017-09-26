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

POLINOMIO sumar_polinomios(POLINOMIO p, POLINOMIO q)
{
	POLINOMIO resultado;
	int grado_mayor = 0, grado_menor = 0;
	int i = 0;

	grado_mayor = obtener_grado_mayor(p, q);
	grado_menor = obtener_grado_menor(p, q);
	resultado = crear_polinomio(grado_mayor);
	for (i = 0; i <= grado_mayor; i++) {
		if (i <= grado_menor)
			resultado.coef[i] = p.coef[i] + q.coef[i];
		else if (p.grado > q.grado)
			resultado.coef[i] = p.coef[i];
		else
			resultado.coef[i] = q.coef[i];
	}

	return resultado;
}


int obtener_grado_mayor(POLINOMIO p, POLINOMIO q)
{
	return (p.grado >= q.grado) ? p.grado : q.grado;
}

int obtener_grado_menor(POLINOMIO p, POLINOMIO q)
{
	return (p.grado <= q.grado) ? p.grado : q.grado;
}
