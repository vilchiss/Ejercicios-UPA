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
#include "complejo.h"

complejo leer_complejo()
{
    complejo c;

    printf("Real: ");
    scanf("%f", &c.r);
    printf("Imaginario: ");
    scanf("%f", &c.i);

    return c;
}

void escribir_complejo(complejo c)
{
    printf("%.1f", c.r);
    if (c.i < 0)
        printf("  "); // Pone el signo '-' cuando es negativo
    else
        printf(" + ");
    printf("%.1fi", c.i);
}

complejo csum(complejo a, complejo b)
{
    complejo resultado;

    resultado.r = a.r + b.r;
    resultado.i = a.i + b.i;

    return resultado;
}

complejo cmul(complejo a, complejo b)
{
    complejo resultado;

    resultado.r = (a.r * b.r) - (a.i * b.i);
    resultado.i = (a.r * b.i) + (a.i * b.r);

    return resultado;
}
