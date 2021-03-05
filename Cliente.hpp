#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:
		//construtor da classe, sem parametros, que coloca uma string vazia em todos os atributos
		Cliente();

		//construtor da classe que será de fato usado
		Cliente(string CliNome, string CliEndereco, string CliCidade, string CliEstado, string CliCep);

		void print(); // imprime na tela os dados de um cliente cadastrado
	

	private:

		string NOME;
		string endereco;
		string CIDADE;
		string ESTADO;
		string cep;
		
};

#endif