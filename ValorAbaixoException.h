#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H

#include <iostream>
#include <exception>
#include <stdexcept>

class ValorAbaixoException: public std::runtime_error{
    public:
        ValorAbaixoException():runtime_error("Valor abaixo"){};
	virtual const char *what() const throw(){
    	return "Erro, valor abaixo do permitido";
   }
};
	
#endif
