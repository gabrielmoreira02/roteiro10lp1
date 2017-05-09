#include "horista.h"

Horista::Horista(std::string n, int m, double salarioPorHora, double horasTrabalhadas):Funcionario(n,m){
	this->salarioPorHora=salarioPorHora;
	this->horasTrabalhadas=horasTrabalhadas;
};
Horista::Horista(){

}

double Horista::calcularSalario(){
	double salario;
	salario=salarioPorHora*40;
	if(horasTrabalhadas>40){
		salario += (horasTrabalhadas-40)*1.5*salarioPorHora;
	}
	return salario;
}