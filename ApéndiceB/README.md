## Ejercicios del Apéndice B

*   ##### B.1  
    Escriba un programa para manipular polinomios simbólicamente. Los
    módulos que compondrán este programa son los descritos en el &sect;
    B.5 pág. 516 y las funciones de cada módulo serán también las
    descritas en ese apartado. Con objeto de no mezclar ficheros de
    distintas aplicaciones re recomienda crear un directorio de nombre
    ***polinomios*** donde residdirán los módulos de la aplicación que se va
    a crear.

*   ##### B.2
    Cree una biblioteca con nombre ***pol.a*** a partir de los módulos de la
    aplicación ***polinomios***. Con objeto de mejorar la gestión de la
    biblioteca vamos a dividir el módulo ***pol_es.c*** en tres y
    ***pol_arit.c***. Así, la nueva composición de la aplicación será la
    siguiente:

    * **pol_lee.c**, módulo donde se implementa la función **leer_polinomio**.
    * **pol_esc.c**, módulo donde se implementa la función
      **escribir_polinomio**.
    * **pol_cre.c**, módulo donde se implementa la función
      **crear_polinomio**.
    * **pol_mul.c**, módulo donde se implementa la función
      **multiplicar_polinomios**.
    * **pol_sum.c**, módulo donde se implementa la función
      **sumar_polinomios**.
    * **pol_sim.c**, módulo donde se implementa la funciónm
      **simplificar_polinomio**.
    * **pol.c**, módulo donde se implementa la función **main**.

    La biblioteca ***pol.a*** estará compuesta por los módulos
    ***pol_leer.o***, ***pol_esc.o***, ***pol_cre.o***, ***pol_mul.o***,
    ***pol_sum.o*** y ***pol_sim.o***. Una vez creada la biblioteca se le debe
    añadir un índice de símbolos.

*   ##### B.3
    Recompile la aplicación ***pol*** utilizando la biblioteca creada en el
    ejercicio anterior.

*   ##### B.4
    Utilizando la orden **nm** visualice los símbolos que hay en el índice
    de la biblioteca ***libpol.a***.

*   ##### B.5
    Utilizando la orden **nm** visualice los símbolos y sus direcciones
    asociadas que hay en el programa ***pol***.

*   ##### B.6
    Distribuya los programas de la aplicación polinomios en una estructura de
    directorios como la descrita en la figura B.4. En esta figura no está
    contemplado que el estado actual de la aplicación es distinto, ya que en
    ejercicios anteriores se han generado seis módulos a partir de los módulos
    **pol_es.c** y **pol_arit.c**. Para realizar este ejercicio se debe tener
    en cuenta el estado actual de desarrollo de la aplicación.  
    Una vez que se hayan distribuido los ficheros con el código fuente, se
    deben borrar los ficheros objeto, la biblioteca y el fichero ejecutable.  
    A continuación se deben emitir las órdenes necesarias para recompilar los
    módulos fuente, generar la biblioteca **lib_pol.a** y el programa
    ejecutable **pol** y situarlos en sus directorios correspondientes.

*   ##### B.7
    Escriba un fichero **Makefile** en el directorio del árbol dedicado a la
    aplicación polinomios. El objeto de este fichero es poder compilar la
    aplicación con la orden **make**. Hay que tener presente que, de acuerdo
    con los ejercicios anteriores, la forma de la aplicación es ligeramente
    distinta a la descrita en los ejemplos de esta documentación. Una vez
    escrito **Makefile**, compile la aplicación.

*   ##### B.8
    Añada al programa **Makefile** un objetivos para limpiar los directorios
    de la aplicación. El nombre de este objetivo será **limpiar**, y al ejecutar
    la orden **make** debe encargarse de borrar los módulos objeto.
