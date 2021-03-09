#include <iostream>
#include <string>
#include "Cliente.hpp"

using namespace std;

string Cliente::getNome() { return _NOME };

string Cliente::getEndereco() { return _ENDERECO };

string Cliente::getCidade() { return _CIDADE };

string Cliente::getEstado() { return _ESTADO };

string Cliente::getCep() { return _CEP };

void Cliente::setNome(string NOME) { _NOME = NOME };

void Cliente::setEndereco(string ENDERECO) { _ENDERECO = ENDERECO };

void Cliente::setCidade(string CIDADE) { _CIDADE = CIDADE };

void Cliente::setEstado(string ESTADO) { _ESTADO = ESTADO };

void Cliente::setCep(stirng CEP) { _CEP = CEP };

void Cliente::print() {

	cout << "  Nome: " << getNome() << endl
	cout << "  Endereço: " << getEndereco() << endl
	cout << "  Cidade: " << getCidade() << endl
	cout << "  Estado: " << getEstado() << endl
	cout << "  CEP: " << getCep() << endl;

}
