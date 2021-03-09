#include <iostream>
#include "Cliente.hpp"
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"


int main(){
	
	Cliente cliente0("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");
	Cliente cliente1("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");
	Cliente cliente2("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");
	Cliente cliente3("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");
	Cliente cliente4("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");
	Cliente cliente5("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");
	Cliente cliente6("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");
	Cliente cliente7("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");

	int quantidadeEncomendasNormais = 0;
	int quantidadeEncomendasRelampagos = 0;

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
	quantidadeEncomendasRelampagos++;

	EncomendaRelampago encomenda6(6, 18, cliente6, cliente7);
	quantidadeEncomendasRelampagos++;

	EncomendaRelampago encomenda7(8, 18, cliente7, cliente0);
	quantidadeEncomendasRelampagos++;
	
	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	double custoEncomendasNormais = 0;
	double custoEncomendasRelampagos = 0;

	encomenda0.imprimeEncomenda();
	custoEncomendasNormais += encomenda0.calculaCustoTotal();
	std::cout << std::endl;

	encomenda1.imprimeEncomenda();
	custoEncomendasNormais += encomenda1.calculaCustoTotal();
	std::cout << std::endl;

	encomenda2.imprimeEncomenda();
	custoEncomendasNormais += encomenda2.calculaCustoTotal();
	std::cout << std::endl;

	encomenda3.imprimeEncomenda();
	custoEncomendasNormais += encomenda3.calculaCustoTotal();
	std::cout << std::endl;

	encomenda4.imprimeEncomenda();
	custoEncomendasNormais += encomenda4.calculaCustoTotal();
	std::cout << std::endl;

	encomenda5.imprimeEncomenda();
	custoEncomendasRelampagos += encomenda5.calculaCustoTotal();
	std::cout << std::endl;

	encomenda6.imprimeEncomenda();
	custoEncomendasRelampagos += encomenda6.calculaCustoTotal();
	std::cout << std::endl;

	encomenda7.imprimeEncomenda();
	custoEncomendasRelampagos += encomenda7.calculaCustoTotal();
	std::cout << std::endl;
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantidadeEncomendasNormais
		 << "\nValor Total: " << custoEncomendasNormais
		 << std::endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantidadeEncomendasRelampagos
		 << "\nValor Total: " << custoEncomendasRelampagos
		 << std::endl;
	
}