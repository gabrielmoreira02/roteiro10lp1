#ifndef ICONTA_H_
#define ICONTA_H_

class IConta{
public:
	IConta();
	virtual void sacar(double valor)=0;
	virtual void depositar(double valor)=0;
};
#endif