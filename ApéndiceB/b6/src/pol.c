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
#include <pol.h>

int main(int argc, char **argv) {
	POLINOMIO p, q;
	int grado;

	// Lectura de  los polinomios
	printf("Grado del primer polinomio: ");
	scanf("%d", &grado);
	printf("Coeficientes del primer polinomio.\n");
	p = leer_polinomio(grado);
	printf("Grado del segundo polinomio: ");
	scanf("%d", &grado);
	printf("Coeficientes del segundo polinomio.\n");
	q = leer_polinomio(grado);

	// Operaciones con los polinomios
	printf("Resultado de la suma.\n");
	escribir_polinomio(
		simplificar_polinomio(sumar_polinomios(p, q)));
	printf("\n");
	printf("Resultado de la multiplicación\n");
	escribir_polinomio(
		simplificar_polinomio(multiplicar_polinomios(p, q)));
	printf("\n");

	return 0;
}
