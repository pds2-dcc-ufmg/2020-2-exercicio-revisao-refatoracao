#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include <vector>
using namespace std;


void adicionaCliente(string nome, string endereco, string cidade, string estado, 
					string cep, vector<Cliente> &array_clientes){

	Cliente cliente(nome, endereco, cidade, estado, cep);
	array_clientes.push_back(cliente);

}

template <class T>
int adicionaEncomenda(double peso, double custokg, Cliente remetente, Cliente destinatario, 
					vector <T> &array_de_encomendas, int numero_de_encomendas){
	T encomenda(peso, custokg, remetente, destinatario);
	array_de_encomendas.push_back(encomenda);
	numero_de_encomendas++;
	return numero_de_encomendas;
}

template <class T>
void printaEncomenda(T encomenda){
	encomenda.print();
}

int main(){
	vector<Cliente> array_clientes;
	//(nome, endereco, cidade, estado, cep, array_clientes)
	adicionaCliente("Thales", "Rua dos Pré-Socráticos",
					"Miletus", "Ionia", "548 a.C.", array_clientes);

	adicionaCliente("Aristóteles", "Avenida do Meio-Termo", 
					"Atenas", "Ática", "384 a.C.", array_clientes);

	adicionaCliente("Platão", "Praça das Formas", 
					"Atenas", "Ática", "348 a.C", array_clientes);

	adicionaCliente("Sócrates", "Rua do Elenchus", 
					"Atenas", "Ática", "399 a.C.", array_clientes);

	adicionaCliente("Pitágoras", "Praça dos Quadrados dos Catetos",
					"Samos", "Egeu", "571 a.C.", array_clientes);

	adicionaCliente("Parmênides", "Rua do Não Ser",
					"Eleia", "Magna Grécia", "460 a.C.", array_clientes);

	adicionaCliente("Empédocles", "Rua dos Quatro Elementos",
					"Agrigento", "Sicília", "495 a.C.", array_clientes);

	adicionaCliente("Anaxágoras", "Avenida da Mente Cósmica", 
					"Clazômenas", "Jónia", "499 a.C.", array_clientes);

	int quantidade_encomenda_normal = 0;
	int quantidade_encomenda_relampago = 0;

	vector<EncomendaNormal> array_encomenda_normal;
	//adicionaEncomenda(peso, custokg, remetente, destinatario, 
	//					array_encomenda_normal, quantidade_encomenda_normal)
	quantidade_encomenda_normal = adicionaEncomenda(5.0, 12.0, array_clientes[0], array_clientes[1], 
													array_encomenda_normal, quantidade_encomenda_normal);
	quantidade_encomenda_normal = adicionaEncomenda(10.0, 12.0, array_clientes[1], array_clientes[2], 
													array_encomenda_normal, quantidade_encomenda_normal);
	quantidade_encomenda_normal = adicionaEncomenda(7.0, 12.0, array_clientes[2], array_clientes[3], 
													array_encomenda_normal, quantidade_encomenda_normal);
	quantidade_encomenda_normal = adicionaEncomenda(2.0, 12.0, array_clientes[3], array_clientes[4], 
													array_encomenda_normal, quantidade_encomenda_normal);
	quantidade_encomenda_normal = adicionaEncomenda(3.0, 12.0, array_clientes[4], array_clientes[5], 
													array_encomenda_normal, quantidade_encomenda_normal);

	vector<EncomendaRelampago> array_encomenda_relampago;
	//adicionaEncomenda(peso, custokg, remetente, destinatario, 
	//					array_encomenda_relampago, quantidade_encomenda_relampago)
	quantidade_encomenda_relampago = adicionaEncomenda(13.0, 18.0, array_clientes[5], array_clientes[6],
														array_encomenda_relampago, quantidade_encomenda_relampago);
	quantidade_encomenda_relampago = adicionaEncomenda(6.0, 18.0, array_clientes[6], array_clientes[7],
														array_encomenda_relampago, quantidade_encomenda_relampago);
	quantidade_encomenda_relampago = adicionaEncomenda(8.0, 18.0, array_clientes[7], array_clientes[0],
														array_encomenda_relampago, quantidade_encomenda_relampago);

	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	for(EncomendaNormal encomenda_normal : array_encomenda_normal){
		printaEncomenda(encomenda_normal); 
	}
	
	for(EncomendaRelampago encomenda_relampago : array_encomenda_relampago){
		printaEncomenda(encomenda_relampago);
	}

	double custo_encomenda_normal = 0;
	for(EncomendaNormal encomenda_normal : array_encomenda_normal){
		custo_encomenda_normal += encomenda_normal.calcula(); 
	}
	
	double custo_encomenda_relampago = 0;
	for(EncomendaRelampago encomenda_relampago : array_encomenda_relampago){
		custo_encomenda_relampago += encomenda_relampago.calcula();
	}
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantidade_encomenda_normal
		 << "\nValor Total: " << custo_encomenda_normal
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantidade_encomenda_relampago
		 << "\nValor Total: " << custo_encomenda_relampago
		 << endl;
	
}