#ifndef RELATORIO_H_INCLUDED
#define RELATORIO_H_INCLUDED

#include <iostream>
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include <vector>


using namespace std;

/*
  Função Relatorio realiza o print de todas as informações dos vetores de encomendas, 
  o calculo do custo total, e quantidade de encomendas de cada tipo  
*/

void Relatorio(vector<EncomendaNormal> ListaN,vector<EncomendaRelampago> ListaR){
    double _custoTotalN=0,_custoTotalR=0;
  
  //O calculo do custo total e print das informações individuais das Encomendas Normais
    for(unsigned int i=0;i<ListaN.size();i++){
        ListaN[i].print();
        _custoTotalN += ListaN[i].calcula();
        std::cout << endl;
    }
  
  //O calculo do custo total e print das informações individuais das Encomendas Relampago
    for(unsigned int i=0;i<ListaR.size();i++){
        ListaR[i].print();
        _custoTotalR += ListaR[i].calcula();
        std::cout << endl;
    }

  //Print do total das listas
    std::cout << "\n>> Encomendas Normais <<"
		 << "\nQuantidade: " << ListaN.size()
		 << "\nValor Total: " << _custoTotalN
		 << endl
		 << "\n>> Encomendas Relâmpago <<"
		 << "\nQuantidade: " << ListaR.size()
		 << "\nValor Total: " << _custoTotalR
		 << endl;
}


#endif // RELATORIO_H_INCLUDED
