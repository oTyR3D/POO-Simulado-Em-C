#ifndef ELETRONICO_H
#define ELETRONICO_H

typedef struct
{
    int correnteEletrica;
    int voltagem;
    int amperagem;
    int ligado;
} Eletronico;

void isCorrenteEletrica(Eletronico *p);
void setCorrenteEletrica(int x, Eletronico *p);
void getVoltagem(Eletronico *p);
void setVoltagem(Eletronico *p);
void getAmperagem(Eletronico *p);
void setAmperagem(Eletronico *p);
void isLigado(Eletronico *p);
void setLigado(Eletronico *p);
void showInfoEletronico(Eletronico *p);

#endif
