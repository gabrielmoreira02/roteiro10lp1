#include "funcionario.h"

Funcionario::Funcionario(){

}
Funcionario::Funcionario(std::string n, int m){
	nome=n;
	matricula=m;
}
std::string Funcionario::getNome(){
	return nome;
}
int Funcionario::getMatricula(){
	return matricula;
}
void Funcionario::setNome(std::string n){
	nome=n;
}
void Funcionario::setMatricula(int matricula){
	this->matricula=matricula;
}