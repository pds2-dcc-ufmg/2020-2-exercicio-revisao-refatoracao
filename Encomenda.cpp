#include<iostream>
#include"Encomenda.hpp"

using namespace std;

Encomenda::Encomenda(double peso, double custo,Cliente remetente, Cliente destinatario){
    this->peso=peso;
    this->custo=custo;
    this->remetente=new Cliente(remetente.get_nome(), remetente.get_endereco(), remetente.get_cidade(), remetente.get_estado(), remetente.get_cep());
    this->destinatario=new Cliente(destinatario.get_nome(), destinatario.get_endereco(), destinatario.get_cidade(), destinatario.get_estado(), destinatario.get_cep());
}		
Encomenda:: ~Encomenda(){
    delete remetente;
    delete destinatario;
}
double Encomenda:: get_peso(){
    return this->peso;
}
double Encomenda:: get_custo(){
    this->custo=custo;
}		
void Encomenda::set_custo_total(double custoTotal){
    this->custo_total=custoTotal;
}
double Encomenda:: get_custo_total(){
    return this->custo_total;
}
void Encomenda::print(){

    std::cout << "[Remetente]" << endl;
    remetente->print();
    std::cout << "[Destinatário]" << endl;
    destinatario->print();
}
