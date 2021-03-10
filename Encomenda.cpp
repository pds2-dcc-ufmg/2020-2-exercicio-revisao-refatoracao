#include <iostream>
#include "Encomenda.hpp"
#include "Cliente.hpp"


//Criada nova pasta Encomenda cpp para separar os atributos dos metodos



void Encomenda :: print(){

	std::cout << "[Remetente]" << endl;
	remetente.printarCliente();
	std::cout << "[Destinatario]" << endl;
	destinatario.printarCliente();
}



double Encomenda :: getPeso(){
    return this->peso;
}

double Encomenda :: getCusto(){
      return this->custokg;
}
	
double Encomenda :: getTotal(){
     return this->total;
}
	
Cliente Encomenda :: getRemetente(){
     return this->remetente;
}
	
Cliente Encomenda :: getDestinatario(){
     return this->destinatario;
}

void Encomenda :: setPeso(double NovoPeso){
    this->peso = NovoPeso;
}

void Encomenda :: setCusto(double NovoCusto){
     this->custokg=NovoCusto;
}

void Encomenda :: setRemetente(Cliente NovoRemetente){
     this->remetente = NovoRemetente;
}

void Encomenda :: setDestinatario(Cliente NovoDest){
    this->destinatario = NovoDest;
    }