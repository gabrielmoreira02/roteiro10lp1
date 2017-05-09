#ifndef VALORACIMAEXCEPTION_H
#define VALORACIMAEXCEPTION_H

#include <iostream>
#include <exception>
#include <stdexcept>

class ValorAcimaException: public std::runtime_error{
    public:
        ValorAcimaException();
	virtual const char *what() const throw(){
    	return "Erro, valor acima do permitido";
   }
};
	
#endif
