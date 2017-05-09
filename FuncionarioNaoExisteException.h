#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H_
#define FUNCIONARIONAOEXISTEEXCEPTION_H_

#include <iostream>
#include <exception>
#include <stdexcept>

class FuncionarioNaoExisteException: public std::runtime_error{
    public:
        FuncionarioNaoExisteException():runtime_error("FuncionarioNaoExisteException"){};
	virtual const char *what() const throw(){
    	return "Erro, Funncionario nao existe";
   }
};
	
#endif
