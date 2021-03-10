#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	private:

		double _peso_encomenda = 0.0;
		double _custo_kg_encomenda = 0.0;
		double _custo_total_encomenda = 0.0;
		Cliente _remetente_encomenda;
		Cliente _destinatario_encomenda;

	public:

		void setPeso(double peso); // define a variável _peso_encomenda
		void setCustoKg(double custoKg); // define a variável _custo_kg_encomenda
		void setCustoTotal(double custoTotal); // define a variável _custo_total_encomenda
		void setRemetente(Cliente remetente); // define a variável _remetente_encomenda
		void setDestinatario(Cliente destinatario); // define a variável _destinatario_encomenda

		double getPeso(); // retorna a variável _peso_encomenda
		double getCustoKg(); // retorna a variável _custo_kg_encomenda
		double getCustoTotal(); // retorna a variável _custo_total_encomenda
		Cliente getRemetente(); // retorna a variável _remetente_encomenda
		Cliente getDestinatario(); // retorna a variável _destinatario_encomenda

		void print(); // imprime na tela os dados do remetente e do destinatário

};

#endif
