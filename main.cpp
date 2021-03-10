#include <iostream>
#include "Encomendas.hpp"
#include "Cliente.hpp"

#include <vector>
#include <string>


int main(){

	Cliente cliente_0("Thales","Rua dos Pré-Socráticos","Miletus","Ionia","548 a.C.");
	Cliente cliente_1("Aristóteles","Avenida do Meio-Termo","Atenas","Ática","384 a.C.");
	Cliente cliente_2("Platão","Praça das Formas","Atenas","Ática","348 a.C");
	Cliente cliente_3("Sócrates","Rua do Elenchus","Atenas","Ática","399 a.C.");
	Cliente cliente_4("Pitágoras","Praça dos Quadrados dos Catetos","Samos","Egeu","571 a.C.");
	Cliente cliente_5("Parmênides","Rua do Não Ser","Eleia","Magna Grécia","460 a.C.");
	Cliente cliente_6("Empédocles","Rua dos Quatro Elementos","Agrigento","Sicília","495 a.C.");
	Cliente cliente_7("Anaxágoras","Avenida da Mente Cósmica","Clazômenas","Jónia","499 a.C.");

	std::vector<EncomendaNormal> encomendas_normais;
	EncomendaNormal encomenda_0(cliente_0, cliente_1, 5);
	encomendas_normais.push_back(encomenda_0);
	EncomendaNormal encomenda_1(cliente_1, cliente_2, 10);
	encomendas_normais.push_back(encomenda_1);
	EncomendaNormal encomenda_2(cliente_2, cliente_3, 7);
	encomendas_normais.push_back(encomenda_2);
	EncomendaNormal encomenda_3(cliente_3, cliente_4, 2);
	encomendas_normais.push_back(encomenda_3);
	EncomendaNormal encomenda_4(cliente_4, cliente_5, 3);
	encomendas_normais.push_back(encomenda_4);

	std::vector<EncomendaRelampago> encomendas_relampagos;
	EncomendaRelampago encomenda_5(cliente_5, cliente_6, 13);
	encomendas_relampagos.push_back(encomenda_5);
	EncomendaRelampago encomenda_6(cliente_6, cliente_7, 6);
	encomendas_relampagos.push_back(encomenda_6);
	EncomendaRelampago encomenda_7(cliente_7, cliente_0, 8);
	encomendas_relampagos.push_back(encomenda_7);
	
	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	int quantidade_de_encomendas_normais = 0;
	double custo_total_encomendas_normais = 0.0;
	for(EncomendaNormal elemento: encomendas_normais){
		elemento.imprimir_dados_da_entrega();
		quantidade_de_encomendas_normais ++;
		custo_total_encomendas_normais += elemento.get_custo_total();
	}

	int quantidade_de_encomendas_relampago= 0;
	double custo_total_encomendas_relampago = 0.0;
	for(EncomendaRelampago elemento: encomendas_relampagos){
		elemento.imprimir_dados_da_entrega();
		quantidade_de_encomendas_relampago ++;
		custo_total_encomendas_relampago += elemento.get_custo_total();
	}
	
	std::cout << std::endl;
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantidade_de_encomendas_normais
		 << "\nValor Total: " << custo_total_encomendas_normais
		 << std::endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantidade_de_encomendas_relampago
		 << "\nValor Total: " << custo_total_encomendas_relampago
		 << std::endl;
	
}