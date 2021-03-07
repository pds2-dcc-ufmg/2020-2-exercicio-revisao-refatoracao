#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){
	
	Cliente clienteThales = Cliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");

	Cliente clienteAristoteles = Cliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");

	Cliente clientePlatao = Cliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");

	Cliente clienteSocrates = Cliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");

	Cliente clientePitagoras = Cliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");

	Cliente clienteParmenides = Cliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");

	Cliente clienteEmpedocles = Cliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");

	Cliente clienteAnaxagoras = Cliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");

	int quantN = 0;
	int quantR = 0;

	EncomendaNormal encomenda0 = EncomendaNormal(5, 12, clienteThales, clienteAristoteles);
	quantN++;

	EncomendaNormal encomenda1 = EncomendaNormal(10, 12, clienteAristoteles, clientePlatao);
	quantN++;

	EncomendaNormal encomenda2 = EncomendaNormal(7, 12, clientePlatao, clienteSocrates);
	quantN++;

	EncomendaNormal encomenda3 = EncomendaNormal(2, 12, clienteSocrates, clientePitagoras);
	quantN++;

	EncomendaNormal encomenda4 = EncomendaNormal(3, 12, clientePitagoras, clienteParmenides);
	quantN++;

	EncomendaRelampago encomenda5 = EncomendaRelampago(13, 18, clienteParmenides, clienteEmpedocles);
	quantR++;

	EncomendaRelampago encomenda6 = EncomendaRelampago(6, 18, clienteEmpedocles, clienteAnaxagoras);
	quantR++;

	EncomendaRelampago encomenda7 = EncomendaRelampago(8, 18, clienteAnaxagoras, clienteThales);
	quantR++;
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0;
	double custR = 0;

	//encomenda0.calcula();
	encomenda0.print();
	custN += encomenda0.getCustoTotal();
	std::cout << endl;

	//encomenda1.calcula();
	encomenda1.print();
	custN += encomenda1.getCustoTotal();
	std::cout << endl;

	//encomenda2.calcula();
	encomenda2.print();
	custN += encomenda2.getCustoTotal();
	std::cout << endl;

	//encomenda3.calcula();
	encomenda3.print();
	custN += encomenda3.getCustoTotal();
	std::cout << endl;

	//encomenda4.calcula();
	encomenda4.print();
	custN += encomenda4.getCustoTotal();
	std::cout << endl;

	//encomenda5.calcula();
	encomenda5.print();
	custR += encomenda5.getCustoTotal();
	std::cout << endl;

	//encomenda6.calcula();
	encomenda6.print();
	custR += encomenda6.getCustoTotal();
	std::cout << endl;

	//encomenda7.calcula();
	encomenda7.print();
	custR += encomenda7.getCustoTotal();
	std::cout << endl;
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantN
		 << "\nValor Total: " << custN
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantR
		 << "\nValor Total: " << custR
		 << endl;
	
}