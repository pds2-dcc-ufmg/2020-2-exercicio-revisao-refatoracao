#include <iostream>
#include <list>

#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "RelatorioEncomendas.hpp"
#include "Cliente.hpp"


void RelatorioEncomendas::cadastra_encomenda_normal(double peso, Cliente remetente, Cliente destinario){
    EncomendaNormal encomenda(peso, remetente, destinario);
    this->encomendas_normais.push_back(encomenda);
    this->quantidade_encomendas_normais++;
}

void RelatorioEncomendas::cadastra_encomenda_relampago(double peso, Cliente remetente, Cliente destinario){
    EncomendaRelampago encomenda(peso, remetente, destinario);
    this->encomendas_relampago.push_back(encomenda);
    this->quantidade_encomendas_relampago++;
}

void RelatorioEncomendas::gera_relatorio(){
    std::cout << "\n>> Relatório de encomendas <<" << std::endl;
    this->calcula_custo_encomendas_normais();
    this->calcula_custo_encomendas_relampago();
    this->print();
}

void RelatorioEncomendas::calcula_custo_encomendas_normais(){
    for (EncomendaNormal encomenda : encomendas_normais){
        this->custo_encomendas_normais += encomenda.calcula_custo();
        encomenda.print();
        std::cout <<  std::endl;
    }
}

void RelatorioEncomendas::calcula_custo_encomendas_relampago(){
    for (EncomendaRelampago encomenda : encomendas_relampago){
        this->custo_encomendas_relampago += encomenda.calcula_custo();
        encomenda.print();
        std::cout << std::endl;
    }
}

void RelatorioEncomendas::print(){
    std::cout << "\n>> Encomendas Normais <<";
    std::cout << "\nQuantidade: " << this->quantidade_encomendas_normais;
    std::cout << "\nValor Total: " << this->custo_encomendas_normais;
    std::cout << std::endl;
    std::cout << "\n>> Encomendas Relâmpago <<" ;
    std::cout << "\nQuantidade: " << this->quantidade_encomendas_relampago;
    std::cout << "\nValor Total: " << this->custo_encomendas_relampago;
    std::cout << std::endl;;
}
