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
#include <math.h>

int main(int argc, char **argv)
{
    long int tam_bloque = 0;
    long int tam_direccion = 0;
    long int direccionable = 0;
    long int bloques = 0;
    long int memoria = 0;
    int i = 0;

    if (argc < 2) {
        printf("Falta el tamaño de bloque.\n");
        printf("Forma de uso: ./tabla tam_bloque\n");
        exit(0);
    }
    tam_bloque = atoi(argv[1]);
    tam_direccion = ceil(log(tam_bloque) / log(2)); // bits para direccionar
    tam_direccion /= 8; // Bytes para direccionar
    if (tam_direccion % 8 != 0)
        tam_direccion++;
    direccionable = tam_bloque / tam_direccion;
    printf("Tipo dir. \tRango bloques \tRango bytes \tTotal bytes\n");
    for (i = 0; i < 10; i++) {
        printf("Directa %d: \t%ld \t\t%ld..%ld \t1\n",
                i,
                bloques,
                memoria,
                tam_bloque * (i + 1) - 1);
        bloques++;
        memoria += tam_bloque;
    }
    printf("Indirecta: \t%ld..%ld \t\t%ld..%ld \t%ld\n",
            bloques,
            bloques + direccionable,
            memoria,
            memoria + direccionable * tam_bloque - 1,
            direccionable);
    bloques += direccionable;
    memoria += direccionable * tam_bloque;
    printf("Indirecta 2: \t%ld..%ld \t\t%ld..%ld \t%ld\n",
            bloques + 1,
            bloques  + direccionable * direccionable,
            memoria,
            memoria + (long) pow(direccionable, 2) * tam_bloque - 1,
            direccionable * direccionable);
    bloques += direccionable * direccionable;
    memoria += direccionable * direccionable * tam_bloque;
    printf("Indirecta 3: \t%ld..%ld \t\t%ld..%ld \t%ld\n",
            bloques + 1,
            bloques  + (long) pow(direccionable, 3),
            memoria,
            memoria + (long) pow(direccionable, 3) * tam_bloque -1,
            (long) pow(direccionable, 3));
    return 0;
}
