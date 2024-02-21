#pragma once
#include "Departamento.h"
#include "ElAluno.h"

class Disciplina {
private:
  char nome[100];
  int id;
  char area_conhecimento[100];
  Departamento *pDpto;
  Disciplina *pProx;
  ElAluno *pAlunoPrim, *pAlunoAtual;
  int count_alunos, numero_alunos;

public:
  Disciplina(int id, const char *nome, const char *area_conhecimento,
             int numero_alunos = 45);
  ~Disciplina();
  void setNome(const char *n);
  void setAreaConhecimento(const char *ac);
  void setDept(Departamento *pd);
  char *getNome();
  char *getAreaConhecimento();
  Departamento *getDept();
  Disciplina *getProx();
  void setProx(Disciplina *p);
  void incluaAluno(Aluno *p);
  void listeAlunos();
};