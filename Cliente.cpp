#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::
{	
	print()//imprime na tela os dados do cliente
{

		 std::cout << "  Nome: " << NOME << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << CIDADE << endl
		 << "  Estado: " << ESTADO << endl
		 << "  CEP: " << cep << endl;

}

void Cliente::set_NOME(string nome)//seta o nome do cliente
{
		strcpy(NOME,nome);
}
void Cliente::set_endereco(string Endereco)//seta o endereço do cliente
{
                strcpy(endereco, Endereco);
}

void Cliente::set_CIDADE(string cidade)//seta a cidade do cliente
{
                strcpy(CIDADE,cidade);
}

void Cliente::set_ESTADO(string estado)//seta o estado do cliente
{
                strcpy(ESTADO,estado);
}

void Cliente::set_cep(string Cep)//seta o cep do cliente
{
                strcpy(cep, Cep);
}
}
