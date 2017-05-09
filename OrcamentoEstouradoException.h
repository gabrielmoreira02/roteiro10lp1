#ifndef ORCAMENTOESTOURADOEXCEPTION_H_
#define ORCAMENTOESTOURADOEXCEPTION_H_

#include <iostream>
#include <exception>
#include <stdexcept>

class OrcamentoEstouradoException: public std::runtime_error{
    public:
        OrcamentoEstouradoException():runtime_error("Orcamento Estourado"){};
	virtual const char *what() const throw(){
    	return "Erro, Orcamento Estourado";
   }
};
	
#endif
