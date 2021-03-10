#include<iostream>
#include"Encomenda.hpp"

using namespace std;

Encomenda::Encomenda(double peso, double custo_kg, Cliente remetente, Cliente dest){
    string aux1, aux2, aux3, aux4, aux5;
    aux1 = remetente.get_nome();
    aux2 = remetente.get_endereco();
    aux3 = remetente.get_cidade();
    aux4 = remetente.get_estado();
    aux5 = remetente.get_cep();
    
    this->remetente = new Cliente(aux1,aux2,aux3,aux4,aux5);
    
    aux1 = dest.get_nome();
    aux2 = dest.get_endereco();
    aux3 = dest.get_cidade();
    aux4 = dest.get_estado();
    aux5 = dest.get_cep();
    
    this->dest = new Cliente(aux1,aux2,aux3,aux4,aux5);

    this->peso = peso;
    this->custo_kg = custo_kg;
     
}

Encomenda::~Encomenda(){
    delete dest;
    delete remetente;
}
void Encomenda:: print(){

    cout << "[Remetente]" << endl;
    remetente->print();
    cout << "[Destinatário]" << endl;
    dest->print();
}
void Encomenda:: set_custo_total(double custo_total){
    this-> custo_total = custo_total;

}
