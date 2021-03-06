#include <iostream>
#include <string>
#include <vector>
#include "../headers/Encomenda.hpp"
#include "../headers/EncomendaNormal.hpp"
#include "../headers/EncomendaRelampago.hpp"
#include "../headers/Cliente.hpp"

using namespace std;

template <class Template> void makeEncomenda(int *count, double peso, double custoKg, Cliente remetente, Cliente dest, vector<Template> *encomendas) {
  (*count)++;
  encomendas->push_back(Template(peso, custoKg, remetente, dest));
}

template <class Template> void makeCliente(string nome, string endereco, string cidade, string estado, string cep, vector<Template> *clientes) {
  clientes->push_back(Template(nome, endereco, cidade, estado, cep));
}

template <class Template> void makeCalculo(Template encomenda, double *ptr) {
  encomenda.calcula();
	encomenda.print();
	(*ptr) += encomenda.calcula();
	std::cout << endl;
}

int main(){
	
  vector<EncomendaNormal> encomendasNormais;
  vector<EncomendaNormal> *encomendasNormaisPtr;
  encomendasNormaisPtr = &encomendasNormais;

  vector<EncomendaRelampago> encomendasRelampago;
  vector<EncomendaRelampago> *encomendasRelampagoPtr;
  encomendasRelampagoPtr = &encomendasRelampago;

  vector<Cliente> clientes;
  vector<Cliente> *clientesPtr;
  clientesPtr = &clientes;

  int quantN = 0;
  int quantR = 0;
  int *quantNptr;
  int *quantRptr;
  quantNptr = &quantN;
  quantRptr = &quantR;

  double custN = 0;
  double custR = 0;
  double *custNptr;
  double *custRptr;
  custNptr = &custN;
  custRptr = &custR;

  makeCliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.", clientesPtr);
  makeCliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.", clientesPtr);
  makeCliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C", clientesPtr);
  makeCliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.", clientesPtr);
  makeCliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.", clientesPtr);
  makeCliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.", clientesPtr);
  makeCliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.", clientesPtr);
  makeCliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.", clientesPtr);
	
  makeEncomenda<EncomendaNormal>(quantNptr, 5, 12, clientes[0], clientes[1], encomendasNormaisPtr);
  makeEncomenda<EncomendaNormal>(quantNptr, 10, 12, clientes[1], clientes[2], encomendasNormaisPtr);
  makeEncomenda<EncomendaNormal>(quantNptr, 7, 12, clientes[2], clientes[3], encomendasNormaisPtr);
  makeEncomenda<EncomendaNormal>(quantNptr, 2, 12, clientes[3], clientes[4], encomendasNormaisPtr);
  makeEncomenda<EncomendaNormal>(quantNptr, 3, 12, clientes[4], clientes[5], encomendasNormaisPtr);
  makeEncomenda<EncomendaRelampago>(quantRptr, 13, 18, clientes[5], clientes[6], encomendasRelampagoPtr);
  makeEncomenda<EncomendaRelampago>(quantRptr, 6, 18, clientes[6], clientes[7], encomendasRelampagoPtr);
  makeEncomenda<EncomendaRelampago>(quantRptr, 8, 18, clientes[7], clientes[0], encomendasRelampagoPtr);
	
  std::cout << "\n>> Relatório de encomendas <<" << endl;
  
  for (int i = 0; i < encomendasNormais.size(); i++) {
    makeCalculo<EncomendaNormal>(encomendasNormais[i], custNptr);
  }

  for (int i = 0; i < encomendasRelampago.size(); i++) {
    makeCalculo<EncomendaRelampago>(encomendasRelampago[i], custRptr);
  }
	
  std::cout << "\n>> Encomendas Normais <<" 
	<< "\nQuantidade: " << quantN
	<< "\nValor Total: " << custN
	<< endl
	<< "\n>> Encomendas Relâmpago <<" 
	<< "\nQuantidade: " << quantR
	<< "\nValor Total: " << custR
	<< endl;
}
