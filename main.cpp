#include <iostream>
#include <string>
#include <vector>

#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include "Endereco.hpp"

using namespace std;

double getCustoTotalDasEncomendas(vector<Encomenda*> encomendas) {
	double custoTotal = 0;
	for (auto it = encomendas.cbegin(); it != encomendas.cend(); ++it) {
    	custoTotal += (*it)->getCustoTotal();
	}
	return custoTotal;
}

void imprimeEncomendas(vector<Encomenda*> encomendas) {
	for (auto it = encomendas.cbegin(); it != encomendas.cend(); ++it) {
    	(*it)->print();
		std::cout << endl;
	}
}

int main(){

	Endereco endereco0 = Endereco("Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");
	Cliente cli0 = Cliente("Thales", &endereco0);

	Endereco endereco1 = Endereco("Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");
	Cliente cli1 = Cliente("Aristóteles", &endereco1);

	Endereco endereco2 = Endereco("Praça das Formas", "Atenas", "Ática", "348 a.C");
	Cliente cli2 = Cliente("Platão", &endereco2);

	Endereco endereco3 = Endereco("Rua do Elenchus", "Atenas", "Ática", "399 a.C.");
	Cliente cli3 = Cliente("Sócrates", &endereco3);

	Endereco endereco4 = Endereco("Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");
	Cliente cli4 = Cliente("Pitágoras", &endereco4);
	
	Endereco endereco5 = Endereco("Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");
	Cliente cli5 = Cliente("Parmênides", &endereco5);
	
	Endereco endereco6 = Endereco("Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");
	Cliente cli6 = Cliente("Empédocles", &endereco6);
	
	Endereco endereco7 = Endereco("Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");
	Cliente cli7 = Cliente("Anaxágoras", &endereco7);
	
	vector<Encomenda*> encomendasNormais;
	encomendasNormais.push_back(new EncomendaNormal(5, 12, &cli0, &cli1));
	encomendasNormais.push_back(new EncomendaNormal(10, 12, &cli1, &cli2));
	encomendasNormais.push_back(new EncomendaNormal(7, 12, &cli2, &cli3));
	encomendasNormais.push_back(new EncomendaNormal(2, 12, &cli3, &cli4));
	encomendasNormais.push_back(new EncomendaNormal(3, 12, &cli4, &cli5));

	vector<Encomenda*> encomendasRelampagos;
	encomendasRelampagos.push_back(new EncomendaRelampago(13, 18, &cli5, &cli6));
	encomendasRelampagos.push_back(new EncomendaRelampago(6, 18, &cli6, &cli7));
	encomendasRelampagos.push_back(new EncomendaRelampago(8, 18, &cli7, &cli0));
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	imprimeEncomendas(encomendasNormais);
	imprimeEncomendas(encomendasRelampagos);

	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << encomendasNormais.size()
		 << "\nValor Total: " << getCustoTotalDasEncomendas(encomendasNormais)
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << encomendasRelampagos.size()
		 << "\nValor Total: " << getCustoTotalDasEncomendas(encomendasRelampagos)
		 << endl;
	
}