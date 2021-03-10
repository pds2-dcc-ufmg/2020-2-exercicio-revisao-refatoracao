#include <iostream>
#include <vector>

#include "../includes/Encomenda.hpp"
#include "../includes/EncomendaNormal.hpp"
#include "../includes/EncomendaRelampago.hpp"
#include "../includes/Cliente.hpp"

using namespace std;

int main(){
	
	Cliente* cli0 = new Cliente(
    "Thales",
    "Rua dos Pré-Socráticos",
    "Miletus",
    "Ionia",
    "548 a.C.");

  Cliente* cli1 = new Cliente(
    "Aristóteles",
    "Avenida do Meio-Termo",
    "Atenas",
    "Ática",
    "384 a.C.");

  Cliente* cli2 = new Cliente (
    "Platão",
    "Praça das Formas",
    "Atenas",
    "Ática",
    "348 a.C");

  Cliente* cli3 = new Cliente (
    "Sócrates",
    "Rua do Elenchus",
    "Atenas",
    "Ática",
    "399 a.C.");

  Cliente* cli4 = new Cliente (
    "Pitágoras",
    "Praça dos Quadrados dos Catetos",
    "Samos",
    "Egeu",
    "571 a.C.");

  Cliente* cli5 = new Cliente (
    "Parmênides",
    "Rua do Não Ser",
    "Eleia",
    "Magna Grécia",
    "460 a.C.");

  Cliente* cli6 = new Cliente (
    "Empédocles",
    "Rua dos Quatro Elementos",
    "Agrigento",
    "Sicília",
    "495 a.C.");

  Cliente* cli7 = new Cliente (
    "Anaxágoras",
    "Avenida da Mente Cósmica",
    "Clazômenas",
    "Jónia",
    "499 a.C.");

	unsigned int quantN = 0, quantR = 0;
  double costN = 0, costR = 0;

  vector<Encomenda*> vec(8);

  vec[0] = new EncomendaNormal(5, 12, *cli0, *cli1);
  vec[1] = new EncomendaNormal(10, 12, *cli1, *cli2);
  vec[2] = new EncomendaNormal(7, 12, *cli2, *cli3);
  vec[3] = new EncomendaNormal(2, 12, *cli3, *cli4);
  vec[4] = new EncomendaNormal(3, 12, *cli4, *cli5);
  vec[5] = new EncomendaRelampago(13, 18, *cli5, *cli6);
  vec[6] = new EncomendaRelampago(6, 18, *cli6, *cli7);
  vec[7] = new EncomendaRelampago(8, 18, *cli7, *cli0);
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

  for(unsigned int i = 0; i < 8; ++i) {
    vec[i]->print();
    double cost = vec[i]->getTotal();

    EncomendaNormal* normalEnc = dynamic_cast<EncomendaNormal*> (vec[i]);
    if(normalEnc != NULL) { // encomenda normal
      costN += cost;
      quantN++;
    } else { // encomenda relampago
      costR += cost;
      quantR++;
    }
    cout << endl;
  }
	
	std::cout << "\n>> Encomendas Normais <<" 
		<< "\nQuantidade: " << quantN
		<< "\nValor Total: " << costN
		<< endl
		<< "\n>> Encomendas Relâmpago <<" 
		<< "\nQuantidade: " << quantR
		<< "\nValor Total: " << costR
		<< endl;
}
