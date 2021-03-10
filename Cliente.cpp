#include <iostream>
#include <string>
#include "Cliente.hpp"

using namespace std;

string Cliente::getNome() { return _NOME; };

string Cliente::getEndereco() { return _ENDERECO; };

string Cliente::getCidade() { return _CIDADE; };

string Cliente::getEstado() { return _ESTADO; };

string Cliente::getCep() { return _CEP; };

void Cliente::print() {

	cout << "  Nome: " << getNome() << endl;
	cout << "  Endereço: " << getEndereco() << endl;
	cout << "  Cidade: " << getCidade() << endl;
	cout << "  Estado: " << getEstado() << endl;
	cout << "  CEP: " << getCep() << endl;

}

Cliente::Cliente() {};

Cliente::Cliente(string NOME, string ENDERECO, string CIDADE, string ESTADO, string CEP) {

	_NOME = NOME;
	_ENDERECO = ENDERECO;
	_CIDADE = CIDADE;
	_ESTADO = ESTADO;
	_CEP = CEP;
}
