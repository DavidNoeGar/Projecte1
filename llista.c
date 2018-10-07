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

void LLITABIDOR_vesInici(LlistaBidOr *l) {
  l->pdi=l->pri->seg;
}

void LLISTADOR_vesFinal(LlistaBidOr *l) {
  l->pdi=l->ult->ant;
}

int LLISTABIDOR_inici(LlistaBidOr l) {
  return l.pdi==l.pri.seg;
}

int LLISTABIDOR_final(LlistaBidOr l) {
  return l.pdi==l.ult.ant;
}

void LLISTABIDOR_destrueixl(LlistaBidOr *l) {
  NodeBi *aux;
  aux=(NodeBi*)malloc(sizeof(NodeBi));
  if (aux==NULL) {
    //Error
  } else {
    while (l->pri!=NULL) {
       aux=l->pri;
       l->pri=aux->seg;
       free(aux);
    }
    l->ult=NULL;
    l->pdi=NULL;
}

int LLISTABIDOR_consulta (LlistaBidOr l) {
  int e=ELEMENT_indefinit();
  if (l.pri->seg==NULL && l.ult->ant==NULL) {
    //Error llista buida
  } else {
    e=l.pdi->e;
  }
  resturn e;
}

void LLISTABIDOR_esborra(LlistaBidOr *l) {
  NodeBi *aux;
  if (l->pri->seg==NULL || l->ult->ant==NULL) {
    //Error
  } else {
    aux=l->pdi;
    l->pdi->ant->seg=l->pdi->seg;
    l->pdi->seg->ant=l->pdi->ant;
   l->pdi=l->pdi->seg;
   free(aux);
 }
}

void LLISTABIDOR_avanca (LlistaBidOr *l) {}

void LLISTABIDOR_retocedeix(LlistaBidOr *l) {}

int LLISTABIDOR_buida (LlistaBidOr l) {}
