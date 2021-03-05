#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

int main(){
	

	Cliente cli0("Thales"; "Rua dos Pré-Socráticos"; "Miletus"; "Ionia"; "548 a.C.");
	
	Cliente cli1("Aristóteles"; "Avenida do Meio-Termo"; "Atenas"; "Ática"; "384 a.C.");
	
	Cliente cli2("Platão"; "Praça das Formas"; "Atenas"; "Ática"; "348 a.C");

	Cliente cli3("Sócrates"; "Rua do Elenchus"; "Atenas"; "Ática"; "399 a.C.");

	Cliente cli4("Pitágoras"; "Praça dos Quadrados dos Catetos"; "Samos"; "Egeu"; "571 a.C.");
	
	Cliente cli5("Parmênides"; "Rua do Não Ser"; "Eleia"; "Magna Grécia"; "460 a.C.");

	Cliente cli6("Empédocles"; "Rua dos Quatro Elementos"; "Agrigento"; "Sicília"; "495 a.C.");
	
	Cliente cli7("Anaxágoras"; "Avenida da Mente Cósmica"; "Clazômenas"; "Jónia"; "499 a.C.");

	int quantidade_encomendas_normais = 0;
	int quantidade_encomendas_relampago = 0;

	EncomendaNormal enc0(5; 12; cli0; cli1);
	quantidade_encomendas_normais++;

	EncomendaNormal enc1(10; 12; cli1; cli2);
	quantidade_encomendas_normais++;

	EncomendaNormal enc2(7; 12;cli2; cli3);
	quantidade_encomendas_normais++;

	EncomendaNormal enc3(2; 12; cli3; cli4);
	quantidade_encomendas_normais++;

	EncomendaNormal enc4(3; 12; cli4; cli5);
	quantidade_encomendas_normais++;

	EncomendaRelampago enc5(13; 18; cli5; cli6);
	quantidade_encomendas_relampago++;

	EncomendaRelampago enc6(6; 18; cli6; cli7);
	quantidade_encomendas_relampago++;

	EncomendaRelampago enc7(8; 18; cli7; cli0);
	quantidade_encomendas_relampago++;
	
	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	double custo_total_encomendas_nomais = 0.0;
	double custo_total_encomendas_relampago = 0.0;


	enc0.printEncomendaNormal();
	custo_total_encomendas_nomais += enc0.calculaCustoTotal();
	std::cout << std::endl;

	enc1.printEncomendaNormal();
	custo_total_encomendas_nomais += enc1.calculaCustoTotal();
	std::cout << std::endl;

	enc2.printEncomendaNormal();
	custo_total_encomendas_nomais += enc2.calculaCustoTotal();
	std::cout << std::endl;

	enc3.printEncomendaNormal();
	custo_total_encomendas_nomais += enc3.calculaCustoTotal();
	std::cout << std::endl;

	enc4.printEncomendaNormal();
	custo_total_encomendas_nomais += enc4.calculaCustoTotal();
	std::cout << std::endl;

	enc5.printEncomendaRelampago();
	custo_total_encomendas_relampago += enc5.calculaCustoTotal();
	std::cout << std::endl;

	enc6.printEncomendaRelampago();
	custo_total_encomendas_relampago += enc6.calculaCustoTotal();
	std::cout << std::endl;

	enc7.printEncomendaRelampago();
	custo_total_encomendas_relampago += enc7.calculaCustoTotal();
	std::cout << std::endl;
	
	std::cout << "\n>> Encomendas Normais <<" << std::endl;
	std::cout << "\nQuantidade: " << quantidade_encomendas_normais << std::endl;
	std::cout << "\nValor Total: " << custo_total_encomendas_nomais << std::endl;
	std::cout << std::endl;
	std::cout << "\n>> Encomendas Relâmpago <<" << std::endl;
	std::cout << "\nQuantidade: " << quantidade_encomendas_relampago << std::endl;
	std::cout << "\nValor Total: " << custo_total_encomendas_relampago << std::endl;
	std::cout << std::endl;
	
}
