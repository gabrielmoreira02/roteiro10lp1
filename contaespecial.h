#ifndef CONTAESPECIAL_H_
#define CONTAESPECIAL_H_
#include <string>
#include "conta.h"

class ContaEspecial:public Conta{
public:
	ContaEspecial(std::string nomeCliente, double salarioMensal, int numeroConta,double saldo);
	ContaEspecial();
	void definirLimite();
};

#endif
