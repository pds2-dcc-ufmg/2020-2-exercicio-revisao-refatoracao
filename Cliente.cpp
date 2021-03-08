#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){ // Método para impressão dos dados do cliente

	std::cout << "  Nome: " << nome << std::endl
		 << "  Endereço: " << endereco << std::endl
		 << "  Cidade: " << cidade << std::endl
		 << "  Estado: " << estado << std::endl
		 << "  CEP: " << cep << std::endl;

}

// Métodos para retornar dados do cliente
string Cliente::get_nome(){ return this->nome; }
string Cliente::get_endereco(){ return this->endereco; }
string Cliente::get_cidade(){ return this->cidade; }
string Cliente::get_estado(){ return this->estado; }
string Cliente::get_cep(){ return this->cep; }

// Métodos para setar dados do cliente
void Cliente::set_nome(string _nome){this->nome = _nome;}
void Cliente::set_endereco(string _endereco){this->endereco = _endereco;}
void Cliente::set_cidade(string _cidade){this->cidade = _cidade;}
void Cliente::set_estado(string _estado){this->estado = _estado;}
void Cliente::set_cep(string _cep){this->cep = _cep;}
