#include "assalariado.h"



Assalariado::Assalariado(std::string n, int m, double salario):Funcionario(n,m){
	this->salario=salario;
};
Assalariado::Assalariado(){

}

double Assalariado::calcularSalario(){
	return salario;
}