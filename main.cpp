#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

int main(){
	
	Cliente cli0;
	cli0.setNome("Thales");
	cli0.setEndereco("Rua dos Pré-Socráticos");
	cli0.setCidade("Miletus");
	cli0.setEstado("Ionia");
	cli0.setCep("548 a.C.");

	Cliente cli1;
	cli1.setNome("Aristóteles");
	cli1.setEndereco("Avenida do Meio-Termo");
	cli1.setCidade("Atenas");
	cli1.setEstado("Ática");
	cli1.setCep("384 a.C.");

	Cliente cli2;
	cli2.setNome("Platão");
	cli2.setEndereco("Praça das Formas");
	cli2.setCidade("Atenas");
	cli2.setEstado("Ática");
	cli2.setCep("348 a.C");

	Cliente cli3;
	cli3.setNome("Sócrates");
	cli3.setEndereco("Rua do Elenchus");
	cli3.setCidade("Atenas");
	cli3.setEstado("Ática");
	cli3.setCep("399 a.C.");

	Cliente cli4;
	cli4.setNome("Pitágoras");
	cli4.setEndereco("Praça dos Quadrados dos Catetos");
	cli4.setCidade("Samos");
	cli4.setEstado("Egeu");
	cli4.setCep("571 a.C.");

	Cliente cli5;
	cli5.setNome("Parmênides");
	cli5.setEndereco("Rua do Não Ser");
	cli5.setCidade("Eleia");
	cli5.setEstado("Magna Grécia");
	cli5.setCep("460 a.C.");

	Cliente cli6;
	cli6.setNome("Empédocles");
	cli6.setEndereco("Rua dos Quatro Elementos");
	cli6.setCidade("Agrigento");
	cli6.setEstado("Sicília");
	cli6.setCep("495 a.C.");

	Cliente cli7;
	cli7.setNome("Anaxágoras");
	cli7.setEndereco("Avenida da Mente Cósmica");
	cli7.setCidade("Clazômenas");
	cli7.setEstado("Jónia");
	cli7.setCep("499 a.C.");

	int quantidade_encomenda_normal = 0;
	int quantidade_encomenda_relampago = 0;

	EncomendaNormal enc0;
	enc0.setPeso(5);
	enc0.setCustoKg(12);
	enc0.setRemetente(cli0);
	enc0.setDestinatario(cli1);
	quantidade_encomenda_normal++;

	EncomendaNormal enc1;
	enc1.setPeso(10);
	enc1.setCustoKg(12);
	enc1.setRemetente(cli1);
	enc1.setDestinatario(cli2);
	quantidade_encomenda_normal++;

	EncomendaNormal enc2;
	enc2.setPeso(7);
	enc2.setCustoKg(12);
	enc2.setRemetente(cli2);
	enc2.setDestinatario(cli3);
	quantidade_encomenda_normal++;

	EncomendaNormal enc3;
	enc3.setPeso(2);
	enc3.setCustoKg(12);
	enc3.setRemetente(cli3);
	enc3.setDestinatario(cli4);
	quantidade_encomenda_normal++;

	EncomendaNormal enc4;
	enc4.setPeso(3);
	enc4.setCustoKg(12);
	enc4.setRemetente(cli4);
	enc4.setDestinatario(cli5);
	quantidade_encomenda_normal++;

	EncomendaRelampago enc5;
	enc5.setPeso(13);
	enc5.setCustoKg(18);
	enc5.setRemetente(cli5);
	enc5.setDestinatario(cli6);
	quantidade_encomenda_relampago++;

	EncomendaRelampago enc6;
	enc6.setPeso(6);
	enc6.setCustoKg(18);
	enc6.setRemetente(cli6);
	enc6.setDestinatario(cli7);
	quantidade_encomenda_relampago++;

	EncomendaRelampago enc7;
	enc7.setPeso(8);
	enc7.setCustoKg(18);
	enc7.setRemetente(cli7);
	enc7.setDestinatario(cli0);
	quantidade_encomenda_relampago++;
	
	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	double custo_normal = 0;
	double custo_relampago = 0;

	enc0.taxa_entrega_calcular();
	enc0.imprimir();
	custo_normal += enc0.taxa_entrega_calcular();
	std::cout << std::endl;

	enc1.taxa_entrega_calcular();
	enc1.imprimir();
	custo_normal += enc1.taxa_entrega_calcular();
	std::cout << std::endl;

	enc2.taxa_entrega_calcular();
	enc2.imprimir();
	custo_normal += enc2.taxa_entrega_calcular();
	std::cout << std::endl;

	enc3.taxa_entrega_calcular();
	enc3.imprimir();
	custo_normal += enc3.taxa_entrega_calcular();
	std::cout << std::endl;

	enc4.taxa_entrega_calcular();
	enc4.imprimir();
	custo_normal += enc4.taxa_entrega_calcular();
	std::cout << std::endl;

	enc5.taxa_entrega_calcular();
	enc5.imprimir();
	custo_relampago += enc5.taxa_entrega_calcular();
	std::cout << std::endl;

	enc6.taxa_entrega_calcular();
	enc6.imprimir();
	custo_relampago += enc6.taxa_entrega_calcular();
	std::cout << std::endl;

	enc7.taxa_entrega_calcular();
	enc7.imprimir();
	custo_relampago += enc7.taxa_entrega_calcular();
	std::cout << std::endl;
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantidade_encomenda_normal
		 << "\nValor Total: " << custo_normal
		 << std::endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantidade_encomenda_relampago
		 << "\nValor Total: " << custo_relampago
		 << std::endl;
	
}
