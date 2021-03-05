#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

int main(){

	//Declaração dos clientes, usando o construtor da classe Cliente
	
	Cliente cli0("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");

	Cliente cli1("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");

	Cliente cli2("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");

	Cliente cli3("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");

	Cliente cli4("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");

	Cliente cli5("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");

	Cliente cli6("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");

	Cliente cli7("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");

	int quant_enc_normais = 0;
	int quant_enc_relamp = 0;

	//Declaração das encomendas, usando o construtor da classe Encomenda

	EncomendaNormal enc0(5, 12, cli0, cli1);
	quant_enc_normais++;

	EncomendaNormal enc1(10, 12, cli1, cli2);
	quant_enc_normais++;

	EncomendaNormal enc2(7, 12, cli2, cli3);
	quant_enc_normais++;

	EncomendaNormal enc3(2, 12, cli3, cli4);
	quant_enc_normais++;

	EncomendaNormal enc4(3, 12, cli4, cli5);
	quant_enc_normais++;

	EncomendaRelampago enc5(13, 18, cli5, cli6);
	quant_enc_relamp++;

	EncomendaRelampago enc6(6, 18, cli6, cli7);
	quant_enc_relamp++;

	EncomendaRelampago enc7(8, 18, cli7, cli0);
	quant_enc_relamp++;
	
	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	double custo_enc_normal = 0;
	double custo_enc_relamp = 0;

	enc0.calcula_custo_total();
	enc0.print_enc_normal();
	custo_enc_normal += enc0.calcula_custo_total();
	std::cout << std::endl;

	enc1.calcula_custo_total();
	enc1.print_enc_normal();
	custo_enc_normal += enc1.calcula_custo_total();
	std::cout << std::endl;

	enc2.calcula_custo_total();
	enc2.print_enc_normal();
	custo_enc_normal += enc2.calcula_custo_total();
	std::cout << std::endl;

	enc3.calcula_custo_total();
	enc3.print_enc_normal();
	custo_enc_normal += enc3.calcula_custo_total();
	std::cout << std::endl;

	enc4.calcula_custo_total();
	enc4.print_enc_normal();
	custo_enc_normal += enc4.calcula_custo_total();
	std::cout << std::endl;

	enc5.calcula_custo_total();
	enc5.print_enc_relamp();
	custo_enc_relamp += enc5.calcula_custo_total();
	std::cout << std::endl;

	enc6.calcula_custo_total();
	enc6.print_enc_relamp();
	custo_enc_relamp += enc6.calcula_custo_total();
	std::cout << std::endl;

	enc7.calcula_custo_total();
	enc7.print_enc_relamp();
	custo_enc_relamp += enc7.calcula_custo_total();
	std::cout << std::endl;
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quant_enc_normais
		 << "\nValor Total: " << custo_enc_normal
		 << std::endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quant_enc_relamp
		 << "\nValor Total: " << custo_enc_relamp
		 << std::endl;
	
}