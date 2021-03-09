#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include <vector>
#include <memory> 

using namespace std;

int main(){
  
  	vector<Cliente> clientes;

	clientes.push_back(Cliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia","548 a.C."));
	clientes.push_back(Cliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática","384 a.C."));
	clientes.push_back(Cliente("Platão", "Praça das Formas", "Atenas", "Ática","348 a.C."));
	clientes.push_back(Cliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática","399 a.C."));
	clientes.push_back(Cliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu","571 a.C."));
	clientes.push_back(Cliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia","450 a.C."));
	clientes.push_back(Cliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília","495 a.C."));
	clientes.push_back(Cliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia","499 a.C."));

  	std::vector<unique_ptr<Encomenda>> encomendas;
 
	encomendas.push_back(make_unique<EncomendaNormal>(5, clientes[0], clientes[1]));
	encomendas.push_back(make_unique<EncomendaNormal>(10, clientes[1], clientes[2]));
	encomendas.push_back(make_unique<EncomendaNormal>(7, clientes[2], clientes[3]));
	encomendas.push_back(make_unique<EncomendaNormal>(2, clientes[3], clientes[4]));
	encomendas.push_back(make_unique<EncomendaNormal>(3, clientes[4], clientes[5]));
	encomendas.push_back(make_unique<EncomendaRelampago>(13, clientes[5], clientes[6]));
	encomendas.push_back(make_unique<EncomendaRelampago>(6, clientes[6], clientes[7]));
	encomendas.push_back(make_unique<EncomendaRelampago>(8, clientes[7], clientes[0]));	
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	int quantidadeEncomendasNormais = 0;
	int quantidadeEncomendasRelampago = 0;
	double somaCustosEncomendasNormais = 0;
	double somaCustosEncomendasRelampago = 0;

	for(int i = 0; i < encomendas.size(); i++){

		(*encomendas[i]).print();

   		 auto obj = encomendas[i].get();

		if(typeid(*obj) == typeid(EncomendaNormal)){

			quantidadeEncomendasNormais++;
			somaCustosEncomendasNormais += (*encomendas[i]).calcularCustoTotal();

		}else{

			quantidadeEncomendasRelampago++;
			somaCustosEncomendasRelampago += (*encomendas[i]).calcularCustoTotal();

		}

		std::cout << endl;

	}
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantidadeEncomendasNormais
		 << "\nValor Total: " << somaCustosEncomendasNormais
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantidadeEncomendasRelampago
		 << "\nValor Total: " << somaCustosEncomendasRelampago
		 << endl;
	
}