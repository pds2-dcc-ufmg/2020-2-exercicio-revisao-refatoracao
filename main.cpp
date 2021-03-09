#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include <vector>

using namespace std;

// soma os precos de cada encomenda normal no custo total
void calculaCustoN(double *custoN, EncomendaNormal encN) {

	*custoN += encN.calcula();
	std::cout << endl;
}

// soma os precos de cada encomenda relampago no custo total
void calculaCustoR(double *custoR, EncomendaRelampago encR) {

	*custoR += encR.calcula();
	std::cout << endl;
}

// calcula o preco de cada encomenda normal, printa suas especificacoes, e depois incrementa o custo total
void relatorioNormal(double *custoN, std::vector<EncomendaNormal> encsN) {

	for(EncomendaNormal encN: encsN) {
		encN.processaEnc();
		calculaCustoN(custoN, encN);
	}
}

// calcula o preco de cada encomenda relamp, printa suas especificacoes, e depois incrementa o custo total
void relatorioRelampago(double *custoR, std::vector<EncomendaRelampago> encsR) {

	for(EncomendaRelampago encR: encsR) {
		encR.processaEnc();
		calculaCustoR(custoR, encR);
	}
}


int main(){
	
	// criando cada cliente

	Cliente cli0("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");

	Cliente cli1("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");

	Cliente cli2("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C.");

	Cliente cli3("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");

	Cliente cli4("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C");

	Cliente cli5("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");

	Cliente cli6("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");

	Cliente cli7("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");

	// criar e guardar todas as encomendas normais em um vetor e todas as relampago em outro

	std::vector<EncomendaNormal> normais;
	std::vector<EncomendaRelampago> relampagos;

	EncomendaNormal enc0(5, 12, cli0, cli1);
	normais.push_back(enc0);

	EncomendaNormal enc1(10, 12, cli1, cli2);
	normais.push_back(enc1);

	EncomendaNormal enc2(7, 12, cli2, cli3);
	normais.push_back(enc2);

	EncomendaNormal enc3(2, 12, cli3, cli4);
	normais.push_back(enc3);

	EncomendaNormal enc4(3, 12, cli4, cli5);
	normais.push_back(enc4);

	EncomendaRelampago enc5(13, 18, cli5, cli6);
	relampagos.push_back(enc5);

	EncomendaRelampago enc6(6, 18, cli6, cli7);
	relampagos.push_back(enc6);

	EncomendaRelampago enc7(8, 18, cli7, cli0);
	relampagos.push_back(enc7);
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double *custN = new double;
	*custN = 0.0;
	double *custR = new double;
	*custR = 0.0;

	// gerar os relatorios de cada tipo de encomenda
	
	relatorioNormal(custN, normais);

	relatorioRelampago(custR, relampagos);
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << normais.size()
		 << "\nValor Total: " << *custN
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << relampagos.size()
		 << "\nValor Total: " << *custR
		 << endl;

	delete custN;
	delete custR;	
}