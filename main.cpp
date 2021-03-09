#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include <vector>

int main()
{
	std::vector<Cliente> clientes;
	clientes.push_back(*new Cliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C."));
	clientes.push_back(*new Cliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C."));
	clientes.push_back(*new Cliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C"));
	clientes.push_back(*new Cliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C."));
	clientes.push_back(*new Cliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C."));
	clientes.push_back(*new Cliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C."));
	clientes.push_back(*new Cliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C."));
	clientes.push_back(*new Cliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C."));

	std::vector<EncomendaNormal> encomendasNormal;
	std::vector<EncomendaRelampago> encomendasRelampago;
	encomendasNormal.push_back(*new EncomendaNormal(5.0, 12.0, clientes[0], clientes[1]));
	encomendasNormal.push_back(*new EncomendaNormal(10.0, 12.0, clientes[1], clientes[2]));
	encomendasNormal.push_back(*new EncomendaNormal(7.0, 12.0, clientes[2], clientes[3]));
	encomendasNormal.push_back(*new EncomendaNormal(2.0, 12.0, clientes[3], clientes[4]));
	encomendasNormal.push_back(*new EncomendaNormal(3.0, 12.0, clientes[4], clientes[5]));
	encomendasRelampago.push_back(*new EncomendaRelampago(13.0, 18.0, clientes[5], clientes[6]));
	encomendasRelampago.push_back(*new EncomendaRelampago(6.0, 18.0, clientes[6], clientes[7]));
	encomendasRelampago.push_back(*new EncomendaRelampago(8.0, 18.0, clientes[7], clientes[0]));
	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	double custN = 0;
	double custR = 0;
	for (int i=0;i<5;i++){
		encomendasNormal[i].calcula();
		encomendasNormal[i].print();
		custN += encomendasNormal[i].calcula();
		std::cout << std::endl;
	}
	for (int i=0;i<3;i++){
		encomendasRelampago[i].calcula();
		encomendasRelampago[i].print();
		custR += encomendasRelampago[i].calcula();
		std::cout << std::endl;
	}
	std::cout << "\n>> Encomendas Normais <<"
			  << "\nQuantidade: " << encomendasNormal.size()
			  << "\nValor Total: " << custN
			  << std::endl
			  << "\n>> Encomendas Relâmpago <<"
			  << "\nQuantidade: " << encomendasRelampago.size()
			  << "\nValor Total: " << custR
			  << std::endl;
}
