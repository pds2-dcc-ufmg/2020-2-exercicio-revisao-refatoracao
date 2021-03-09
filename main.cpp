#include <iostream>
#include <vector>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

int main(){
	//Declaração de clientes

	Cliente cliente0("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");
	
	Cliente cliente1("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");
	
	Cliente cliente2("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");
	
	Cliente cliente3("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");
	
	Cliente cliente4("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");
	
	Cliente cliente5("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");

	Cliente cliente6("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");
	
	Cliente cliente7("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");

	std::vector<EncomendaNormal> encom_normais;
	std::vector<EncomendaRelampago> encom_relampago;

	//Declaração encomendas

	EncomendaNormal encom0(5, 12, cliente0, cliente1);
	encom_normais.push_back(encom0);

	EncomendaNormal encom1(10, 12, cliente1, cliente2);
	encom_normais.push_back(encom1);

	EncomendaNormal encom2(7, 12, cliente2, cliente3);
	encom_normais.push_back(encom2);

	EncomendaNormal encom3(2, 12, cliente3, cliente4);
	encom_normais.push_back(encom3);

	EncomendaNormal encom4(3, 12, cliente4, cliente5);
	encom_normais.push_back(encom4);

	EncomendaRelampago encom5(13, 18,cliente5, cliente6);
	encom_relampago.push_back(encom5);

	EncomendaRelampago encom6(6, 18, cliente6, cliente7);
	encom_relampago.push_back(encom6);

	EncomendaRelampago encom7(8, 18, cliente7, cliente0);
	encom_relampago.push_back(encom7);
	
	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	double custo_encom_normal = 0;
	double custo_encom_relampago = 0;

	for(auto encomenda : encom_normais) {
		encomenda.print_encom();
		std::cout << std::endl;
		custo_encom_normal += encomenda.calcula();
	}

	for(auto encomenda : encom_relampago) {
		encomenda.print_encom();
		std::cout << std::endl;
		custo_encom_relampago += encomenda.calcula();
	}
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << encom_normais.size()
		 << "\nValor Total: " << custo_encom_normal
		 << std::endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << encom_relampago.size()
		 << "\nValor Total: " << custo_encom_relampago
		 << std::endl;
	
}