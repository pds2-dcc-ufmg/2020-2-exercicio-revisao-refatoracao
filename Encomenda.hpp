#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	private:

		double _peso;
		Cliente _remetente;
		Cliente _dest;

	public:

		void setPeso(double peso) {

			_peso = peso;
		}

		void setRemet(Cliente r) {
			_remetente = r;
		}

		void setDest(Cliente d) {
			_dest = d;
		}

		double getPeso() {
            return _peso;
		}

		Cliente getRemet() {
            return _remetente;
		}

		Cliente getDest() {
            return _dest;
		}

		void print(){

			std::cout << "[Remetente]" << endl;
			_remetente.print();
			std::cout << "[Destinatário]" << endl;
			_dest.print();
		}

		virtual double calculaTotal() = 0;

};

#endif
