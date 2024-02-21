#include "Universidade.h"
#include "stdafx.h"

Universidade::Universidade(const char *n, Departamento *dpto) {
  strcpy(nome, n);
  pDptos[0] = dpto;
}
Universidade::Universidade(){};

Universidade::~Universidade() {}

void Universidade::setNome(const char *n) { strcpy(nome, n); }
void Universidade::addDep(Departamento *pd, int ctd) { pDptos[ctd] = pd; }
char *Universidade::getNome() { return nome; }
