#include "EncomendaRelampago.hpp"
#include "Encomenda.hpp"
#include "Cliente.hpp"

#include <iostream>

void EncomendaRelampago:: print(){
    Encomenda::print();
    cout << "[Encomenda Normal]" << endl;
    cout << "  Peso: " << this->_Peso << endl
    << "  Custo por kg: " << this->_CustoKg << endl
    << "  Custo total: " << this->calculaCusto()  << endl;
}

double EncomendaRelampago::calculaCusto(){

		double Custo = this->_Peso * this->_CustoKg;
		Custo += Custo * 0.25;
		return Custo;
}

EncomendaRelampago::EncomendaRelampago(double Peso, double CustoKg, Cliente* remetente, Cliente* dest){
    this-> _Peso = Peso;
    this-> _CustoKg = CustoKg;
    this-> _remetente = remetente;
    this-> _dest = dest;
}
