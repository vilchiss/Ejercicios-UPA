*   ##### Ejercicio 2.9
    El fichero de dispositivo **/dev/tty** representa el terminal que da
    servicio a cada usuario del sistema UNIX. Con la función estándar
    **fopen** podemos abrir este fichero y asociarle un flujo para manejarlo
    desde un programa. Escriba un programa que:

    (a) Declare un array de seis flujos  &mdash;**FILE \*f[6];** &mdash;  
    (b) Abra el fichero **/dev/tty** tres veces en modo lectura y le asocie los
    primeros tres flujos del array.  
    (c) Abra el fichero **/dev/tty** tres veces en modo escritura y le asocie
    los tres últimos flujos del array.  
    (d) Escriba en el fichero estándar de salida el descriptor asociado a cada
    uno de los flujos anteriores.  
    (e) Usando la función **fprintf** escriba sobre cada uno de los flujos de
    salida el mensaje:  
    **Mensaje dirigido al flujo nro. #**  
    donde **#** debe ser sustituido por el número del flujo &mdash;posición que
    ocupa en el array&mdash;.

    Para compilar y ejecutar:  

        $ gcc eje2_9.c -o eje2_9  
        $ ./eje2_9


*   ##### Ejercicio 2.31
    Escriba un programa que reciba a  través de la línea de órdenes un número
    entero que representa el tamaño del bloque de un sistema de ficheros. El
    programa debe generar una tabla con los rangos de representación de cada
    una de las entradas de direcciones de un nodo-i.

    Para compilar y ejecutar:  

        $ gcc eje2_31.c -o eje2_31  
        $ ./eje2_31  
