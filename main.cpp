#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "EncomendaEconomica.hpp"
#include "Cliente.hpp"

int main(){
	
	Cliente cliente0("Thales", "Rua dos Pré-Socráticos",  "Miletus", "Ionia", "548 a.C." );

	Cliente cliente1("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");

	Cliente cliente2("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");

	Cliente cliente3("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");

	Cliente cliente4("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");

	Cliente cliente5("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");

	Cliente cliente6("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");

	Cliente cliente7("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");


	int quantidadeEncomendasNormais = 0;
	int quantidadeEncomendasRelampago = 0;


	EncomendaNormal encomenda0(5, 12, cliente0, cliente1);
	quantidadeEncomendasNormais++;

	EncomendaNormal encomenda1(10, 12, cliente1, cliente2);
	quantidadeEncomendasNormais++;

	EncomendaNormal encomenda2(7, 12, cliente2, cliente3);
	quantidadeEncomendasNormais++;

	EncomendaNormal encomenda3(2, 12, cliente3, cliente4);
	quantidadeEncomendasNormais++;

	EncomendaNormal encomenda4(3, 12, cliente4, cliente5);
	quantidadeEncomendasNormais++;

	EncomendaRelampago encomenda5(13, 18, cliente5, cliente6);
	quantidadeEncomendasRelampago++;

	EncomendaRelampago encomenda6(6, 18, cliente6, cliente7);
	quantidadeEncomendasRelampago++;

	EncomendaRelampago encomenda7(8,18,cliente7, cliente0);
	quantidadeEncomendasRelampago++;
	
	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	double valorTotalEncomendasNormais = 0;
	double valorTotalEncomendasRelampago = 0;

	encomenda0.calcularPrecoEnvio();
	encomenda0.printDados();
	valorTotalEncomendasNormais += encomenda0.calcularPrecoEnvio();
	std::cout << std::endl;

	encomenda1.calcularPrecoEnvio();
	encomenda1.printDados();
	valorTotalEncomendasNormais += encomenda1.calcularPrecoEnvio();
	std::cout << std::endl;

	encomenda2.calcularPrecoEnvio();
	encomenda2.printDados();
	valorTotalEncomendasNormais += encomenda2.calcularPrecoEnvio();
	std::cout << std::endl;

	encomenda3.calcularPrecoEnvio();
	encomenda3.printDados();
	valorTotalEncomendasNormais += encomenda3.calcularPrecoEnvio();
	std::cout << std::endl;

	encomenda4.calcularPrecoEnvio();
	encomenda4.printDados();
	valorTotalEncomendasNormais += encomenda4.calcularPrecoEnvio();
	std::cout << std::endl;

	encomenda5.calcularPrecoEnvio();
	encomenda5.printDados();
	valorTotalEncomendasRelampago += encomenda5.calcularPrecoEnvio();
	std::cout << std::endl;

	encomenda6.calcularPrecoEnvio();
	encomenda6.printDados();
	valorTotalEncomendasRelampago += encomenda6.calcularPrecoEnvio();
	std::cout << std::endl;

	encomenda7.calcularPrecoEnvio();
	encomenda7.printDados();
	valorTotalEncomendasRelampago += encomenda7.calcularPrecoEnvio();
	std::cout << std::endl;
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantidadeEncomendasNormais
		 << "\nValor Total: " << valorTotalEncomendasNormais
		 << std::endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantidadeEncomendasRelampago
		 << "\nValor Total: " << valorTotalEncomendasRelampago
		 << std::endl;
	
}