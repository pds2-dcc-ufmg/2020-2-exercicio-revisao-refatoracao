#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

private:

	string NOME;
	string endereco;
	string CIDADE;
	string ESTADO;
	string cep;

public:
	Cliente (string nome, string ender, string cidade, string estado, string Cep):  // Construtor
		NOME(nome), endereco(ender), CIDADE(cidade), ESTADO(estado), cep(Cep) {}

//Get e Set para Nome
string getNome();
void setNome(string nome);

//Get e Set para Endereço
string getEndereco();
void setEndereco(string ender);

//Get e Set para Cidade
string getCidade();
void setCidade(string cidade);

//Get e Set para Estado
string getEstado();
void setEstado(string estado);

//Get e Set para Cep
string getCep();
void setCep(string cep);


void print(); //imprime na tela os dados de um cliente cadastrado


};

#endif
