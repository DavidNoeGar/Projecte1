#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "llista.h"

void anadirElemento(LlistaBidOr *l) {
	int e;
	printf("\tInserint els nombres del 0 al 10\n\n");
	for (e = 0; e<=10; e++){
		LLISTABIDOR_insereixOrdenat(l, e);
	}
	printf("Elementos anadidos correctamente.\n");
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
	int e = 0;
	if (!LLISTABIDOR_buida(l) && !LLISTABIDOR_final(l)) {
		e = LLISTABIDOR_consulta(l);
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
int main() {
	LlistaBidOr l;

	LLISTABIDOR_crea(&l);

	mostrarMenu(&l);

	LLISTABIDOR_destrueixl(&l);
}
