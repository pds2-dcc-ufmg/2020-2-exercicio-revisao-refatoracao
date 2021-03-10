#include "Cliente.hpp"

#include "Encomenda.hpp"

#include "EncomendaNormal.cpp"

#include "EncomendaRelampago.cpp"

int main(){

	//Definindo os clientes

	Cliente cliente_1("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");

	Cliente cliente_2("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");

	Cliente cliente_3("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C.");

	Cliente cliente_4("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");

	Cliente cliente_5("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");

	Cliente cliente_6("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");

	Cliente cliente_7("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");

	Cliente cliente_8("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");

	//Definindo as encomendas

	int quantN = 0;

	int quantR = 0;

	EncomendaNormal encomenda_1(5, 12);
	quantN++;

	EncomendaNormal encomenda_2(10, 12);
	quantN++;

	EncomendaNormal encomenda_3(7, 12);
	quantN++;

	EncomendaNormal encomenda_4(2, 12);
	quantN++;


	EncomendaNormal encomenda_5(3, 12);
	quantN++;

	EncomendaRelampago encomenda_6(13, 18);
	quantR++;

	EncomendaRelampago encomenda_7(6, 18);
	quantR++;

	EncomendaRelampago encomenda_8(8, 18);
	quantR++;

	//Imprimindo o relatório
	
	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	double custN = 0;
	double custR = 0;

	cliente_1.Remetente();
	cliente_1.imprimeDadosDoCliente(cliente_1);
	cliente_2.Destinatario();
	cliente_2.imprimeDadosDoCliente(cliente_2);
	encomenda_1.calculaPrecoEncomenda();
	encomenda_1.imprimeRelatorioEncomendas();
	custN += encomenda_1.calculaPrecoEncomenda();
	std::cout << std::endl;

	cliente_2.Remetente();
	cliente_2.imprimeDadosDoCliente(cliente_2);
	cliente_3.Destinatario();
	cliente_3.imprimeDadosDoCliente(cliente_3);
	encomenda_2.calculaPrecoEncomenda();
	encomenda_2.imprimeRelatorioEncomendas();
	custN += encomenda_2.calculaPrecoEncomenda();
	std::cout << std::endl;

	cliente_3.Remetente();
	cliente_3.imprimeDadosDoCliente(cliente_3);
	cliente_4.Destinatario();
	cliente_4.imprimeDadosDoCliente(cliente_4);
	encomenda_3.calculaPrecoEncomenda();
	encomenda_3.imprimeRelatorioEncomendas();
	custN += encomenda_3.calculaPrecoEncomenda();
	std::cout << std::endl;

	cliente_4.Remetente();
	cliente_4.imprimeDadosDoCliente(cliente_4);
	cliente_5.Destinatario();
	cliente_5.imprimeDadosDoCliente(cliente_5);
	encomenda_4.calculaPrecoEncomenda();
	encomenda_4.imprimeRelatorioEncomendas();
	custN += encomenda_4.calculaPrecoEncomenda();
	std::cout << std::endl;

	cliente_5.Remetente();
	cliente_5.imprimeDadosDoCliente(cliente_5);
	cliente_6.Destinatario();
	cliente_6.imprimeDadosDoCliente(cliente_6);
	encomenda_5.calculaPrecoEncomenda();
	encomenda_5.imprimeRelatorioEncomendas();
	custN += encomenda_5.calculaPrecoEncomenda();
	std::cout << std::endl;

	cliente_6.Remetente();
	cliente_6.imprimeDadosDoCliente(cliente_6);
	cliente_7.Destinatario();
	cliente_7.imprimeDadosDoCliente(cliente_7);
	encomenda_6.calculaPrecoEncomenda();
	encomenda_6.imprimeRelatorioEncomendas();
	custR += encomenda_6.calculaPrecoEncomenda();
	std::cout << std::endl;

	cliente_7.Remetente();
	cliente_7.imprimeDadosDoCliente(cliente_7);
	cliente_8.Destinatario();
	cliente_8.imprimeDadosDoCliente(cliente_8);
	encomenda_7.calculaPrecoEncomenda();
	encomenda_7.imprimeRelatorioEncomendas();
	custR += encomenda_7.calculaPrecoEncomenda();
	std::cout << std::endl;

	cliente_8.Remetente();
	cliente_8.imprimeDadosDoCliente(cliente_8);
	cliente_1.Destinatario();
	cliente_1.imprimeDadosDoCliente(cliente_1);
	encomenda_8.calculaPrecoEncomenda();
	encomenda_8.imprimeRelatorioEncomendas();
	custR += encomenda_8.calculaPrecoEncomenda();
	std::cout << std::endl;

	//Estatisticas gerais sobre as encomendas
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantN
		 << "\nValor Total: " << custN
		 << std::endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantR
		 << "\nValor Total: " << custR
		 << std::endl;
	
}