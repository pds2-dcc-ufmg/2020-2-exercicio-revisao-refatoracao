#include <vector>
#include <iostream>
#include "Cliente.hpp"
#include "Encomenda.hpp"
#include "Relatorio.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"

int main(){
	
	std::vector<Cliente> Clientes;
	Clientes.push_back(Cliente ("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C."));
	Clientes.push_back(Cliente ("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C."));
	Clientes.push_back(Cliente ("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C"));
	Clientes.push_back(Cliente ("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C."));
	Clientes.push_back(Cliente ("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C."));
	Clientes.push_back(Cliente ("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C."));
	Clientes.push_back(Cliente ("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C."));
	Clientes.push_back(Cliente ("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C."));

	std::vector<EncomendaNormal> EncomendasNormais;
	EncomendasNormais.push_back(EncomendaNormal (5, 12, Clientes[0], Clientes[1]));
	EncomendasNormais.push_back(EncomendaNormal (10, 12, Clientes[1], Clientes[2]));
	EncomendasNormais.push_back(EncomendaNormal (7, 12, Clientes[2], Clientes[3]));
	EncomendasNormais.push_back(EncomendaNormal (2, 12, Clientes[3], Clientes[4]));
	EncomendasNormais.push_back(EncomendaNormal (3, 12, Clientes[4], Clientes[5]));

	std::vector<EncomendaRelampago> EncomendasRelampagos;
	EncomendasRelampagos.push_back(EncomendaRelampago (13, 18, Clientes[5], Clientes[6]));
	EncomendasRelampagos.push_back(EncomendaRelampago (6, 18, Clientes[6], Clientes[7]));
	EncomendasRelampagos.push_back(EncomendaRelampago (8, 18, Clientes[7], Clientes[0]));

	Relatorio().gerarRelatorio(Clientes, EncomendasNormais, EncomendasRelampagos);
}