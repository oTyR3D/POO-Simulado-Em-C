#include <stdio.h>
#include <string.h>
#include "Radio.h"

void getMarca(Radio *p) {
    printf("Marca: %s\n", p->marca);
}

void setMarca(Radio *p) {
    printf("Informe a marca: ");
    fgets(p->marca, 30, stdin);
    p->marca[strlen(p->marca) - 1] = '\0';
}

void getModelo(Radio *p) {
    printf("Modelo: %s\n", p->modelo);
}

void setModelo(Radio *p) {
    printf("Informe o modelo: ");
    fgets(p->modelo, 30, stdin);
    p->modelo[strlen(p->modelo) - 1] = '\0';
}

void getCor(Radio *p) {
    printf("Cor: %s\n", p->cor);
}

void setCor(Radio *p) {
    printf("Informe a cor: ");
    fgets(p->cor, 30, stdin);
    p->cor[strlen(p->cor) - 1] = '\0';
}

void showInfoRadio(Radio *p) {
    showInfoEletronico(&(p->eletronic));
    getMarca(p);
    getModelo(p);
    getCor(p);
}
