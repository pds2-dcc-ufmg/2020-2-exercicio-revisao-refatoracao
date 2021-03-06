#include <iostream>

#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

using namespace std;

int main() {
	
	Cliente cliente0 = Cliente("Thales","Rua dos Pré-Socráticos","Miletus","Ionia","548 a.C.");

	Cliente cliente1 = Cliente("Aristóteles","Avenida do Meio-Termo","Atenas","Ática","384 a.C.");

	Cliente cliente2 = Cliente("Platão","Praça das Formas","Atenas","Ática","348 a.C");

	Cliente cliente3 = Cliente("Sócrates","Rua do Elenchus","Atenas","Ática","399 a.C.");

	Cliente cliente4 = Cliente("Pitágoras","Praça dos Quadrados dos Catetos","Samos","Egeu","571 a.C.");

	Cliente cliente5 = Cliente("Parmênides","Rua do Não Ser","Eleia","Magna Grécia","460 a.C.");

	Cliente cliente6 = Cliente("Empédocles","Rua dos Quatro Elementos","Agrigento","Sicília","495 a.C.");

	Cliente cliente7 = Cliente("Anaxágoras","Avenida da Mente Cósmica","Clazômenas","Jónia","499 a.C.");

	int quantN = 0;
	int quantR = 0;

	EncomendaNormal encomenda0;
	encomenda0.peso = 5;
	encomenda0.custoEmKg = 12;
	encomenda0.remetente = cliente0;
	encomenda0.destinatario = cliente1;
	quantN++;

	EncomendaNormal encomenda1;
	encomenda1.peso = 10;
	encomenda1.custoEmKg = 12;
	encomenda1.remetente = cliente1;
	encomenda1.destinatario = cliente2;
	quantN++;

	EncomendaNormal encomenda2;
	encomenda2.peso = 7;
	encomenda2.custoEmKg = 12;
	encomenda2.remetente = cliente2;
	encomenda2.destinatario = cliente3;
	quantN++;

	EncomendaNormal encomenda3;
	encomenda3.peso = 2;
	encomenda3.custoEmKg = 12;
	encomenda3.remetente = cliente3;
	encomenda3.destinatario = cliente4;
	quantN++;

	EncomendaNormal encomenda4;
	encomenda4.peso = 3;
	encomenda4.custoEmKg = 12;
	encomenda4.remetente = cliente4;
	encomenda4.destinatario = cliente5;
	quantN++;

	EncomendaRelampago encomenda5;
	encomenda5.peso = 13;
	encomenda5.custoEmKg = 18;
	encomenda5.remetente = cliente5;
	encomenda5.destinatario = cliente6;
	quantR++;

	EncomendaRelampago encomenda6;
	encomenda6.peso = 6;
	encomenda6.custoEmKg = 18;
	encomenda6.remetente = cliente6;
	encomenda6.destinatario = cliente7;
	quantR++;

	EncomendaRelampago encomenda7;
	encomenda7.peso = 8;
	encomenda7.custoEmKg = 18;
	encomenda7.remetente = cliente7;
	encomenda7.destinatario = cliente0;
	quantR++;
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0;
	double custR = 0;

	encomenda0.calculaCustoTotal();
	encomenda0.imprimeDados();
	custN += encomenda0.calculaCustoTotal();
	std::cout << endl;

	encomenda1.calculaCustoTotal();
	encomenda1.imprimeDados();
	custN += encomenda1.calculaCustoTotal();
	std::cout << endl;

	encomenda2.calculaCustoTotal();
	encomenda2.imprimeDados();
	custN += encomenda2.calculaCustoTotal();
	std::cout << endl;

	encomenda3.calculaCustoTotal();
	encomenda3.imprimeDados();
	custN += encomenda3.calculaCustoTotal();
	std::cout << endl;

	encomenda4.calculaCustoTotal();
	encomenda4.imprimeDados();
	custN += encomenda4.calculaCustoTotal();
	std::cout << endl;

	encomenda5.calculaCustoTotal();
	encomenda5.imprimeDados();
	custR += encomenda5.calculaCustoTotal();
	std::cout << endl;

	encomenda6.calculaCustoTotal();
	encomenda6.imprimeDados();
	custR += encomenda6.calculaCustoTotal();
	std::cout << endl;

	encomenda7.calculaCustoTotal();
	encomenda7.imprimeDados();
	custR += encomenda7.calculaCustoTotal();
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
