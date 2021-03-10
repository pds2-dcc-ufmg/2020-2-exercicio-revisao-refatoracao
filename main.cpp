#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

int main(){
	
	Cliente cliente0;
	cliente0.registroCliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");

	Cliente cliente1;
	cliente1.registroCliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");

	Cliente cliente2;
	cliente2.registroCliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");
	
	Cliente cliente3;
	cliente3.registroCliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");
		
	Cliente cliente4;
	cliente4.registroCliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");

	Cliente cliente5;
	cliente4.registroCliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");

	Cliente cliente6;
	cliente6.registroCliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");

	Cliente cliente7;
	cliente7.registroCliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");

	int quantN = 0;
	int quantR = 0;

	EncomendaNormal encomenda0;
	encomenda0.peso = 5;
	encomenda0.custoKG = 12;
	encomenda0.remetente = cli0;
	encomenda0.destinatario = cli1;
	quantidadeNormal++;

	EncomendaNormal encomenda1;
	encomenda1.peso = 10;
	encomenda1.custoKG = 12;
	encomenda1.remetente = cli1;
	encomenda1.destinatario = cli2;
	quantidadeNormal++;

	EncomendaNormal encomenda2;
	encomenda2.peso = 7;
	encomenda2.custoKG = 12;
	encomenda2.remetente = cli2;
	encomenda2.destinatario = cli3;
	quantidadeNormal++;

	EncomendaNormal encomenda3;
	encomenda3.peso = 2;
	encomenda3.custoKG = 12;
	encomenda3.remetente = cli3;
	encomenda3.destinatario = cli4;
	quantidadeNormal++;

	EncomendaNormal encomenda4;
	encomenda4.peso = 3;
	encomenda4.custoKG = 12;
	encomenda4.remetente = cli4;
	encomenda4.destinatario = cli5;
	quantidadeNormal++;

	EncomendaRelampago encomenda5;
	encomenda5.peso = 13;
	encomenda5.custoKG = 18;
	encomenda5.remetente = cli5;
	encomenda5.destinatario = cli6;
	quantidadeRelampago++;

	EncomendaRelampago encomenda6;
	encomenda6.peso = 6;
	encomenda6.custoKG = 18;
	encomenda6.remetente = cli6;
	encomenda6.destinatario = cli7;
	quantidadeRelampago++;

	EncomendaRelampago encomenda7;
	encomenda7.peso = 8;
	encomenda7.custoKG = 18;
	encomenda7.remetente = cli7;
	encomenda7.destinatario = cli0;
	quantidadeRelampago++;
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custoNormal = 0;
	double custoRelampago = 0;

	encomenda0.calcula();
	encomenda0.print();
	custoNormal += encomenda0.calcula();
	std::cout << endl;

	encomenda1.calcula();
	encomenda1.print();
	custoNormal += encomenda1.calcula();
	std::cout << endl;

	encomenda2.calcula();
	encomenda2.print();
	custoNormal += encomenda2.calcula();
	std::cout << endl;

	encomenda3.calcula();
	encomenda3.print();
	custoNormal += encomenda3.calcula();
	std::cout << endl;

	encomenda4.calcula();
	encomenda4.print();
	custoNormal += encomenda4.calcula();
	std::cout << endl;

	encomenda5.calcula();
	encomenda5.print();
	custoRelampago += encomenda5.calcula();
	std::cout << endl;

	encomenda6.calcula();
	encomenda6.print();
	custoRelampago += encomenda6.calcula();
	std::cout << endl;

	encomenda7.calcula();
	encomenda7.print();
	custoRelampago += encomenda7.calcula();
	std::cout << endl;
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantidadeNormal
		 << "\nValor Total: " << custoNormal
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantidadeRelampago
		 << "\nValor Total: " << custoRelampago
		 << endl;
	
}
