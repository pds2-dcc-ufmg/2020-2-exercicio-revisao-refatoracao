#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:

		virtual double calculaCustoTotal() = 0;

		void setPeso(double peso) { _peso = peso; }

		double getPeso() { return _peso; }

		void setCustoKg(double custoKg) { _custoKg = custoKg; }

		double getCustoKg() { return _custoKg; }

		void setCustoTotal(double custoTotal) { _custoTotal = custoTotal; }

		double getCustoTotal() { return _custoTotal; }

		void setRemetente(Cliente rementente) { _remetente = rementente; }

		Cliente getRemetente() { return _remetente; }

		void setDestinatario(Cliente destinatario) { _destinatario = destinatario; }

		Cliente getDestinatario() { return _destinatario; }
			
		void print(){

			std::cout << "[Remetente]" << endl;
			_remetente.print();
			std::cout << "[Destinatário]" << endl;
			_destinatario.print();
		}

	private:

		double _peso = 0.0;
		double _custoKg = 0.0;
		double _custoTotal = 0.0;
		Cliente _remetente;
		Cliente _destinatario;

};

#endif