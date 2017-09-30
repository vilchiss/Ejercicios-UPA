## Ejercicios del Apéndice B

*   ##### B.1  
    Escriba un programa para manipular polinomios simbólicamente. Los
    módulos que compondrán este programa son los descritos en el &sect;
    B.5 pág. 516 y las funciones de cada módulo serán también las
    descritas en ese apartado. Con objeto de no mezclar ficheros de
    distintas aplicaciones re recomienda crear un directorio de nombre
    **polinomios** donde residirán los módulos de la aplicación que se va
    a crear.

*   ##### B.2
    Cree una biblioteca con nombre **pol.a** a partir de los módulos de la
    aplicación **polinomios**. Con objeto de mejorar la gestión de la
    biblioteca vamos a dividir el módulo **pol_es.c** en tres y
    **pol_arit.c**. Así, la nueva composición de la aplicación será la
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

    La biblioteca **pol.a** estará compuesta por los módulos
    **pol_leer.o**, **pol_esc.o**, **pol_cre.o**, **pol_mul.o**,
    **pol_sum.o** y **pol_sim.o**. Una vez creada la biblioteca se le debe
    añadir un índice de símbolos.

*   ##### B.3
    Recompile la aplicación **pol** utilizando la biblioteca creada en el
    ejercicio anterior.

*   ##### B.4
    Utilizando la orden **nm** visualice los símbolos que hay en el índice
    de la biblioteca **libpol.a**.

*   ##### B.5
    Utilizando la orden **nm** visualice los símbolos y sus direcciones
    asociadas que hay en el programa **pol**.

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
    Borre el fichero libpol.a de la aplicación polinomios y recompile la
    aplicación con la orden **make**. ¿Qué ordenes ha generado **make**
    para recompilar la aplicación?

*   ##### B.9
    Añada al programa **Makefile** un objetivo para limpiar los directorios
    de la aplicación. El nombre de este objetivo será **limpiar**, y al ejecutar
    la orden **make** debe encargarse de borrar los módulos objeto.

*   ##### B.10
    Cree en el directorio polinomios el directorio **doc** que estará dedicado
    a contener documentación sobre la aplicación polinomios.  
    Escriba una página del manual para documentar la función
    **escribir_polinomio** que forma parte de la biblioteca **libpol.a**.  
    Modifique la variable de entorno **MANPATH** para que el programa man pueda
    encontrar las páginas del manual que hay en el directorio
    **$HOME/polinomios/doc**.

*   ##### B.11
    Este ejercicio y los siguientes tienen como objetivo la repetición de todos
    los pasos necesarios para crear una aplicación compuesta por varios
    ficheros. El resultado final de la aplicación será un programa que podrá
    realizar operaciones básicas con matrices de números complejos.  
    La aplicación debe residir en el directorio **matrices**. Aquí se creará
    una jerarquía de subdirectorios como la descrita en los ejemplos:

    * **src** para los ficheros fuente
    * **include** para los ficheros de cabecera
    * **lib** para la biblioteca libmat.a
    * **bin** para el programa ejecutable **cmat** y
    * **doc** para la documentación.

    Los módulos fuente que componen a la aplicación son: **complejo.h**,
    **matriz.h**, **complejo.c**, **matriz.c** y **cmat.c**.

*   ##### B.12
    Para llevar a cabo la compilación de la aplicación, habrá que escribir un
    fichero **Makefile** que tenga en cuenta las relaciones que existen entre
    todo los módulos, incluidos los ficheros de cabecera, así como la
    distribución de los mismos en los directorios que se han indicado en el
    ejercicio anterior. Hay que tener en cuenta que los módulos **complejo.o**
    y **matriz.o** se deben utilizar para crear la biblioteca **libmat.a**.
    El programa **cmat** debe ser enlazado con la biblioteca **libmat.a** y no
    con los módulos **complejo.o** y **matriz.o**. Una vez escrito el fichero
    **Makefile** compile la aplicación.

*   ##### B.13
    Genere una páginal del manual donde se explique la interfaz y forma de uso
    de la función **multiplicar_matrices**. Añada el directorio **matrices/doc**
    a la ruta de búsqueda del programa **man** y compruebe que se puede hacer la
    consulta.
