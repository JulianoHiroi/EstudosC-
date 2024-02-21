#include "Disciplina.h"

#include "Aluno.h"
#include "Pessoa.h"
#include "Universidade.h"

class Principal {
private:
  // UTFPR é agregada ao(s) objeto(s) desta classe;
  Disciplina Calculo1, Quimica1, Fisica1;
  Universidade UTFPR;
  Departamento DAELN;

  Aluno Juliano, Adonai, Seiji;

public:
  Principal();
  ~Principal();
  void Executar();
};