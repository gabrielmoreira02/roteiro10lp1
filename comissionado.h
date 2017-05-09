#ifndef COMISSIONADO_H_
#define COMISSIONADO_H_
#include <string>
#include "funcionario.h"

class Comissionado:public Funcionario{
protected:
	double vendasSemanais;
	double percentualComissao;
	double salarioBase;
public:
	Comissionado(std::string n, int m, double salarioBase, double vendasSemanais, double percentualComissao);
	Comissionado();

	double calcularSalario();
};

#endif
