#ifndef FUNCIONARIO_H_
#define FUNCIONARIO_H_
#include <string>

class Funcionario{
protected:
	std::string nome;
	int matricula;
public:
	Funcionario();
	Funcionario(std::string n, int m);
	virtual double calcularSalario()=0;
	std::string getNome();
	int getMatricula();
	void setNome(std::string n);
	void setMatricula(int matricula);

};
#endif