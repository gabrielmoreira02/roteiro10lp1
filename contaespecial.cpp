#include "contaespecial.h"

ContaEspecial::ContaEspecial(std::string nomeCliente, double salarioMensal, int numeroConta,double saldo)
:Conta(nomeCliente,salarioMensal,numeroConta,saldo){
	definirLimite();
}
ContaEspecial::ContaEspecial(){

}
void ContaEspecial::definirLimite(){
	limite=salarioMensal*3;
}	