#include "Cliente.hpp"

void Cliente::Remetente(){

	std::cout << "[Remetente]" << std::endl;
}

void Cliente::Destinatario(){

	std::cout << "[Destinatário]" << std::endl;
}

void Cliente::imprimeDadosDoCliente(Cliente cliente){

	std::cout << "  Nome: " << nome << std::endl
		 << "  Endereço: " << endereco << std::endl
		 << "  Cidade: " << cidade << std::endl
		 << "  Estado: " << estado << std::endl
		 << "  CEP: " << cep << std::endl;
}