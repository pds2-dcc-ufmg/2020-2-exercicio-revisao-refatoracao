#include <iostream>
#include <typeinfo>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

int main() {
	long quantidadeClientes = 8, quantidadeNormais = 5, quantidadeRelampagos = 3, quantidadeTotalEncomendas = quantidadeRelampagos + quantidadeNormais;
	Cliente *clientes[quantidadeClientes], *remetentes[quantidadeTotalEncomendas], *destinatarios[quantidadeTotalEncomendas];
	std::string
			nomes[quantidadeClientes] = {"Thales", "Aristóteles", "Platão", "Sócrates", "Pitágoras", "Parmênides", "Empédocles", "Anaxágoras"},
			enderecos[quantidadeClientes] = {"Rua dos Pré-Socráticos", "Avenida do Meio-Termo", "Praça das Formas", "Rua do Elenchus", "Praça dos Quadrados dos Catetos", "Rua do Não Ser", "Rua dos Quatro Elementos", "Avenida da Mente Cósmica"},
			cidades[quantidadeClientes] = {"Miletus", "Atenas", "Atenas", "Atenas", "Samos", "Eleia", "Agrigento", "Clazômenas"},
			estados[quantidadeClientes] = {"Ionia", "Ática", "Ática", "Ática", "Egeu", "Magna Grécia", "Sicília", "Jónia"},
			ceps[quantidadeClientes] = {"548 a.C.", "384 a.C.", "348 a.C", "399 a.C.", "571 a.C.", "460 a.C.", "495 a.C.", "499 a.C."};
	double custosNormais = 0, custosRelampagos = 0,
			massas[quantidadeTotalEncomendas] = {5.0, 10.0, 7.0, 2.0, 3.0, 13.0, 6.0, 8.0},
			custos[quantidadeTotalEncomendas] = {12.0, 12.0, 12.0, 12.0, 12.0, 18.0, 18.0, 18.0};
	Encomenda *encomendas[quantidadeTotalEncomendas];

	for(long i = 0; i < quantidadeClientes; i++) {
		clientes[i] = new Cliente(nomes[i], enderecos[i], cidades[i], estados[i], ceps[i]);
	}

	for (long i = 0; i < quantidadeTotalEncomendas; i++) {
		remetentes[i] = clientes[(i % quantidadeClientes)];
		destinatarios[i] = clientes[((i + 1) % quantidadeClientes)];
	}

	for (long i = 0; i < quantidadeTotalEncomendas; i++) {
		if(i < quantidadeNormais) {
			encomendas[i] = new EncomendaNormal(massas[i], custos[i], *remetentes[i], *destinatarios[i]);
			continue;
		}
		if(i < (quantidadeRelampagos + quantidadeNormais)){
			encomendas[i] = new EncomendaRelampago(massas[i], custos[i], *remetentes[i], *destinatarios[i]);
			continue;
		}
	}

	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	for (long i = 0; i < quantidadeTotalEncomendas; i++) {
		encomendas[i]->print();
		std::cout << std::endl;

		if (typeid(encomendas[i]) == typeid(EncomendaNormal)) {
			custosNormais += encomendas[i]->calcula();
			continue;
		}

		if (typeid(encomendas[i]) == typeid(EncomendaRelampago)) {
			custosRelampagos += encomendas[i]->calcula();
			continue;
		}
	}

	std::cout	<< std::endl
				<< ">> Encomendas Normais <<" << std::endl
				<< "Quantidade: " << quantidadeNormais << std::endl
				<< "Valor Total: " << custosNormais << std::endl << std::endl
				<< ">> Encomendas Relâmpago <<" << std::endl
				<< "Quantidade: " << quantidadeRelampagos << std::endl
				<< "Valor Total: " << custosRelampagos << std::endl << std::endl;
}