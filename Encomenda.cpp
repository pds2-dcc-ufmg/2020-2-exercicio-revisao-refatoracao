#include<iostream>
#include"Encomenda.hpp"

using namespace std;

Encomenda::Encomenda(double peso, double custo,Cliente remetente, Cliente destinatario){
    this-> peso = peso;
    this-> custo = custo;
    this-> remetente = new Cliente(remetente.getNome(), remetente.getEndereco(), remetente.getCidade(), remetente.getEstado(), remetente.getCep());
    this-> destinatario = new Cliente(destinatario.getNome(), destinatario.getEndereco(), destinatario.getCidade(), destinatario.getEstado(), destinatario.getCep());
}
		
Encomenda:: ~Encomenda(){
    delete remetente;
    delete destinatario;
}

double Encomenda:: getPeso(){
    return this-> peso;
}

double Encomenda:: getCusto(){
    this-> custo = custo;
}
		
void Encomenda::setCustoTotal(double custoTotal){
    this-> custoTotal = custoTotal;
}

double Encomenda:: getCustoTotal(){
    return this->custoTotal;
}

void Encomenda::print(){

    std::cout << "[Remetente]" << endl;
    remetente->print();
    std::cout << "[Destinatário]" << endl;
    destinatario->print();
    
}
