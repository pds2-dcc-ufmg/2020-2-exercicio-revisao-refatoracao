#include <string>
#include <vector>
#include <iostream>
#include "../headers/Relatorio.hpp"
#include "../headers/Cliente.hpp"
#include "../headers/EncomendaNormal.hpp"
#include "../headers/EncomendaRelampago.hpp"

void Relatorio::makeCliente(string nome, string endereco, string cidade, string estado, string cep) {
  this->clientes.push_back(Cliente(nome, endereco, cidade, estado, cep));
}

void Relatorio::makeEncomenda(double peso, double custoKg, Cliente remetente, Cliente dest, string tipo) {
  if (tipo == "Relampago") {
    this->encomendasRelampago.push_back(EncomendaRelampago(peso, custoKg, remetente, dest));
  }
  if (tipo == "Normal") {
    this->encomendasNormais.push_back(EncomendaNormal(peso, custoKg, remetente, dest));
  }
}

void Relatorio::makeCalculo() {
  
  std::cout << "\n>> Relatório de encomendas <<" << endl;
  
  for (EncomendaNormal encomenda : this->encomendasNormais) {
    encomenda.calcula();
	  encomenda.print();
	  this->custoNormal += encomenda.calcula();
	  std::cout << endl;
  }

  for (EncomendaRelampago encomenda : this->encomendasRelampago) {
    encomenda.calcula();
	  encomenda.print();
	  this->custoRelampago += encomenda.calcula();
	  std::cout << endl;
  }
}

void Relatorio::display() {
  std::cout << "\n>> Encomendas Normais <<" 
            << "\nQuantidade: " << this->encomendasNormais.size()
            << "\nValor Total: " << this->custoNormal
            << endl
            << "\n>> Encomendas Relâmpago <<" 
            << "\nQuantidade: " << this->encomendasRelampago.size()
            << "\nValor Total: " << this->custoRelampago
            << endl;
}

Cliente Relatorio::getCliente(int index) {
  return this->clientes[index];
}
