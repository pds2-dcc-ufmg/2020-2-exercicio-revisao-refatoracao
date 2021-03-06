#include <iostream>
#include <string>
#include "./encomenda/Encomenda.hpp"
#include "./encomenda/encomendaNormal/EncomendaNormal.hpp"
#include "./encomenda/encomendaRelampago/EncomendaRelampago.hpp"
#include "./cliente/Cliente.hpp"
using namespace std;

template <class Template> Template makeEncomenda(int *count, double peso, double custoKg, Cliente remetente, Cliente dest) {
  (*count)++;
  return Template(peso, custoKg, remetente, dest);
}

template <class Template> void makeCalculo(Template encomenda, double *ptr) {
  encomenda.calcula();
	encomenda.print();
	(*ptr) += encomenda.calcula();
	std::cout << endl;
}

int main(){
	
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

  Cliente cli0 = Cliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");
  Cliente cli1 = Cliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");
  Cliente cli2 = Cliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");
  Cliente cli3 = Cliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");
  Cliente cli4 = Cliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");
  Cliente cli5 = Cliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");
  Cliente cli6 = Cliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");
  Cliente cli7 = Cliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");
	
  EncomendaNormal enc0 = makeEncomenda<EncomendaNormal>(quantNptr, 5, 12, cli0, cli1);
  EncomendaNormal enc1 = makeEncomenda<EncomendaNormal>(quantNptr, 10, 12, cli1, cli2);
  EncomendaNormal enc2 = makeEncomenda<EncomendaNormal>(quantNptr, 7, 12, cli2, cli3);
  EncomendaNormal enc3 = makeEncomenda<EncomendaNormal>(quantNptr, 2, 12, cli3, cli4);
  EncomendaNormal enc4 = makeEncomenda<EncomendaNormal>(quantNptr, 3, 12, cli4, cli5);
  EncomendaRelampago enc5 = makeEncomenda<EncomendaRelampago>(quantRptr, 13, 18, cli5, cli6);
  EncomendaRelampago enc6 = makeEncomenda<EncomendaRelampago>(quantRptr, 6, 18, cli6, cli7);
  EncomendaRelampago enc7 = makeEncomenda<EncomendaRelampago>(quantRptr, 8, 18, cli7, cli0);
	
  std::cout << "\n>> Relatório de encomendas <<" << endl;
  
  makeCalculo<EncomendaNormal>(enc0, custNptr);
  makeCalculo<EncomendaNormal>(enc1, custNptr);
  makeCalculo<EncomendaNormal>(enc2, custNptr);
  makeCalculo<EncomendaNormal>(enc3, custNptr);
  makeCalculo<EncomendaNormal>(enc4, custNptr);
  makeCalculo<EncomendaRelampago>(enc5, custRptr);
  makeCalculo<EncomendaRelampago>(enc6, custRptr);
  makeCalculo<EncomendaRelampago>(enc7, custRptr);
	
  std::cout << "\n>> Encomendas Normais <<" 
	<< "\nQuantidade: " << quantN
	<< "\nValor Total: " << custN
	<< endl
	<< "\n>> Encomendas Relâmpago <<" 
	<< "\nQuantidade: " << quantR
	<< "\nValor Total: " << custR
	<< endl;
}

