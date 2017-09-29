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

#ifndef _COMPLEJO_H_
#define _COMPLEJO_H_

/* Definición de los datos */
typedef struct {
    float r, i;
} complejo;

/* Prototipos de las funciones */
complejo leer_complejo(void);
void escribir_complejo(complejo c);
complejo csum(complejo a, complejo b); // Devuele a+b
complejo cmul(complejo a, complejo b); // Devuelve a*b

#endif
