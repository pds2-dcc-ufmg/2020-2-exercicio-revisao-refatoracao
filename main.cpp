#include <iostream>
#include <vector>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

void relatorioDeEncomendas(vector<Encomenda*> encomendas);

int main(){
	
	vector<Cliente> clientes;

	clientes.push_back(	
		Cliente (	"Thales",
					"Rua dos Pré-Socráticos",
					"Miletus",
					"Ionia",
					"548 a.C."	)
	);

	clientes.push_back(
		Cliente (	"Aristóteles",
					"Avenida do Meio-Termo",
					"Atenas",
					"Ática",
					"384 a.C."	)
	);

	clientes.push_back(
		Cliente (	"Platão",
					"Praça das Formas",
					"Atenas",
					"Ática",
					"348 a.C"	)
	);

	clientes.push_back(
		Cliente (	"Sócrates",
					"Rua do Elenchus",
					"Atenas",
					"Ática",
					"399 a.C."	)
	);

	clientes.push_back(
		Cliente (	"Pitágoras",
					"Praça dos Quadrados dos Catetos",
					"Samos",
					"Egeu",
					"571 a.C."	)
	);

	clientes.push_back(
		Cliente (	"Parmênides",
					"Rua do Não Ser",
					"Eleia",
					"Magna Grécia",
					"460 a.C."	)
	);

	clientes.push_back(
		Cliente (	"Empédocles",
					"Rua dos Quatro Elementos",
					"Agrigento",
					"Sicília",
					"495 a.C."	)
	);

	clientes.push_back(
		Cliente (	"Anaxágoras",
					"Avenida da Mente Cósmica",
					"Clazômenas",
					"Jónia",
					"499 a.C."	)
	);

	vector<Encomenda*> encomendas;


	encomendas.push_back(new EncomendaNormal 	( 5, 12, 	clientes[0], clientes[1]	)		);
	encomendas.push_back(new EncomendaNormal 	( 10, 12, 	clientes[1], clientes[2]	)		);
	encomendas.push_back(new EncomendaNormal 	( 7, 12, 	clientes[2], clientes[3]	)		);
	encomendas.push_back(new EncomendaNormal 	( 2, 12, 	clientes[3], clientes[4] 	)		);
	encomendas.push_back(new EncomendaNormal 	( 3, 12, 	clientes[4], clientes[5]	)		);
	encomendas.push_back(new EncomendaRelampago	( 13, 18, 	clientes[5], clientes[6]	)		);
	encomendas.push_back(new EncomendaRelampago	( 6, 18,	clientes[6], clientes[7]	)		);
	encomendas.push_back(new EncomendaRelampago	( 8, 18,	clientes[7], clientes[0]	)		);
	
	
	relatorioDeEncomendas( encomendas );
	
	
}

void relatorioDeEncomendas(vector<Encomenda*> encomendas){
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	for (auto e : encomendas ) {
		e->print();
		std::cout << endl;
	}

	std::cout 	<< "\n>> Encomendas Normais <<" 
				<< "\nQuantidade: " 	<< 	EncomendaNormal::contadorNormal
				<< "\nValor Total: " 	<< 	EncomendaNormal::custoNormalTotal
				<< endl
				<< "\n>> Encomendas Relâmpago <<" 
				<< "\nQuantidade: " 	<< 	EncomendaRelampago::contadorRelampago
				<< "\nValor Total: " 	<<	EncomendaRelampago::custoRelampagototal
				<< endl;
}