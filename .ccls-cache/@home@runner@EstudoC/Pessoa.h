#pragma once

#include "Departamento.h"
#include "Universidade.h"
class Pessoa {
private:
  int diaP;
  int mesP;
  int anoP;
  int idadeP;
  char nomeP[50];

  Universidade *univP;
  Departamento *depP;

public:
  Pessoa(int diaNa, int mesNa, int anoNa, const char *nome);
  Pessoa();
  ~Pessoa();
  void Inicializa(int diaNa, int mesNa, int anoNa, const char *nome);
  void Calc_Idade(int diaAT, int mesAT, int anoAT);
  int InformaIdade();
  char *getNome();
  void setUnivFiliado(Universidade *pu);
  void OndeTrabalho();
  void setNome(const char *nome);
  void setDepFiliado(Departamento *pd);
};