#ifndef HORISTA_H_
#define HORISTA_H_
#include <string>
#include "funcionario.h"

class Horista:public Funcionario{
protected:
	double salarioPorHora;
	double horasTrabalhadas;
public:
	Horista(std::string n, int m, double salarioPorHora, double horasTrabalhadas);
	Horista();

	double calcularSalario();
};

#endif

