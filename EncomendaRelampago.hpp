#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:
		static const double taxa_relampago = 0.25;
	
		// constroi uma encomenda relampago e atribui os valores
		EncomendaRelampago(double peso; double custo_kg; Cliente remetente; Cliente destinatario){
			this-> _peso = peso;
			this-> _custo_kg = custo_kg;
			this-> _rementente = remetente;
			this-> _destinatario = destinatario;	
		}
	
		// calcula e atribui custo total da encomenda relampago
		double calculaCustoTotal() override{
			double custo_total = this->_peso * this->_custo_kg * taxa_relampago;
			this-> _custo_total = custo_total;
			return custo_total;
		}

		// imprime os dados da encomenda relampago e dos clientes envolvidos
		void printEncomendaRelampago(){

			Encomenda::printRemetenteDestinatario();
			std::cout << "[Encomenda Relâmpago]" << std::endl;
			std::cout << " Peso: " << this-> _peso << std::endl;
			std::cout << " Custo por kg: " << this-> _custo_kg << std::endl;
			std::cout << " Taxa adicional: " << taxa_relampago << std::endl;
			std::cout << " Custo total: " << this-> _custo_total << std::endl;

		}

};

#endif
