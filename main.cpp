#include <vector>
#include <typeinfo>
#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

int main(){

  std::vector<Cliente> clients = {
    Cliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C."), 
    Cliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C."), 
    Cliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C"), 
    Cliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C."), 
    Cliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C."), 
    Cliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C."), 
    Cliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C."), 
    Cliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.")
  };

  std::vector<Encomenda*> encomenda_vector = {
    new EncomendaNormal(5, 12, clients[0], clients[1]), 
    new EncomendaNormal(10, 12, clients[1], clients[2]),
    new EncomendaNormal(7, 12, clients[2], clients[3]),
    new EncomendaNormal(2, 12, clients[3], clients[4]),
    new EncomendaNormal(3, 12, clients[4], clients[5]),
    new EncomendaRelampago(13, 18, clients[5], clients[6]),
    new EncomendaRelampago(6, 18, clients[6], clients[7]),
    new EncomendaRelampago(8, 18, clients[7], clients[0])
  };
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double quantN = 0;
        double quantR = 0;
        double custN = 0;
	double custR = 0;

  for(int i = 0; i < encomenda_vector.size(); i++){
    encomenda_vector[i]->print();
    if (typeid(*encomenda_vector[i]) == typeid(EncomendaNormal)) {
      custN += encomenda_vector[i]->calcula();
      quantN++;
    } else if(typeid(*encomenda_vector[i]) == typeid(EncomendaRelampago)) {
      custR += encomenda_vector[i]->calcula();
      quantR++;
    } else {
    }
    std::cout << endl;
  }
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantN
		 << "\nValor Total: " << custN
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantR
		 << "\nValor Total: " << custR
		 << endl;
	
	clients.clear();
  	encomenda_vector.clear();
	
}
