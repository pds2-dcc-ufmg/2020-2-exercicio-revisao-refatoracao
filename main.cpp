#include <iostream>
#include <vector>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

template <typename T>
void printEncomendas(vector<T> encomendas){
	for (int i = 0; i < encomendas.size(); i++)
	{
		encomendas[i].print();
		std::cout<<endl;
	};
}

template <typename T>
float getTotalEncomendas(vector<T> encomendas){
	float total=0;
	for (int i = 0; i < encomendas.size(); i++)
	{
		total += encomendas[i].total;
	};
	return total;
}

template <typename T, typename G>
void relatorioEncomendas(vector<T> encomendas1, vector<G> encomendas2){
	std::cout << "\n>> Relatório de encomendas <<" << endl<< endl;
	
	printEncomendas(encomendas1);
	printEncomendas(encomendas2);

	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << encomendas1.size()
		 << "\nValor Total: " << getTotalEncomendas(encomendas1)
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << encomendas2.size()
		 << "\nValor Total: " << getTotalEncomendas(encomendas2)
		 << endl;
}

int main(){
	
	string listaClientes[] = {"Thales","Rua dos Pré-Socráticos","Miletus","Ionia","548 a.C.",
				"Aristóteles","Avenida do Meio-Termo","Atenas","Ática","384 a.C.",
				"Platão","Praça das Formas","Atenas","Ática","348 a.C",
				"Sócrates","Rua do Elenchus","Atenas","Ática","399 a.C.",
				"Pitágoras","Praça dos Quadrados dos Catetos","Samos","Egeu","571 a.C.",
				"Parmênides","Rua do Não Ser","Eleia","Magna Grécia","460 a.C.",
				"Empédocles","Rua dos Quatro Elementos","Agrigento","Sicília","495 a.C.",
				"Anaxágoras","Avenida da Mente Cósmica","Clazômenas","Jónia","499 a.C."
				};
	

	
	vector<Cliente> clientes;
	
	int controle = 0;
	for (int i = 0; i < 8; i++)
	{	
		Cliente cliente;	

		cliente.nome = listaClientes[controle];
		controle++;
		cliente.endereco = listaClientes[controle];
		controle++;
		cliente.cidade = listaClientes[controle];
		controle++;
		cliente.estado = listaClientes[controle];
		controle++;
		cliente.cep = listaClientes[controle];
		controle++;
	
		clientes.push_back(cliente);
	};

	int listaEncomendasNormais[] ={
						5,12,0,1,
						10,12,1,2,
						7,12,2,3,
						2,12,3,4,
						3,12,4,5,
	};

	vector<EncomendaNormal> encomendasNormais;

	controle = 0;
	for (int i = 0; i < 5; i++)
	{
		EncomendaNormal encomenda;
		encomenda.peso = listaEncomendasNormais[controle];
		controle++;
		encomenda.custoKg = listaEncomendasNormais[controle];
		controle++;
		int posicaoCliente = listaEncomendasNormais[controle];
		encomenda.remetente = clientes[posicaoCliente];
		controle++;
		posicaoCliente = listaEncomendasNormais[controle];
		encomenda.destinatario = clientes[posicaoCliente];
		controle++;

		encomenda.getTotal();
		encomendasNormais.push_back(encomenda);
	};

	int listaEncomendasRelampago[] ={
						13,18,5,6,
						6,18,6,7,
						8,18,7,0
	};

	vector<EncomendaRelampago> encomendasRelampago;
	
	controle = 0;
	for (int i = 0; i < 3; i++)
	{
		EncomendaRelampago encomenda;
		encomenda.peso = listaEncomendasRelampago[controle];
		controle++;
		encomenda.custoKg = listaEncomendasRelampago[controle];
		controle++;
		int posicaoCliente = listaEncomendasRelampago[controle];
		encomenda.remetente = clientes[posicaoCliente];
		controle++;
		posicaoCliente = listaEncomendasRelampago[controle];
		encomenda.destinatario = clientes[posicaoCliente];
		controle++;

		encomenda.getTotal();
		encomendasRelampago.push_back(encomenda);
	};

	relatorioEncomendas(encomendasNormais,encomendasRelampago); 
}