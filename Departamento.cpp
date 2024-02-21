#include "Departamento.h"
#include "Disciplina.h"

#include "stdafx.h"
Departamento::Departamento(int i) {
  strcpy(nome, "");
  id = i;
  pDisciplPrim = NULL;
  pDisciplAtual = NULL;
}

Departamento::~Departamento() {
  pDisciplPrim = NULL;
  pDisciplAtual = NULL;
}

void Departamento::setNome(const char *n) { strcpy(nome, n); }

char *Departamento::getNome() { return nome; }

void Departamento::setId(int i) { id = i; }

int Departamento::getId() { return id; }

void Departamento::incluaDisciplina(Disciplina *p) {
  cout << "a disciplina " << p->getNome() << " foi incluida no departamento "
       << endl;
  if (pDisciplPrim == NULL) {
    pDisciplPrim = p;
    pDisciplAtual = p;
  } else {
    pDisciplAtual->setProx(p);
    pDisciplAtual = p;
  }
}
void Departamento::listeDisciplinas() {
  Disciplina *pAux = pDisciplPrim;
  while (pAux != NULL) {
    cout << "\n" << pAux->getNome() << endl;
    pAux = pAux->getProx();
  }
}