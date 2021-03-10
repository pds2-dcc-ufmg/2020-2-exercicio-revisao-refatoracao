#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include <vector>


int main(){
	
	
	double custoTotalNormais = 0;
	double custoTotalRelampago = 0;
	int quantidadeEncomendasNormais = 0;
	int quantidadeEncomendasRelampago = 0;

	std::vector<EncomendaNormal> encomendasNormais;
	std::vector<EncomendaRelampago> encomendasRelampago;

	Cliente cli0("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");
	Cliente cli1("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");
	Cliente cli2("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");
	Cliente cli3("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");
	Cliente cli4("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");
	Cliente cli5("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");
	Cliente cli6("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");
	Cliente cli7("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");

	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	encomendasNormais.push_back(EncomendaNormal(5, 12, cli0, cli1));
	encomendasNormais.push_back(EncomendaNormal(10, 12, cli1, cli2));
	encomendasNormais.push_back(EncomendaNormal(7, 12, cli2, cli3));
	encomendasNormais.push_back(EncomendaNormal(2, 12, cli3, cli4));
	encomendasNormais.push_back(EncomendaNormal(3, 12, cli4, cli5));
	encomendasRelampago.push_back(EncomendaRelampago(13, 18, cli5, cli6));
	encomendasRelampago.push_back(EncomendaRelampago(6, 18, cli6, cli7));
	encomendasRelampago.push_back(EncomendaRelampago(8, 18, cli7, cli0));

	for(EncomendaNormal encomenda : encomendasNormais){
		encomenda.print();
		custoTotalNormais += encomenda.calculaValorFinal();
		std::cout << std::endl;
	}

	for(EncomendaRelampago encomenda : encomendasRelampago){
		encomenda.print();
		custoTotalRelampago += encomenda.calculaValorFinal();
		std::cout << std::endl;
	}
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << encomendasNormais.size()
		 << "\nValor Total: " << custoTotalNormais
		 << std::endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << encomendasRelampago.size()
		 << "\nValor Total: " << custoTotalRelampago
		 << std::endl;
}