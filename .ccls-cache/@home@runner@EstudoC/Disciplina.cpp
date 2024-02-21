#include "Disciplina.h"
#include "stdafx.h"

Disciplina::Disciplina(int id, const char *nome, const char *area_conhecimento,
                       int numero_alunos) {
  this->id = id;
  strcpy(this->nome, nome);
  strcpy(this->area_conhecimento, area_conhecimento);
  pDpto = NULL;
  pProx = NULL;
  pAlunoPrim = NULL;
  pAlunoAtual = NULL;
  this->numero_alunos = numero_alunos;
  count_alunos = 0;
}

Disciplina::~Disciplina() {
  pDpto = NULL;
  pProx = NULL;

  ElAluno *pAuxAluno;
  pAuxAluno = pAlunoPrim;
  while (pAlunoPrim != NULL) {
    pAlunoPrim = pAlunoPrim->pProx;
    delete pAuxAluno;
    pAuxAluno = pAlunoPrim;
  }

  pAlunoPrim = NULL;
  pAlunoAtual = NULL;
}

void Disciplina::setNome(const char *n) { strcpy(this->nome, nome); }
void Disciplina::setDept(Departamento *pd) {
  this->pDpto = pd;
  pd->incluaDisciplina(this);
}
void Disciplina::setAreaConhecimento(const char *ac) {
  strcpy(this->area_conhecimento, ac);
}

char *Disciplina::getNome() { return nome; }

char *Disciplina::getAreaConhecimento() { return area_conhecimento; }

Departamento *Disciplina::getDept() { return pDpto; }

Disciplina *Disciplina::getProx() { return pProx; }

void Disciplina::setProx(Disciplina *p) { pProx = p; }

void Disciplina::incluaAluno(Aluno *p) {
  ElAluno *pa = NULL;
  pa = new ElAluno();
  pa->setAluno(p);

  if (count_alunos < numero_alunos) {
    if (pAlunoPrim == NULL) {
      pAlunoPrim = pa;
      pAlunoAtual = pa;
    } else {
      pAlunoAtual->pProx = pa;
      pa->pAnte = pAlunoAtual;
      pAlunoAtual = pa;
    }
    count_alunos++;
  } else {
    cout << "Aluno não incluído, número máximo de alunos atingido." << endl;
  }
}

void Disciplina::listeAlunos() {
  ElAluno *pAux = pAlunoAtual;
  int i = 1;
  cout << "\n Alunos da materia " << nome << endl;
  while (pAux != NULL) {
    cout << "\n" << i << " - " << pAux->getNome() << endl;
    pAux = pAux->pAnte;
    i++;
  }
}