#ifndef SISTEMAGERENCIAFOLHA_H_
#define SISTEMAGERENCIAFOLHA_H_
#include <string>
#include "assalariado.h"
#include "horista.h"
#include "comissionado.h"
#include "FuncionarioNaoExisteException.h"

const int f=5;
class SistemaGerenciaFolha{
protected:
	Funcionario *funcionarios[f];
public:
	SistemaGerenciaFolha();
	void setFuncionarios(Funcionario *func, int i);
	double calcularValorTotalFolha();
	double consultaSalarioFuncionario(int i);
	std::string getNomeFuncionario(int i);
};
#endif