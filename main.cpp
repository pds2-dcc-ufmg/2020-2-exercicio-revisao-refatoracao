#include <iostream>

#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include "RelatorioEncomendas.hpp"

int main(){
	
	// Cadastro de clientes
	Cliente cliente_0("Thales", "Rua dos Pré-Socráticos", "Miletus",
				 	  "Ionia", "548 a.C.");

	Cliente cliente_1("Aristóteles", "Avenida do Meio-Termo", "Atenas",
				 	  "Ática", "384 a.C.");

	Cliente cliente_2("Platão", "Praça das Formas", "Atenas", "Ática",
				 	  "348 a.C");

	Cliente cliente_3("Sócrates", "Rua do Elenchus", "Atenas",
				 	  "Ática", "399 a.C.");

	Cliente cliente_4("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos",
				 	  "Egeu", "571 a.C.");

	Cliente cliente_5("Parmênides", "Rua do Não Ser", "Eleia",
				 	  "Magna Grécia","460 a.C.") ;

	Cliente cliente_6("Empédocles", "Rua dos Quatro Elementos", "Agrigento",
				 	  "Sicília", "495 a.C.");

	Cliente cliente_7("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas",
				 	  "Jónia", "499 a.C.");


	RelatorioEncomendas relatorio_encomendas;

	// Cadastro de encomendas	
	relatorio_encomendas.cadastra_encomenda_normal(5, cliente_0, cliente_1);
	relatorio_encomendas.cadastra_encomenda_normal(10, cliente_1, cliente_2);
	relatorio_encomendas.cadastra_encomenda_normal(7, cliente_2, cliente_3);
	relatorio_encomendas.cadastra_encomenda_normal(2, cliente_3, cliente_4);
	relatorio_encomendas.cadastra_encomenda_normal(3, cliente_4, cliente_5);
	relatorio_encomendas.cadastra_encomenda_relampago(13, cliente_5, cliente_6);
	relatorio_encomendas.cadastra_encomenda_relampago(6, cliente_6, cliente_7);
	relatorio_encomendas.cadastra_encomenda_relampago(8, cliente_7, cliente_0);

	// Calcula custos totais e imprime relatório completo de encomendas
	relatorio_encomendas.gera_relatorio();
	
}