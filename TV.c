#include <stdio.h>
#include "TV.h"

void getPolegadas(TV *p) {
    printf("Polegadas: %d\n", p->polegadas);
}

void setPolegadas(TV *p) {
    printf("Informe o tamanho da TV (polegadas): ");
    scanf("%d", &p->polegadas);
}

void isSmart(TV *p) {
    if (p->smart == 0) {
        printf("Essa TV não é Smart.\n");
    } else {
        printf("Essa TV é Smart.\n");
    }
}

void setSmart(TV *p) {
    printf("Digite 1 para ser Smart ou 0 para não ser: ");
    scanf("%d", &p->smart);
}

void showInfoTV(TV *p) {
    showInfoEletronico(&(p->eletronic));
    isSmart(p);
    getPolegadas(p);
}
