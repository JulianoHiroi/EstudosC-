#pragma once
#include "Pessoa.h"
class Aluno : public Pessoa {
private:
  int RA;

public:
  Aluno(int diaNa, int mesNa, int anoNa, const char *nome, int RA);
  Aluno(int i = -1);
  ~Aluno();
  void setRA(int ra);
  int getRA();
  void print();
};