#include <iostream>
#include <string>
#include "Cliente.hpp"

using namespace std;

void Cliente::print(){

	cout << "  Nome: " << nome << endl
    << "  Endereço: " << endereco << endl
    << "  Cidade: " << cidade << endl
    << "  Estado: " << estado << endl
    << "  CEP: " << cep << endl;

}

Cliente::Cliente(string _nome, string _endereco, string _cidade, string _estado, string _cep){
    nome = _nome;
    endereco = _endereco;
    cidade = _cidade;
    estado = _estado;
    cep = _cep;
}

Cliente::Cliente(){
    
}

