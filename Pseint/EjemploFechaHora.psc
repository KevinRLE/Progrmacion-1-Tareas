//Revisor: Kevin Rodrigo López Espinoza 9959-24-3309
Algoritmo EjemploFechaHora
	fa <- FechaActual()
	anio <- trunc(fa/10000) // retorna un solo nro entero en formato AAAAMMDD
	mes <- trunc(fa/100) MOD 100
	dia <- fa MOD 100
	Mientras Verdadero Hacer
		Limpiar Pantalla
		Escribir 'Fecha actual: ', dia, '/', mes, '/', anio
		ha <- HoraActual()
		hora <- trunc(ha/10000) // retorna un solo nro entero en formato HHMMSS
		min <- trunc(ha/100) MOD 100
		seg <- ha MOD 100
		Escribir 'Hora Actual: ', hora, ':', min, ':', seg
		Esperar 1 Segundos
	FinMientras
FinAlgoritmo
