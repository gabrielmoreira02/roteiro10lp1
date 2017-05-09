#include <iostream>

using namespace std;

#include "sistemagerenciafolha.h"

int main(){

	SistemaGerenciaFolha gerencia;

	Assalariado *as = new Assalariado("Gabriel",11410276, 12000);
	gerencia.setFuncionarios(as,0);

	Assalariado *bs = new Assalariado("Juan",11413588,25000);
	gerencia.setFuncionarios(bs,1);
	
	Horista *cs = new Horista("Strike",42132131,80,40);
	gerencia.setFuncionarios(cs,2);

	Horista *ds = new Horista("Davi", 123218, 80, 50);
	gerencia.setFuncionarios(ds,3);

	Comissionado *es = new Comissionado("Julio",314312,3000, 10000, 10);
	gerencia.setFuncionarios(es,4);

	for (int i=0;i<6;i++){
		try{
			gerencia.consultaSalarioFuncionario(i);
		}catch(FuncionarioNaoExisteException &a){
			cout<<a.what();
		}
		//cout<< "Funcionario: "<<gerencia.getNomeFuncionario(i)<<"    Salario: "<<gerencia.consultaSalarioFuncionario(i)<<endl;
		
	}

	cout<<endl<<endl<<"Valor total folha: "<< gerencia.calcularValorTotalFolha()<<endl;
}

