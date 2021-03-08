#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

int main(){
	
	// Lista de Clientes:

	Cliente cli0;
	cli0.set_nome("Thales");
	cli0.set_endereco("Rua dos Pré-Socráticos");
	cli0.set_cidade("Miletus");
	cli0.set_estado("Ionia");
	cli0.set_cep("548 a.C.");

	Cliente cli1;
	cli1.set_nome("Aristóteles");
	cli1.set_endereco("Avenida do Meio-Termo");
	cli1.set_cidade("Atenas");
	cli1.set_estado("Ática");
	cli1.set_cep("384 a.C.");

	Cliente cli2;
	cli2.set_nome("Platão");
	cli2.set_endereco("Praça das Formas");
	cli2.set_cidade("Atenas");
	cli2.set_estado("Ática");
	cli2.set_cep("348 a.C");

	Cliente cli3;
	cli3.set_nome("Sócrates");
	cli3.set_endereco("Rua do Elenchus");
	cli3.set_cidade("Atenas");
	cli3.set_estado("Ática");
	cli3.set_cep("399 a.C.");

	Cliente cli4;
	cli4.set_nome("Pitágoras");
	cli4.set_endereco("Praça dos Quadrados dos Catetos");
	cli4.set_cidade("Samos");
	cli4.set_estado("Egeu");
	cli4.set_cep("571 a.C.");

	Cliente cli5;
	cli5.set_nome("Parmênides");
	cli5.set_endereco("Rua do Não Ser");
	cli5.set_cidade("Eleia");
	cli5.set_estado("Magna Grécia");
	cli5.set_cep("460 a.C.");

	Cliente cli6;
	cli6.set_nome("Empédocles");
	cli6.set_endereco("Rua dos Quatro Elementos");
	cli6.set_cidade("Agrigento");
	cli6.set_estado("Sicília");
	cli6.set_cep("495 a.C.");

	Cliente cli7;
	cli7.set_nome("Anaxágoras");
	cli7.set_endereco("Avenida da Mente Cósmica");
	cli7.set_cidade("Clazômenas");
	cli7.set_estado("Jónia");
	cli7.set_cep("499 a.C.");

	int quantN = 0; // qtd de encomendas normais
	int quantR = 0; // qtd de encomendas relampago

	// Lista de Encomendas

	EncomendaNormal enc0;
	enc0.set_peso(5);
	enc0.set_custo_kg(12);
	enc0.set_remetente(cli0);
	enc0.set_destinatario(cli1);
	quantN++;

	EncomendaNormal enc1;
	enc1.set_peso(10);
	enc1.set_custo_kg(12);
	enc1.set_remetente(cli1);
	enc1.set_destinatario(cli2);
	quantN++;

	EncomendaNormal enc2;
	enc2.set_peso(7);
	enc2.set_custo_kg(12);
	enc2.set_remetente(cli2);
	enc2.set_destinatario(cli3);
	quantN++;

	EncomendaNormal enc3;
	enc3.set_peso(2);
	enc3.set_custo_kg(12);
	enc3.set_remetente(cli3);
	enc3.set_destinatario(cli4);
	quantN++;

	EncomendaNormal enc4;
	enc4.set_peso(3);
	enc4.set_custo_kg(12);
	enc4.set_remetente(cli4);
	enc4.set_destinatario(cli5);
	quantN++;

	EncomendaRelampago enc5;
	enc5.set_peso(13);
	enc5.set_custo_kg(18);
	enc5.set_remetente(cli5);
	enc5.set_destinatario(cli6);
	quantR++;

	EncomendaRelampago enc6;
	enc6.set_peso(6);
	enc6.set_custo_kg(18);
	enc6.set_remetente(cli6);
	enc6.set_destinatario(cli7);
	quantR++;

	EncomendaRelampago enc7;
	enc7.set_peso(8);
	enc7.set_custo_kg(18);
	enc7.set_remetente(cli7);
	enc7.set_destinatario(cli0);
	quantR++;
	
	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	double custN = 0; // custo das encomendas normais
	double custR = 0; // custo das encomendas relampagos

	// Somatório do custo total (chamando uma função que sempre vai retornar 0 pq ainda nao foi implementadas...)

	enc0.calcula_custo_total();
	enc0.print();
	custN += enc0.calcula_custo_total();
	std::cout << std::endl;

	enc1.calcula_custo_total();
	enc1.print();
	custN += enc1.calcula_custo_total();
	std::cout << std::endl;

	enc2.calcula_custo_total();
	enc2.print();
	custN += enc2.calcula_custo_total();
	std::cout << std::endl;

	enc3.calcula_custo_total();
	enc3.print();
	custN += enc3.calcula_custo_total();
	std::cout << std::endl;

	enc4.calcula_custo_total();
	enc4.print();
	custN += enc4.calcula_custo_total();
	std::cout << std::endl;

	enc5.calcula_custo_total();
	enc5.print();
	custR += enc5.calcula_custo_total();
	std::cout << std::endl;

	enc6.calcula_custo_total();
	enc6.print();
	custR += enc6.calcula_custo_total();
	std::cout << std::endl;

	enc7.calcula_custo_total();
	enc7.print();
	custR += enc7.calcula_custo_total();
	std::cout << std::endl;

	// Resultado final:
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantN
		 << "\nValor Total: " << custN
		 << std::endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantR
		 << "\nValor Total: " << custR
		 << std::endl;
	
}