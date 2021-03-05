#include <iostream>
#include <string>
#include "Relatorio.hpp"

void Relatorio::printTodas(){

    cout << "\n>> Relatório de encomendas <<" << endl;

    for(int i=0;i<nEncn;i++){
        encN[i].calculaTotal();
        encN[i].print();
        custN += encN[i].getTotal();
        cout << endl;
    }

    for(int i=0;i<nEncr;i++){
        encR[i].calculaTotal();
        encR[i].print();
        custR += encR[i].getTotal();
        cout << endl;
    }
}

void Relatorio::printN(){

    cout << "\n>> Encomendas Normais <<" 
    << "\nQuantidade: " << nEncn
    << "\nValor Total: " << custN
    << endl;
}

void Relatorio::printR(){
    
    cout  << "\n>> Encomendas Relâmpago <<" 
    << "\nQuantidade: " << nEncr
    << "\nValor Total: " << custR
    << endl;
}