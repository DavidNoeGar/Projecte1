#include <stdio.h>
#include <conio.h>

#include "lista.h"

void anadirElemento(LlistaBidOr *l) {
	int e = 1;

	printf("Elemento a anadir: ");
	do{
		LLISTABIDOR_insereixOrdenat(l, e);
		e = e++;
	}while (e<10)
	printf("Elemento %d anadido correctamente.\n", e);
}

void quitarElemento(LlistaBidOr *l) {
	if (!LLISTABIDOR_buida(*l) && !LLISTABIDOR_final(*l)) {
		LLISTABIDOR_esborra(l);
		printf("Se ha eliminado un elemento de la lista.\n");
	} else {
		printf("Error, la lista esta vacia.\n");
	}
}

void mostrar(LlistaBidOr l) {
	int e;
	if (!LLISTABIDOR_buida(l) && !LLISTABIDOR_final(l)) {
		LLISTABIDOR_consulta(l, &e);
		printf("El elemento es el %d.\n", e);
	} else {
		printf("La lista esta vacia o estas en el final.\n");
	}
}
void mostrarMenu(LlistaBidOr *l) {

	printf("\tAñadimos elementos (Añadimos del 1 al 10)\n");
	anadirElemento(l);
	printf("\tAvanzamos\n");
	if (LLISTABIDOR_final(*l)) {
		printf("No podemos avanzar, estamos en el final.\n");
	} else {
		LLISTABIDOR_avanca(l);
		printf("¡Hemos avanzado!\n");
	}
	printf("\tQuitamos elemento\n");
	quitarElemento(l);
	printf("\tMostramos elemento actual\n");
	mostrar(*l);
	printf("\tAvanzamos\n");
	if (LLISTABIDOR_final(*l)) {
		printf("No podemos avanzar, estamos en el final.\n");
	} else {
		LLISTABIDOR_avanca(l);
		printf("¡Hemos avanzado!\n");
	}
	printf("\tVamos inicio\n");
	LLISTABIDOR_vesInici(l);
	printf("¡Estem a l'inici!\n");
	printf("\t¿Está Vacia?\n");
	if (LLISTABIDOR_buida(*l)) {
		printf("¡La lista esta vacia!\n");
	}
	else {
		printf("¡La lista NO esta vacia!\n");
	}
	printf("\t¿Estamos en en final?\n");
	if (LLISTABIDOR_final(*l)) {
		printf("¡La lista ha llegado al final!\n");
	}
	else {
		printf("¡La lista aun no ha llegado al final!\n");
	}
	printf("\tQuitamos elemento\n");
	quitarElemento(l);
	printf("\tAvanzamos\n");
	if (LLISTABIDOR_final(*l)) {
		printf("No podemos avanzar, estamos en el final.\n");
	} else {
		LLISTABIDOR_avanca(l);
		printf("¡Hemos avanzado!\n");
	}
}
