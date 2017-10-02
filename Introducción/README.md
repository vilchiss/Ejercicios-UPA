*	##### Ejercicio 1.1
	Escribir un programa que presente en el archivo estándar de salida una lista
	con todos los códigos de error que manejan las llamadas al sistema UNIX.
	Por cada código de aparecer su número y la cadena descriptiva que el
	sistema le asocia.

*	##### Ejercicio 1.2
 	Escribir una función de tratamiento genérico de errores para ser utilizada
	en los programas que se van a escribir en capítulos posteriores. La
	interfaz de esta función debe de ser:

	**void error (char \*nfichero, int nro_linea, char \*mensaje);**
	* **nfichero** es el nombre del fichero desde donde se ha llamado a la
		función. (Se puede obtener con la constante **\__FILE__** del
		preprocesador)
	* **nro_linea** es el número de la línea desde donde se ha llamado a la
		función. (Se puede obtener con la constante **\__LINE__** del
		preprocesador)
	* **mensaje** es una cadena de caracteres que contiene un mensaje escrito
		por el usuario.
