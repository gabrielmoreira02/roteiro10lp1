#include "sistemagerenciafolha.h"


SistemaGerenciaFolha::SistemaGerenciaFolha(){

}

void SistemaGerenciaFolha::setFuncionarios(Funcionario *func, int i){
	funcionarios[i] = func;	
}

double SistemaGerenciaFolha::calcularValorTotalFolha(){
	double salariototal=0;
	for (int i=0;i<f;i++){
		salariototal+= funcionarios[i]->calcularSalario();
	}
	return salariototal;
}
double SistemaGerenciaFolha::consultaSalarioFuncionario(int i){
	if(i>=5){
		throw FuncionarioNaoExisteException();
	}else{
		return funcionarios[i]->calcularSalario();
	}
}

std::string SistemaGerenciaFolha::getNomeFuncionario(int i){
	return funcionarios[i]->getNome();
}