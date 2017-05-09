#ifndef ASSALARIADO_H_
#define ASSALARIADO_H_
#include <string>
#include "funcionario.h"

class Assalariado:public Funcionario{
protected:
	double salario;
public:
	Assalariado(std::string n, int m, double salario);
	Assalariado();

	double calcularSalario();
};

#endif
