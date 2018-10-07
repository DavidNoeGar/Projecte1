#include <stdio.h>
#include <stdlib.h>

#ifndef	 _LLISTABI_H_
#define _LLISTABI_H_
#endif

typedef struct N {
	int e;
	struct N *seg;
	struct N *ant;
} NodeBi;

typedef struct {
  NodeBi *pri;
  NodeBi *ult;
  NodeBi *pdi;
} LlistaBidOr;

LlistaBidOr LLISTABIDOR_crea();
void LLISTABIDOR_insereixOrdenat (LlistaBidOr *l, int e);
int LLISTABIDOR_consulta (LlistaBidOr l);
void LLISTABIDOR_esborra (LlistaBidOr *l);
void LLISTABIDOR_avanca (LlistaBidOr *l);
void LLISTABIDOR_retocedeix (LlistaBidOr *l);
int LLISTABIDOR_buida (LlistaBidOr l);
void LLISTABIDOR_vesInici (LlistaBidOr *l);
void LLISTABIDOR_vesFinal (LlistaBidOr *l);
int LLISTABIDOR_inici (LlistaBidOr l);
int LLISTABIDOR_final (LlistaBidOr l);
void LLISTABIDOR_destrueixl (LlistaBidOr *l);
