#pragma once
#include "Aluno.h"
class ElAluno {
private:
  Aluno *pAl;

public:
  ElAluno *pProx;
  ElAluno *pAnte;
  ElAluno();
  ~ElAluno();
  void setAluno(Aluno *pA);
  Aluno *getAluno();
  char *getNome();
};