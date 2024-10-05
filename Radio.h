#ifndef RADIO_H
#define RADIO_H

#include "Eletronico.h"

typedef struct
{
    Eletronico eletronic;
    char marca[30];
    char modelo[30];
    char cor[30];
} Radio;

void getMarca(Radio *p);
void setMarca(Radio *p);
void getModelo(Radio *p);
void setModelo(Radio *p);
void getCor(Radio *p);
void setCor(Radio *p);
void showInfoRadio(Radio *p);

#endif
