#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include <vector>

int main(){

    	Cliente cliente0("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");
	Cliente cliente1("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");
	Cliente cliente2("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");
	Cliente cliente3("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");
	Cliente cliente4("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");
	Cliente cliente5("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");
	Cliente cliente6("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");
	Cliente cliente7("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");

	int quantidadeNormal = 0;
	int quantidadeRelampago = 0;

	EncomendaNormal encomenda0;
	encomenda0.peso = 5;
	encomenda0.custoKg = 12;
	encomenda0.remetente = cliente0;
	encomenda0.destinatario = cliente1;
	quantidadeNormal++;

	EncomendaNormal encomenda1;
	encomenda1.peso = 10;
	encomenda1.custoKg = 12;
	encomenda1.remetente = cliente1;
	encomenda1.destinatario = cliente2;
	quantidadeNormal++;

	EncomendaNormal encomenda2;
	encomenda2.peso = 7;
	encomenda2.custoKg = 12;
	encomenda2.remetente = cliente2;
	encomenda2.destinatario = cliente3;
	quantidadeNormal++;

	EncomendaNormal encomenda3;
	encomenda3.peso = 2;
	encomenda3.custoKg = 12;
	encomenda3.remetente = cliente3;
	encomenda3.destinatario = cliente4;
	quantidadeNormal++;

	EncomendaNormal encomenda4;
	encomenda4.peso = 3;
	encomenda4.custoKg = 12;
	encomenda4.remetente = cliente4;
	encomenda4.destinatario = cliente5;
	quantidadeNormal++;

	EncomendaRelampago encomenda5;
	encomenda5.peso = 13;
	encomenda5.custoKg = 18;
	encomenda5.remetente = cliente5;
	encomenda5.destinatario = cliente6;
	quantidadeRelampago++;

	EncomendaRelampago encomenda6;
	encomenda6.peso = 6;
	encomenda6.custoKg = 18;
	encomenda6.remetente = cliente6;
	encomenda6.destinatario = cliente7;
	quantidadeRelampago++;

	EncomendaRelampago encomenda7;
	encomenda7.peso = 8;
	encomenda7.custoKg = 18;
	encomenda7.remetente = cliente7;
	encomenda7.destinatario = cliente0;
	quantidadeRelampago++;

	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	double custoNormal = 0;
	double custoRelampago = 0;

	encomenda0.calcula();
	encomenda0.print();
	custoNormal += encomenda0.calcula();
	std::cout << std::endl;

	encomenda1.calcula();
	encomenda1.print();
	custoNormal += encomenda1.calcula();
	std::cout << std::endl;

	encomenda2.calcula();
	encomenda2.print();
	custoNormal += encomenda2.calcula();
	std::cout << std::endl;

	encomenda3.calcula();
	encomenda3.print();
	custoNormal += encomenda3.calcula();
	std::cout << std::endl;

	encomenda4.calcula();
	encomenda4.print();
	custoNormal += encomenda4.calcula();
	std::cout << std::endl;

	encomenda5.calcula();
	encomenda5.print();
	custoRelampago += encomenda5.calcula();
	std::cout << std::endl;

	encomenda6.calcula();
	encomenda6.print();
	custoRelampago += encomenda6.calcula();
	std::cout << std::endl;

	encomenda7.calcula();
	encomenda7.print();
	custoRelampago += encomenda7.calcula();
	std::cout << std::endl;

	std::cout << "\n>> Encomendas Normais <<"
		      << "\nQuantidade: " << quantidadeNormal
		      << "\nValor Total: " << custoNormal
		      << std::endl
		      << "\n>> Encomendas Relâmpago <<"
		      << "\nQuantidade: " << quantidadeRelampago
		      << "\nValor Total: " << custoRelampago
		      <<std::endl;

}
