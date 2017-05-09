#include "comissionado.h"

Comissionado::Comissionado(std::string n, int m, double salarioBase, double vendasSemanais,double percentualComissao):Funcionario(n,m){
	this->vendasSemanais=vendasSemanais;
	this->percentualComissao=percentualComissao;
	this->salarioBase=salarioBase;
};
Comissionado::Comissionado(){

}

double Comissionado::calcularSalario(){
	return salarioBase+(vendasSemanais*percentualComissao/100);
}