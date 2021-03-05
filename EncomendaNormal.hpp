#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
	
	// constroi uma encomenda normal e atribui os valores
	EncomendaNormal(double peso; double custo_kg; Cliente remetente; Cliente destinatario){
		this-> _peso = peso;
		this-> _custo_kg = custo_kg;
		this-> _rementente = remetente;
		this-> _destinatario = destinatario	
	}
	
	//imprime os dados da encomenda normal e dos clientes envolvidos
	void printEncomendaNormal(){

		Encomenda::printRemetenteDestinatario();
		std::cout << "[Encomenda Normal]" << std::endl;
		std::cout << " Peso: " << this-> _peso << std::endl;
		std::cout << " Custo por kg: " << this-> _custo_kg << std::endl;
		std::cout << " Custo total: " << this-> _custo_total << std::endl;

	}

};

#endif
