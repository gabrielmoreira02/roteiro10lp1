#ifndef CONTA_H_
#define CONTA_H_
#include <string>
#include "iconta.h"
#include "SaldoNaoDisponivelException.h"

class Conta:public IConta{
protected:
	std::string nomeCliente;
	double salarioMensal;
	int numeroConta;
	double saldo;
	double limite;
public:
	Conta(std::string nomeCliente, double salarioMensal, int numeroConta,double saldo);
	Conta();

	std::string getNomeCliente();
	double getSalarioMensal();
	int getNumeroConta();
	double getSaldo();
	double getLimite();
	void setnomeCliente(std::string nomeCliente);
	void setSalarioMensal(double salarioMensal);
	void setNumeroConta(int numeroConta);
	void setSaldo(double saldo);
	void setLimite(double limite);
	void definirLimite();
	void sacar(double valor);
	void depositar(double valor);
};

#endif
