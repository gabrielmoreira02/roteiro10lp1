#include <iostream>

using namespace std;

#include "contaespecial.h"

int main(){
	// DECIDI CHAMAR A FUNCAO DEFINIR LIMITE NOS CONSTRUTURES DE CADA RESPECTIVA CLASSE
	Conta c1("Gabriel",1200,467790,400.50);
	ContaEspecial c2("Lucas",3240,1643843,239.23);

	cout<< "Cliente: "<<c1.getNomeCliente()<<endl<<"Salario Mensal: "<<c1.getSalarioMensal()<<endl<<"Numero da Conta: "<<c1.getNumeroConta()<<endl
	<<"Saldo: "<<c1.getSaldo()<<endl<<"Limite: "<< c1.getLimite()<<endl<<endl;


	cout<< "Tentando sacar 500 reais"<<endl<<endl;
	try{
		c1.sacar(500);
	}catch(SaldoNaoDisponivelException &a){
		cout<<a.what()<<endl;
	}


	cout<< "Cliente: "<<c1.getNomeCliente()<<endl<<"Salario Mensal: "<<c1.getSalarioMensal()<<endl<<"Numero da Conta: "<<c1.getNumeroConta()<<endl
	<<"Saldo: "<<c1.getSaldo()<<endl<<"Limite: "<< c1.getLimite()<<endl<<endl;

	cout<< "Cliente Especial: "<<c2.getNomeCliente()<<endl<<"Salario Mensal: "<<c2.getSalarioMensal()<<endl<<"Numero da Conta: "<<c2.getNumeroConta()<<endl
	<<"Saldo: "<<c2.getSaldo()<<endl<<"Limite: "<< c2.getLimite()<<endl<<endl;

	c2.depositar(1000);

	cout<< "apos depositar 1000 reais"<<endl<<endl;

	cout<< "Cliente Especial: "<<c2.getNomeCliente()<<endl<<"Salario Mensal: "<<c2.getSalarioMensal()<<endl<<"Numero da Conta: "<<c2.getNumeroConta()<<endl
	<<"Saldo: "<<c2.getSaldo()<<endl<<"Limite: "<< c2.getLimite()<<endl<<endl;

}

