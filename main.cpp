#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

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

	EncomendaNormal enc0(5, 12);
	enc0.setRemetente(cli0);
	enc0.setDestinatario(cli1);
	quantidadeNormal++;

	EncomendaNormal enc1(10, 12);
	enc1.setRemetente(cli1);
	enc1.setDestinatario(cli2);
	quantidadeNormal++;

	EncomendaNormal enc2(7, 12);
	enc2.setRemetente(cli2);
	enc2.setDestinatario(cli3);
	quantidadeNormal++;

	EncomendaNormal enc3(2, 12);
	enc3.setRemetente(cli3);
	enc3.setDestinatario(cli4);
	quantidadeNormal++;

	EncomendaNormal enc4(3, 12);
	enc4.setRemetente(cli4);
	enc4.setDestinatario(cli5);
	quantidadeNormal++;

	EncomendaRelampago enc5(13, 18);
	enc5.setRemetente(cli5);
	enc5.setDestinatario(cli6);
	quantidadeRelampago++;

	EncomendaRelampago enc6(6, 18);
	enc6.setRemetente(cli6);
	enc6.setDestinatario(cli7);
	quantidadeRelampago++;

	EncomendaRelampago enc7(8, 18);
	enc7.setRemetente(cli7);
	enc7.setDestinatario(cli0);
	quantidadeRelampago++;
	
	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	double custoNormal = 0;
	double custoRelampago = 0;

	enc0.calcula();
	enc0.print();
	custoNormal += enc0.calcula();
	std::cout << std::endl;

	enc1.calcula();
	enc1.print();
	custoNormal += enc1.calcula();
	std::cout << std::endl;

	enc2.calcula();
	enc2.print();
	custoNormal += enc2.calcula();
	std::cout << std::endl;

	enc3.calcula();
	enc3.print();
	custoNormal += enc3.calcula();
	std::cout << std::endl;

	enc4.calcula();
	enc4.print();
	custoNormal += enc4.calcula();
	std::cout << std::endl;

	enc5.calcula();
	enc5.print();
	custoRelampago += enc5.calcula();
	std::cout << std::endl;

	enc6.calcula();
	enc6.print();
	custoRelampago += enc6.calcula();
	std::cout << std::endl;

	enc7.calcula();
	enc7.print();
	custoRelampago += enc7.calcula();
	std::cout << std::endl;
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantidadeNormal
		 << "\nValor Total: " << custoNormal
		 << std::endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantidadeRelampago
		 << "\nValor Total: " << custoRelampago
		 << std::endl;
	
}