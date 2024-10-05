#include <stdio.h>
#include "TV.h"
#include "Radio.h"

int main() {
    TV minhaTV;
    Radio meuRadio;

    printf("Configurando TV...\n");
    setSmart(&minhaTV);
    setPolegadas(&minhaTV);
    setVoltagem(&(minhaTV.eletronic));
    setAmperagem(&(minhaTV.eletronic));
    setCorrenteEletrica(1, &(minhaTV.eletronic));
    setLigado(&(minhaTV.eletronic));

    printf("\nInformações da TV:\n");
    showInfoTV(&minhaTV);

    printf("\nConfigurando Rádio...\n");
    setMarca(&meuRadio);
    setModelo(&meuRadio);
    setCor(&meuRadio);
    setVoltagem(&(meuRadio.eletronic));
    setAmperagem(&(meuRadio.eletronic));
    setCorrenteEletrica(1, &(meuRadio.eletronic));
    setLigado(&(meuRadio.eletronic));

    printf("\nInformações do Rádio:\n");
    showInfoRadio(&meuRadio);

    return 0;
}
