#include <iostream>
#include <vector>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

void addCliente(std::string nome, std::string endereco, std::string cidade,
				std::string estado, std::string CEP, std::vector<Cliente>& vecClientes) {

	Cliente cliente(nome, endereco, cidade, estado, CEP);
	vecClientes.push_back(cliente);

}

template <class T>
int addEncomenda(double peso, double custoKg, Cliente remetente, 
				 Cliente destinatario, std::vector<T>& vecEncomendas, int qtdEncomendas) {
	
	T encomenda(peso, custoKg, remetente, destinatario);
	vecEncomendas.push_back(encomenda);

	return ++qtdEncomendas;

}

template <class T>
double printEncomendas(std::vector<T>& vecEncomenda, double custoTotal) {

	for (T encomendaAtual : vecEncomenda) {

		custoTotal += encomendaAtual.calcPreco();
        encomendaAtual.print();
        std::cout << std::endl;

    }

	return custoTotal;

}

int main() {

	std::vector<Cliente> vecClientes = {};
	
	addCliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.", vecClientes);
	addCliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.", vecClientes);
	addCliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C", vecClientes);
	addCliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.", vecClientes);
	addCliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.", vecClientes);
	addCliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.", vecClientes);
	addCliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.", vecClientes);
	addCliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.", vecClientes);
	
	std::vector<EncomendaNormal> vecEncomendasNormais = {};
	std::vector<EncomendaRelampago> vecEncomendasRelampago = {};
	int qtdEncomendasNormais = 0;
	int qtdEncomendasRelampago = 0;

	qtdEncomendasNormais = addEncomenda(5, 12, vecClientes[0], vecClientes[1], 
										vecEncomendasNormais, qtdEncomendasNormais);
	qtdEncomendasNormais = addEncomenda(10, 12, vecClientes[1], vecClientes[2], 
										vecEncomendasNormais, qtdEncomendasNormais);
	qtdEncomendasNormais = addEncomenda(7, 12, vecClientes[2], vecClientes[3], 
										vecEncomendasNormais, qtdEncomendasNormais);
	qtdEncomendasNormais = addEncomenda(2, 12, vecClientes[3], vecClientes[4], 
										vecEncomendasNormais, qtdEncomendasNormais);
	qtdEncomendasNormais = addEncomenda(3, 12, vecClientes[4], vecClientes[5], 
										vecEncomendasNormais, qtdEncomendasNormais);
	qtdEncomendasRelampago = addEncomenda(13, 18, vecClientes[5], vecClientes[6], 
										  vecEncomendasRelampago, qtdEncomendasRelampago);
	qtdEncomendasRelampago = addEncomenda(6, 18, vecClientes[6], vecClientes[7], 
										  vecEncomendasRelampago, qtdEncomendasRelampago);
	qtdEncomendasRelampago = addEncomenda(8, 18, vecClientes[7], vecClientes[0], 
										  vecEncomendasRelampago, qtdEncomendasRelampago);
	
	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	double custoNormalTotal = 0.0;
	double custoRelampagoTotal = 0.0;

	custoNormalTotal = printEncomendas(vecEncomendasNormais, custoNormalTotal);
	custoRelampagoTotal = printEncomendas(vecEncomendasRelampago, custoRelampagoTotal);

	std::cout << "\n>> Encomendas Normais <<"
		<< "\nQuantidade: " << qtdEncomendasNormais
		<< "\nValor Total: " << custoNormalTotal
		<< std::endl
		<< "\n>> Encomendas Relâmpago <<"
		<< "\nQuantidade: " << qtdEncomendasRelampago
		<< "\nValor Total: " << custoRelampagoTotal
		<< std::endl;
	
}