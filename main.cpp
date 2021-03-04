#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include <vector>
using namespace std;

int main(){
	
	Cliente cliente0("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");
	Cliente cliente1("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");
	Cliente cliente2("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");
	Cliente cliente3("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");
	Cliente cliente4("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");
	Cliente cliente5("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");
	Cliente cliente6("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");
	Cliente cliente7("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");

	int quantEncNorm = 0;
	int quantEncRel = 0;

	std::vector<EncomendaNormal> encomendasNorm;
	std::vector<EncomendaRelampago> encomendasRel;

	EncomendaNormal encNorm0(5, 12, cliente0, cliente1);
	encomendasNorm.push_back(encNorm0);
	quantEncNorm++;

	EncomendaNormal encNorm1(10, 12, cliente1, cliente2);
	encomendasNorm.push_back(encNorm1);
	quantEncNorm++;

	EncomendaNormal encNorm2(7, 12, cliente2, cliente3);
	encomendasNorm.push_back(encNorm2);
	quantEncNorm++;

	EncomendaNormal encNorm3(2, 12, cliente3, cliente4);
	encomendasNorm.push_back(encNorm3);
	quantEncNorm++;

	EncomendaNormal encNorm4(3, 12, cliente4, cliente5);
	encomendasNorm.push_back(encNorm4);
	quantEncNorm++;

	EncomendaRelampago encRel0(13, 18, cliente5, cliente6);
	encomendasRel.push_back(encRel0);
	quantEncRel++;

	EncomendaRelampago encRel1(6, 18, cliente6, cliente7);
	encomendasRel.push_back(encRel1);
	quantEncRel++;

	EncomendaRelampago encRel2(8, 18, cliente7, cliente0);
	encomendasRel.push_back(encRel2);
	quantEncRel++;
	
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custoEncNorm = 0;
	double custoEncRel = 0;

	for(int i = 0; i < quantEncNorm; i++) {
		encomendasNorm[i].print();
		custoEncNorm += encomendasNorm[i].calculaCustoTotal();
		std::cout << endl;
	}
	for(int i = 0; i < quantEncRel; i++) {
		encomendasRel[i].print();
		custoEncRel += encomendasRel[i].calculaCustoTotal();
		std::cout << endl;
	}
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantEncNorm
		 << "\nValor Total: " << custoEncNorm
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantEncRel
		 << "\nValor Total: " << custoEncRel
		 << endl;
	
}