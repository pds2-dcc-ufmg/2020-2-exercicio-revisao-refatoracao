#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include <vector>

int main(){

	Cliente cli0("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");

	Cliente cli1("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");

	Cliente cli2("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");

	Cliente cli3("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");

	Cliente cli4("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");

	Cliente cli5("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");

	Cliente cli6("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");

	Cliente cli7("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");

	int quantidadeNormal = 0;
	int quantidadeRelampago = 0;

	std::vector<EncomendaNormal> EncomendasNormais;
	std::vector<EncomendaRelampago> EncomendasRelampago;

	EncomendaNormal enc0(5, 12, cli0, cli1);
	quantidadeNormal++;
	EncomendasNormais.push_back(enc0);

	EncomendaNormal enc1(10, 12, cli1, cli2);
	quantidadeNormal++;
	EncomendasNormais.push_back(enc1);

	EncomendaNormal enc2(7, 12, cli2, cli3);
	quantidadeNormal++;
	EncomendasNormais.push_back(enc2);

	EncomendaNormal enc3(2, 12, cli3, cli4);
	quantidadeNormal++;
	EncomendasNormais.push_back(enc3);

	EncomendaNormal enc4(3, 12, cli4, cli5);
	quantidadeNormal++;
	EncomendasNormais.push_back(enc4);

	EncomendaRelampago enc5(13, 18, cli5, cli6);
	quantidadeRelampago++;
	EncomendasRelampago.push_back(enc5);

	EncomendaRelampago enc6(6, 18, cli6, cli7);
	quantidadeRelampago++;
	EncomendasRelampago.push_back(enc6);

	EncomendaRelampago enc7(8, 18, cli7, cli0);
	quantidadeRelampago++;
	EncomendasRelampago.push_back(enc7);

	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	double custoNormal = 0;
	double custoRelampago = 0;

	for(int i = 0; i < quantidadeNormal; i++){
		EncomendasNormais[i].calcula();
		EncomendasNormais[i].print();
		custoNormal += EncomendasNormais[i].calcula();
		std::cout << std::endl;
	}

	for(int i = 0; i < quantidadeRelampago; i++){
		EncomendasRelampago[i].calcula();
		EncomendasRelampago[i].print();
		custoRelampago += EncomendasRelampago[i].calcula();
		std::cout << std::endl;
	}

	std::cout << "\n>> Encomendas Normais <<" 
	<< "\nQuantidade: " << quantidadeNormal
	<< "\nValor Total: " << custoNormal
	<< std::endl
	<< "\n>> Encomendas Relâmpago <<" 
	<< "\nQuantidade: " << quantidadeRelampago
	<< "\nValor Total: " << custoRelampago
	<< std::endl;

}
