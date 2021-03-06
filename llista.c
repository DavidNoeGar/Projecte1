#include <stdio.h>
#include <stdlib.h>
#include "llista.h"

LlistaBidOr LLISTABIDOR_crea () {
  LlistaBidOr l;
  l.pri=(NodeBi*)malloc (sizeof(NodeBi));
  if (l.pri==NULL) {
    //Error
  } else {
    l.ult=(NodeBi*)malloc(sizeof(NodeBi));
    if (l.ult==NULL) {
       free(l.pri);
       //Error
    } else {
       l.pri->ant=NULL;
       l.ult->seg=NULL;
       l.pri->seg=l.ult;
       l.ult->ant=l.pri;
       l.pdi=l.ult;
    }
  }
  return l;
}

void LLISTABIDOR_insereixOrdenat (LlistaBidOr *l, int e) {
  NodeBi *aux;
  aux=(NodeBi*)malloc(sizeof(NodeBi));
  if (aux==NULL) {
    //Error
  } else {
    aux->e=e;
    l->pdi=l->pri;
    while (l->pdi->seg!=NULL && e > l->pdi->seg->e) {
      l->pdi=l->pdi->seg;
    }
    aux->seg=l->pdi->seg;
    aux->ant=l->pdi;
    l->pdi->seg->ant=aux;
    l->pdi->seg=aux;
  }
}

void LLITABIDOR_vesInici(LlistaBidOr *l) {
  l->pdi=l->pri->seg;
}

void LLISTADOR_vesFinal(LlistaBidOr *l) {
  l->pdi=l->ult->ant;
}

int LLISTABIDOR_inici(LlistaBidOr l) {
  return l.pdi==l.pri->seg;
}

int LLISTABIDOR_final(LlistaBidOr l) {
  return l.pdi==l.ult->ant;
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
}

int LLISTABIDOR_consulta (LlistaBidOr l) {
  int e = 0;
  if (l.pri->seg==NULL && l.ult->ant==NULL) {
    //Error llista buida
  } else {
    e=l.pdi->e;
  }
  return e;
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

void LLISTABIDOR_avanca (LlistaBidOr *l) {
  if (l->pdi->seg==NULL) {
    //Error
  } else {
     l->pdi=l->pdi->seg;
  }
}

void LLISTABIDOR_retocedeix(LlistaBidOr *l) {
  if (l->pdi->ant==NULL) {
     //Error
   } else {
      l->pdi=l->pdi->ant;
   }
}

int LLISTABIDOR_buida (LlistaBidOr l) {
  return l.pri->seg==l.ult;
}
