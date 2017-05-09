
#include "TestaValidaNumero.h"
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
using namespace std;

int main(){

	TestaValidaNumero n;
	int k;

	while(k != 0){
		cout<<"Digite um numero: (0 para sair)"<<endl;
		cin>>k;
		try{
			n.validaNumero(k);
		}catch(ValorAbaixoException &a){
			std::cout<<a.what()<<std::endl;
		}catch(ValorAcimaException &a){
			std::cout<<a.what()<<std::endl;
		}
		cout<<endl;
	}
	



}