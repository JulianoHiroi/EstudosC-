#include "Principal.h"
#include "Pessoa.h"
#include "Universidade.h"
#include "stdafx.h"
#include "time.h"

Principal::Principal()
    : Calculo1(1, "Calculo1", "Matematica", 3),
      Quimica1(3, "Quimica1", "Quimica"), Fisica1(2, "Fisica1", "Fisica"),
      DAELN(12), Juliano(6, 12, 2002, "Juliano", 1234),
      Adonai(6, 12, 2002, "Adonai", 1234), Seiji(6, 12, 2002, "Seiji", 1234) {

  UTFPR.setNome("UTFPR");
  DAELN.setNome("DAELN");

  Calculo1.setDept(&DAELN);
  Quimica1.setDept(&DAELN);
  Fisica1.setDept(&DAELN);

  Calculo1.incluaAluno(&Juliano);
  Calculo1.incluaAluno(&Adonai);
  Calculo1.incluaAluno(&Seiji);

  Fisica1.incluaAluno(&Adonai);
  Fisica1.incluaAluno(&Juliano);
}

Principal::~Principal() {}

void Principal::Executar() {
  DAELN.listeDisciplinas();
  cout << " O departamento da disciplina " << Calculo1.getNome() << " é "
       << Calculo1.getDept()->getNome() << endl;

  Calculo1.listeAlunos();
  Fisica1.listeAlunos();
  Adonai.setNome("Teste");
  Calculo1.listeAlunos();
}