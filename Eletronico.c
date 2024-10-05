#include <stdio.h>
#include "Eletronico.h"

void isCorrenteEletrica(Eletronico *p) {
    if (p->correnteEletrica == 0) {
        printf("Não tem corrente elétrica.\n");
    } else {
        printf("Tem corrente elétrica.\n");
    }
}

void setCorrenteEletrica(int x, Eletronico *p) {
    p->correnteEletrica = x;
}

void getVoltagem(Eletronico *p) {
    printf("Voltagem: %d\n", p->voltagem);
}

void setVoltagem(Eletronico *p) {
    printf("Informe a voltagem: ");
    scanf("%d", &p->voltagem);
}

void getAmperagem(Eletronico *p) {
    printf("Amperagem: %d\n", p->amperagem);
}

void setAmperagem(Eletronico *p) {
    printf("Informe a amperagem: ");
    scanf("%d", &p->amperagem);
}

void isLigado(Eletronico *p) {
    if (p->ligado == 0) {
        printf("Está desligado.\n");
    } else {
        printf("Está ligado.\n");
    }
}

void setLigado(Eletronico *p) {
    printf("Digite 1 para ligar ou 0 para desligar: ");
    scanf("%d", &p->ligado);
}

void showInfoEletronico(Eletronico *p) {
    isLigado(p);
    isCorrenteEletrica(p);
    getAmperagem(p);
    getVoltagem(p);
}
