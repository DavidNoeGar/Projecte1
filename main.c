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
