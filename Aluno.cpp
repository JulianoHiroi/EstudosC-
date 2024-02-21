#include "Aluno.h"
#include "stdafx.h"

Aluno::Aluno(int diaNa, int mesNa, int anoNa, const char *nome, int Ra)
    : Pessoa(diaNa, mesNa, anoNa, nome) {
  RA = Ra;
}

Aluno ::Aluno(int ra) : Pessoa(1, 1, 1, "asdjas") { RA = ra; }

Aluno::~Aluno() {}

void Aluno::setRA(int ra) { RA = ra; }

int Aluno::getRA() { return RA; }

void Aluno::print() { cout << "Aluno: " << this->InformaIdade() << endl; }