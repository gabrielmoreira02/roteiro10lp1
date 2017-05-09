#ifndef SALDONAODISPONIVEL_H_
#define SALDONAODISPONIVEL_H_

#include <iostream>
#include <exception>
#include <stdexcept>

class SaldoNaoDisponivelException: public std::runtime_error{
    public:
        SaldoNaoDisponivelException():runtime_error("Saldo Nao Disponivel"){};
	virtual const char *what() const throw(){
    	return "Erro, saldo nao disponivel";
   }
};
	
#endif
