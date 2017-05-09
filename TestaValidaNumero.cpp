#include "TestaValidaNumero.h"

TestaValidaNumero::TestaValidaNumero()
{
    //ctor
}

TestaValidaNumero::~TestaValidaNumero()
{
    //dtor
}

void TestaValidaNumero::validaNumero(int num){

	//try{
		if (num<0){
			throw ValorAbaixoException();
		}else if(num>100){
			throw ValorAcimaException();
		}else{
			std::cout<<"numero valido"<<std::endl;
		}
/*	}catch (ValorAbaixoException &a){
		std::cout<<a.what()<<std::endl;
	}
	catch (ValorAcimaException &e){
		std::cout<<e.what()<<std::endl;
	}
*/
}
