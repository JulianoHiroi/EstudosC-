#include "Pessoa.h"
#include "Universidade.h"
#include "stdafx.h"

Pessoa::Pessoa(int diaNa, int mesNa, int anoNa, const char *nome) {
  Inicializa(diaNa, mesNa, anoNa, nome);
}

Pessoa::Pessoa() { Inicializa(0, 0, 0, ""); }
Pessoa::~Pessoa() {}

int Pessoa::InformaIdade() { return idadeP; }

void Pessoa::Calc_Idade(int diaAT, int mesAT, int anoAT) {
  idadeP = anoAT - anoP;
  if (mesP > mesAT) {
    idadeP = idadeP - 1;
  } else {
    if (mesP == mesAT) {
      if (diaP > diaAT) {
        idadeP = idadeP - 1;
      }
    }
  }
  cout << "A idade da Pessoa " << nomeP << " seria " << idadeP << endl;
}

void Pessoa::Inicializa(int diaNa, int mesNa, int anoNa, const char *nome) {
  diaP = diaNa;
  mesP = mesNa;
  anoP = anoNa;
  strcpy(nomeP, nome);
}
void Pessoa::setUnivFiliado(Universidade *pu) { univP = pu; }
void Pessoa::setDepFiliado(Departamento *pd) { depP = pd; }

void Pessoa::OndeTrabalho() {
  cout << nomeP << " trabalha para a " << univP->getNome()
       << " no departamento " << depP->getNome() << endl;
}

char *Pessoa::getNome() { return nomeP; }

void Pessoa::setNome(const char *nome) { strcpy(nomeP, nome); }