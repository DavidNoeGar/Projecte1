#include "llista.h"

LlistaBidOr LLISTABIDOR_crea () {
  LllistaBidOr l;
  l.pri=(NodeBi*)malloc (sizeof(NodeBi));
  if (l.pri==NULL) {
    //Error
  } else {
    l.ult=(NodeBi*)malloc(sizeof(NodeBi));
    if (l.ult==NULL) {
       free(l.pri);
       //Error
    } else {
       l.pri->e=ELEMENT_indefinit();
       l.pri->ant=NULL;
       l.ult->e=ELEMENT_indefinit();
       l.ult->seg=NULL;
       l.pri->seg=l.ult;
       l.ult->ant=l.pri;
       l.pdi=l.ult;
    }
  }
  return l;
}

void LLISTABIDOR_insereixOrdenat (LlistaBidOr *l, int e) {
  Node *aux;
  aux=(Node*)malloc(sizeof(Node));
  if (aux==NULL) {
    //Error
  } else {
    aux->e=e;
    l->ant=l->pri;
    while (l->ant->seg!=NULL && e > l->ant->seg->e) {
      l->ant=l->ant->seg;
    }
    aux->seg=l->ant->seg;
    l->ant->seg=aux;
  }}

void LLITABIDOR_vesInici(LlistaBidOr *l) {}

void LLISTADOR_vesFinal(LlistaBidOr *l) {}

int LLISTABIDOR_inici(LlistaBidOr l) {}

int LLISTABIDOR_final(LlistaBidOr l) {}

void LLISTABIDOR_destrueixl(LlistaBidOr *l) {}

int LLISTABIDOR_consulta (LlistaBidOr l) {}

void LLISTABIDOR_esborra(LlistaBidOr *l) {}

void LLISTABIDOR_avanca (LlistaBidOr *l) {}

void LLISTABIDOR_retocedeix(LlistaBidOr *l) {}

int LLISTABIDOR_buida (LlistaBidOr l) {}
