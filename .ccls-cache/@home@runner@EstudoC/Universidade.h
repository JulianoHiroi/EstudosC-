#pragma once
#include "Departamento.h"
class Universidade {

private:
  char nome[100];

  Departamento *pDptos[50];

public:
  Universidade(const char *n, Departamento *dpto);
  Universidade();
  ~Universidade();
  void setNome(const char *n);
  void addDep(Departamento *pd , int ctd);
  char *getNome();
};
