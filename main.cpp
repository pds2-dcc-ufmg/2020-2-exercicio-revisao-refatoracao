#include <iostream>
#include <vector>

#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

void gera_relatorio(
	std::vector<EncomendaNormal> encomendas_normal,
	std::vector<EncomendaRelampago> encomendas_relampago
) {
	double custo_n = 0;
	double custo_r = 0;
	
	for(EncomendaNormal enc : encomendas_normal) {
		enc.print();
		custo_n += enc.preco_total();
	}
	
	for(EncomendaRelampago enc : encomendas_relampago) {
		enc.print();
		custo_r += enc.preco_total();
	}

	std::cout << "\n>> Encomendas Normais <<" 
			  << "\nQuantidade: " << encomendas_normal.size()
			  << "\nValor Total: " << custo_n << std::endl;

	std::cout << "\n>> Encomendas Relâmpago <<" 
			  << "\nQuantidade: " << encomendas_relampago.size()
			  << "\nValor Total: " << custo_r << std::endl;
}

int main(){
	std::vector<Cliente> clientes;
	std::vector<EncomendaNormal> encomendas_normal;
	std::vector<EncomendaRelampago> encomendas_relampago;
	
	clientes.push_back(Cliente(
		"Thales",
		"Rua dos Pré-Socráticos",
		"Miletus",
		"Ionia",
		"548 a.C."
	));

	clientes.push_back(Cliente(
		"Aristóteles",
		"Avenida do Meio-Termo",
		"Atenas",
		"Ática",
		"384 a.C."
	));

	clientes.push_back(Cliente(
		"Platão",
		"Praça das Formas",
		"Atenas",
		"Ática",
		"348 a.C"
	));

	clientes.push_back(Cliente(
		"Sócrates", 
		"Rua do Elenchus", 
		"Atenas", 
		"Ática", 
		"399 a.C."
	));

	clientes.push_back(Cliente(
		"Pitágoras", 
		"Praça dos Quadrados dos Catetos", 
		"Samos", 
		"Egeu", 
		"571 a.C."
	));

	clientes.push_back(Cliente(
		"Parmênides", 
		"Rua do Não Ser", 
		"Eleia", 
		"Magna Grécia", 
		"460 a.C."
	));

	clientes.push_back(Cliente(
		"Empédocles", 
		"Rua dos Quatro Elementos", 
		"Agrigento", 
		"Sicília", 
		"495 a.C."
	));

	clientes.push_back(Cliente(
		"Anaxágoras", 
		"Avenida da Mente Cósmica", 
		"Clazômenas", 
		"Jónia", 
		"499 a.C."
	));
	
	encomendas_normal.push_back(EncomendaNormal(
		5,
		12,
		clientes[0],
		clientes[1]
	));

	encomendas_normal.push_back(EncomendaNormal(
		10,
		12,
		clientes[1],
		clientes[2]
	));

	encomendas_normal.push_back(EncomendaNormal(
		7,
		12,
		clientes[2],
		clientes[3]
	));

	encomendas_normal.push_back(EncomendaNormal(
		2,
		12,
		clientes[3],
		clientes[4]
	));

	encomendas_normal.push_back(EncomendaNormal(
		3,
		12,
		clientes[4],
		clientes[5]
	));

	encomendas_relampago.push_back(EncomendaRelampago(
		13,
		18,
		clientes[5],
		clientes[6]
	));

	encomendas_relampago.push_back(EncomendaRelampago(
		6,
		18,
		clientes[6],
		clientes[7]
	));

	encomendas_relampago.push_back(EncomendaRelampago(
		8,
		18,
		clientes[7],
		clientes[0]
	));
	
}