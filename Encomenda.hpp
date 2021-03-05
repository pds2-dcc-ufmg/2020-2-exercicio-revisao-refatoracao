#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{
	protected: //permite o acesso somente para si e as classes que contém
		double _peso = 0.0;
		double _custo_kg = 0.0;
		double _custo_total = 0.0;
		Cliente _remetente;
		Cliente _destinatario;
	public:
		//calcula e atribui o custo total da encomenda (virtual para poder ser modificado pela enc relampago)
		virtual double calculaCustoTotal(){
			double custo_total = this->_peso * this->_custo_kg;
			this-> _custo_total = custo_total;
			return custo_total;
		}
		//imprime o rementente e o destinatário respectivamente
		void printRemetenteDestinatario(){ 

			std::cout << "[Remetente]" << std::endl;
			_remetente.printCliente();
			std::cout << "[Destinatário]" << std::endl;
			_destinatario.printCliente();
		}

};

#endif
