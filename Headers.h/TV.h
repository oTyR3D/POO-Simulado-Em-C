#ifndef TV_H
#define TV_H

#include "Eletronico.h"

typedef struct
{
    Eletronico eletronic;
    int polegadas;
    int smart;
} TV;

void getPolegadas(TV *p);
void setPolegadas(TV *p);
void isSmart(TV *p);
void setSmart(TV *p);
void showInfoTV(TV *p);

#endif
