Algoritmo calculadora
	Definir numero1, numero2, opcionMenu Como Entero
	opcionMenu <- 0
	Mientras opcionMenu<>5 Hacer
		Escribir 'Que desea hacer?'
		Escribir '1. Sumar, 2.Restar, 3.Multiplicar, 4.Dividir, 5. Salir del programa'
		Leer opcionMenu
		Si opcionMenu>=1 Y opcionMenu<=4 Entonces
			Escribir 'Ingresar un número'
			Leer numero1
			Escribir 'Ingresar otro número'
			Leer numero2
			Si opcionMenu=1 Entonces
				Escribir 'Usted ha sumado ', numero1, ' y ', numero2, ' su resultado es ', numero1+numero2
			SiNo
				Si opcionMenu=2 Entonces
					Escribir 'Usted ha restado ', numero1, ' y ', numero2, ' su resultado es ', numero1-numero2
				SiNo
					Si opcionMenu=3 Entonces
						Escribir 'Usted ha multiplicado ', numero1, ' y ', numero2, ' su resultado es ', numero1*numero2
					SiNo
						Si opcionMenu=4 Entonces
							Si numero2=0 Entonces
								Escribir 'Error, no se puede dividir por cero'
							SiNo
								Escribir 'Usted ha dividido ', numero1, ' y ', numero2, ' su resultado es ', numero1/numero2
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
		SiNo
			Si opcionMenu<>5 Entonces
				Escribir 'Opción no válida, intenta de nuevo.'
			FinSi
		FinSi
	FinMientras
	Escribir 'Saliendo del programa.'
FinAlgoritmo
