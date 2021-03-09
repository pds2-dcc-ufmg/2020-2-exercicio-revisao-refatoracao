#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main()
{
	
	Cliente cli0;
	cli0.set_NOME("Thales");
	cli0.set_endereco("Rua dos Pré-Socráticos");
	cli0.set_CIDADE("Miletus");
	cli0.set_ESTADO ("Ionia");
	cli0.set_cep("548 a.C.");

	Cliente cli1;
	cli1.set_NOME("Aristóteles");
	cli1.set_endereco ("Avenida do Meio-Termo");
	cli1.set_CIDADE("Atenas");
	cli1.set_ESTADO("Ática");
	cli1.set_cep("384 a.C.");

	Cliente cli2;
	cli2.set_NOME("Platão");
	cli2.set_endereco("Praça das Formas");
	cli2.set_CIDADE("Atenas");
	cli2.set_ESTADO("Ática");
	cli2.set_cep("348 a.C");

	Cliente cli3;
	cli3.set_NOME("Sócrates");
	cli3.set_endereco("Rua do Elenchus");
	cli3.set_CIDADE("Atenas");
	cli3.set_ESTADO("Ática");
	cli3.set_cep("399 a.C.");

	Cliente cli4;
	cli4.set_NOME("Pitágoras");
	cli4.set_endereco("Praça dos Quadrados dos Catetos");
	cli4.set_CIDADE( "Samos");
	cli4.set_ESTADO("Egeu");
	cli4.set_cep("571 a.C.");

	Cliente cli5;
	cli5.set_NOME("Parmênides");
	cli5.set_endereco("Rua do Não Ser");
	cli5.set_CIDADE("Eleia");
	cli5.set_ESTADO("Magna Grécia");
	cli5.set_cep("460 a.C.");

	Cliente cli6;
	cli6.set_NOME("Empédocles");
	cli6.set_endereco("Rua dos Quatro Elementos");
	cli6.set_CIDADE("Agrigento");
	cli6.set_ESTADO("Sicília");
	cli6.set_cep("495 a.C.");

	Cliente cli7;
	cli7.set_NOME("Anaxágoras");
	cli7.set_endereco("Avenida da Mente Cósmica");
	cli7.set_CIDADE("Clazômenas");
	cli7.set_ESTADO("Jónia");
	cli7.set_cep("499 a.C.");

	int quantN = 0;
	int quantR = 0;

	EncomendaNormal enc0;
	enc0.set_PESO(5);
	enc0.set_CUSTOkg(12);
	enc0.set_remetente(cli0);
	enc0.set_dest(cli1);
	quantN++;

	EncomendaNormal enc1;
	enc1.set_PESO(10);
	enc1.set_CUSTOkg(12);
	enc1.set_remetente(cli1);
	enc1.set_dest(cli2);
	quantN++;

	EncomendaNormal enc2;
	enc2.set_PESO(7);
	enc2.set_CUSTOkg(12);
	enc2.set_remetente(cli2);
	enc2.set_dest(cli3);
	quantN++;

	EncomendaNormal enc3;
	enc3.set_PESO(2);
	enc3.set_CUSTOkg(12);
	enc3.set_remetente(cli3);
	enc3.set_dest(cli4);
	quantN++;

	EncomendaNormal enc4;
	enc4.set_PESO(3);
	enc4.set_CUSTOkg(12);
	enc4.set_remetente(cli4);
	enc4.set_dest(cli5);
	quantN++;

	EncomendaRelampago enc5;
	enc5.set_PESO(13);
	enc5.set_CUSTOkg(18);
	enc5.set_remetente(cli5);
	enc5.set_dest(cli6);
	quantR++;

	EncomendaRelampago enc6;
	enc6.set_PESO(6);
	enc6.set_CUSTOkg(18);
	enc6.set_remetente(cli6);
	enc6.set_dest(cli7);
	quantR++;

	EncomendaRelampago enc7;
	enc7.set_PESO(8);
	enc7.set_CUSTOkg(18);
	enc7.set_remetente(cli7);
	enc7.set_dest(cli0);
	quantR++;
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0;
	double custR = 0;

	enc0.calcula();
	enc0.print();
	custN += enc0.calcula();
	std::cout << endl;

	enc1.calcula();
	enc1.print();
	custN += enc1.calcula();
	std::cout << endl;

	enc2.calcula();
	enc2.print();
	custN += enc2.calcula();
	std::cout << endl;

	enc3.calcula();
	enc3.print();
	custN += enc3.calcula();
	std::cout << endl;

	enc4.calcula();
	enc4.print();
	custN += enc4.calcula();
	std::cout << endl;

	enc5.calcula();
	enc5.print();
	custR += enc5.calcula();
	std::cout << endl;

	enc6.calcula();
	enc6.print();
	custR += enc6.calcula();
	std::cout << endl;

	enc7.calcula();
	enc7.print();
	custR += enc7.calcula();
	std::cout << endl;
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantN
		 << "\nValor Total: " << custN
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantR
		 << "\nValor Total: " << custR
		 << endl;
	
}
