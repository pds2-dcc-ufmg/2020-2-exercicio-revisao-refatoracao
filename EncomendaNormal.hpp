#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{
	public:
		EncomendaNormal(double peso, double custo_kg, Cliente remetente, Cliente destinatario) : Encomenda(peso,custo_kg,remetente,destinatario) {}
		// construtor de EncomendaNormal para manter os dados da Encomenda protected
	
		double calcula() override{
			this->_custo_total = this->_peso * this->_custo_kg;
			return this->_custo_total;
		} // calcula o valor do custo total da entrega e o retorna

		void print_parte_2 override(){
			Encomenda::print_parte_1();
			std::cout << "[Encomenda Normal]" << endl;
			std::cout << "  Peso: " << this->_peso << endl
				<< "  Custo por kg: " << this->_custo_kg << endl
				<< "  Custo total: " << this->_custo_total << endl;
		} // imprime na tela o resto das informações sobre a encomenda cadastrada
};

#endif
