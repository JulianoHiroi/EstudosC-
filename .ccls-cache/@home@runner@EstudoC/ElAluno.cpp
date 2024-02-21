
#include "ElAluno.h"
#include "Aluno.h"
#include "stdafx.h"

ElAluno::ElAluno() {
  pAl = NULL;
  pAnte = NULL;
  pProx = NULL;
}
ElAluno::~ElAluno() {
  pAl = NULL;
  pAnte = NULL;
  pProx = NULL;
}
void ElAluno::setAluno(Aluno *pa) { pAl = pa; 
                                  }

Aluno *ElAluno::getAluno() { return pAl; }

char *ElAluno::getNome() { return pAl->getNome(); }