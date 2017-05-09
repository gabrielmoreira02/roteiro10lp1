#include "conta.h"


Conta::Conta(std::string nomeCliente, double salarioMensal, int numeroConta,double saldo){
	this->nomeCliente=nomeCliente;
	this->salarioMensal=salarioMensal;
	this->numeroConta=numeroConta;
	this->saldo=saldo;
	definirLimite();
}
Conta::Conta(){

}

std::string Conta::getNomeCliente(){
	return nomeCliente;
}
double Conta::getSalarioMensal(){
	return salarioMensal;
}
int Conta::getNumeroConta(){
	return numeroConta;
}
double Conta::getSaldo(){
	return saldo;
}
double Conta::getLimite(){
	return limite;
}
void Conta::setnomeCliente(std::string nomeCliente){
	this->nomeCliente=nomeCliente;
}

void Conta::setSalarioMensal(double salarioMensal){
	this->salarioMensal=salarioMensal;
}
void Conta::setNumeroConta(int numeroConta){
	this->numeroConta=numeroConta;
}
void Conta::setSaldo(double saldo){
	this->saldo=saldo;
}
void Conta::setLimite(double limite){
	this->limite=limite;
}
void Conta::definirLimite(){
	limite=salarioMensal*2;
}	
void Conta::sacar(double valor){
	if (saldo<valor){
		throw SaldoNaoDisponivelException();
	}
	saldo -= valor;
}
void Conta::depositar(double valor){
	saldo += valor;
}