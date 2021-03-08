#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:
	EncomendaRelampago():Encomenda(0.0,0.0, Cliente() ,Cliente()) {}
	EncomendaRelampago(double _Peso, double _CustoKg, Cliente _Remetente, Cliente _Destinatario):Encomenda(_Peso,_CustoKg, _Remetente,_Destinatario) {}
 
		double calcula(){

			double ValorFinalRelampago = GetPeso() * GetCustoKg();
			ValorFinalRelampago += ValorFinalRelampago * 0.25;
			
			return ValorFinalRelampago; //x-> valorfinalrelampago
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << GetPeso() << endl
				<< "  Custo por kg: " << GetCustoKg() << endl
				<< "  Taxa adicional: " << 0.25 << endl
				<< "  Custo total: " << GetCustoTotal() << endl;

		}

};

#endif