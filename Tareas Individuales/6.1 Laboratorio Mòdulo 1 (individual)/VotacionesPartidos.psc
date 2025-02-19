Algoritmo VotacionesPartidos
	Definir VOTOS_AFILIADOS, RONDAS Como Entero
	VOTOS_AFILIADOS <- 50
	RONDAS <- 5
	Definir opcion Como Cadena
	Definir numeroCandidatos, i, j, ronda, voto, candidato, maxVotos, minVotos, indiceGanador, indicePerdedor Como Entero
	Definir nombresCandidatos Como Cadena
	Definir conteoVotos Como Entero
	Definir repeticion Como Lógico
	repeticion <- Verdadero
	Mientras repeticion Hacer
		Escribir 'Ingrese cantidad de candidatos: '
		Leer numeroCandidatos
		Dimensionar nombresCandidatos(numeroCandidatos)
		Dimensionar conteoVotos(numeroCandidatos,RONDAS)
		// Inicializar matriz de votos
		Para i<-1 Hasta numeroCandidatos Hacer
			Para j<-1 Hasta RONDAS Hacer
				conteoVotos[i,j]<-0
			FinPara
		FinPara
		Escribir 'Ingrese los nombres de los candidatos:'
		Para i<-1 Hasta numeroCandidatos Hacer
			Escribir 'Candidato ', i, ': '
			Leer nombresCandidatos[i]
		FinPara
		// Simular rondas de votación
		Para ronda<-1 Hasta RONDAS Hacer
			Para voto<-1 Hasta VOTOS_AFILIADOS Hacer
				candidato <- Azar(numeroCandidatos)+1
				conteoVotos[candidato,ronda]<-conteoVotos[candidato,ronda]+1 // Genera número entre 1 y numeroCandidatos
			FinPara
		FinPara
		// Mostrar resultados
		Escribir 'Resultados de la votación:'
		Escribir 'Candidato   Ronda 1   Ronda 2   Ronda 3   Ronda 4   Ronda 5'
		Escribir '------------------------------------------------------------'
		Para i<-1 Hasta numeroCandidatos Hacer
			Escribir nombresCandidatos[i], '   'Sin Saltar
			Para ronda<-1 Hasta RONDAS Hacer
				Escribir conteoVotos[i,ronda], '       'Sin Saltar
			FinPara
			Escribir ''
		FinPara
		// Calcular totales
		Dimensionar totalVotos(numeroCandidatos)
		Para i<-1 Hasta numeroCandidatos Hacer
			totalVotos[i] <- 0
			Para ronda<-1 Hasta RONDAS Hacer
				totalVotos[i] <- totalVotos[i]+conteoVotos[i,ronda]
			FinPara
		FinPara
		// Determinar ganador y perdedor
		maxVotos <- totalVotos[1]
		minVotos <- totalVotos[1]
		indiceGanador <- 1
		indicePerdedor <- 1
		Para i<-2 Hasta numeroCandidatos Hacer
			Si totalVotos[i]>maxVotos Entonces
				maxVotos <- totalVotos[i]
				indiceGanador <- i
			FinSi
			Si totalVotos[i]<minVotos Entonces
				minVotos <- totalVotos[i]
				indicePerdedor <- i
			FinSi
		FinPara
		Escribir 'El ganador es: ', nombresCandidatos[indiceGanador], ' con ', maxVotos, ' votos'
		Escribir 'El perdedor es: ', nombresCandidatos[indicePerdedor], ' con ', minVotos, ' votos'
		Escribir '¿Repetir proceso? (S/N)'
		Leer opcion
		repeticion <- (Mayusculas(opcion)='S')
	FinMientras
FinAlgoritmo
