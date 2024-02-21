#pragma once

class Universidade;
class Disciplina;

class Departamento {
private:
  char nome[100];
  int id;
  Disciplina *pDisciplPrim;
  Disciplina *pDisciplAtual;

public:
  Departamento(int i);
  ~Departamento();
  void setNome(const char *n);
  char *getNome();
  void setId(int i);
  int getId();
  void incluaDisciplina(Disciplina *p);
  void listeDisciplinas();
};