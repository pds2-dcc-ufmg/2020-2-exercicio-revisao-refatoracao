#include <iostream>
#include <string>
#include <vector>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

using namespace std;

int main(){

    vector< Cliente > clientes;

	clientes.push_back( Cliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.") );
	clientes.push_back( Cliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.") );
	clientes.push_back( Cliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C") );	
	clientes.push_back( Cliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.") );
	clientes.push_back( Cliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.") );
	clientes.push_back( Cliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.") );
	clientes.push_back( Cliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.") );
	clientes.push_back( Cliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.") );

	int quantN = 0;
	int quantR = 0;

    vector< EncomendaNormal > encomendas;	

	encomendas.push_back( EncomendaNormal(5, 12, clientes[0], clientes[1]) );
	quantN++;

	encomendas.push_back( EncomendaNormal(10, 12, clientes[1], clientes[2]) );
	quantN++;

	encomendas.push_back( EncomendaNormal(7, 12, clientes[2], clientes[3]) );
	quantN++;

	encomendas.push_back( EncomendaNormal(2, 12, clientes[3], clientes[4]) );
	quantN++;

	encomendas.push_back( EncomendaNormal(3, 12, clientes[4], clientes[5]) );
	quantN++;

	encomendas.push_back( EncomendaNormal(13, 18, clientes[5], clientes[6]) );
	quantR++;

	encomendas.push_back( EncomendaNormal(6, 18, clientes[6], clientes[7]) );
	quantR++;

	encomendas.push_back( EncomendaNormal(8, 18, clientes[7], clientes[0]) );
	quantR++;
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0;
	double custR = 0;

    for( int i=0; i <=7; ++i ) {
	    encomendas.at(i).calcula();
	    encomendas.at(i).print();
	    custN += encomendas.at(i).calcula();
	    std::cout << endl;
	}



	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantN
		 << "\nValor Total: " << custN
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantR
		 << "\nValor Total: " << custR
		 << endl;
	
}