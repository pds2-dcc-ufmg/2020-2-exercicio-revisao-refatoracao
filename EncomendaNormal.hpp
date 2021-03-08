#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{
 
	public:
	EncomendaNormal():Encomenda(0.0,0.0, Cliente() ,Cliente()) {}
	EncomendaNormal(double _Peso, double _CustoKg, Cliente _Remetente, Cliente _Destinatario):Encomenda(_Peso,_CustoKg, _Remetente,_Destinatario) {}
		
	double calcula(){

		double ValorFinalNormal = GetPeso() * GetCustoKg();

		return ValorFinalNormal;
	}

	void print(){

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << GetPeso() << endl
			<< "  Custo por kg: " << GetCustoKg() << endl
			<< "  Custo total: " << GetCustoTotal() << endl;

	}

};

#endif