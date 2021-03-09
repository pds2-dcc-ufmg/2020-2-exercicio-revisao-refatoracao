#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda
{
public:
	Encomenda(){};
	Encomenda(double peso, double custoKG, Cliente remetente, Cliente destinatario, double taxa)
		: _peso(peso), _custoKG(custoKG), _remetente(remetente), _destinatario(destinatario), _taxa(taxa){};

	// Imprime os dados dos destinatários e remetentes
	void print();
	// Imprime os dados específicos de cada tipo de encomenda, por isso é sobreescrita nas subclasses
	virtual void print_sub() = 0;
	// Retorna o valor total a ser pago na encomenda
	double calcula();

	// Métodos printAtributo para facilitar reutilização e acesso em subclasses.
	void printPeso();
	void printCustoKG();
	void printTotal();
	void printTaxa();
	void printRemetente();
	void printDestinatario();

	// Imprime as informações na ordem esperada do trabalho e retorna o valor de calcula();
	double resultado();

protected:
	double _peso = 0.0;
	double _custoKG = 0.0;
	double _total = 0.0;
	double _taxa = 0.0;
	Cliente _remetente;
	Cliente _destinatario;
};

#endif