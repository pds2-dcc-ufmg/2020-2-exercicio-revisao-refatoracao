#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:
		/*  Construtor  */
		Cliente(string nome, string end, string cidade, string estado, string _cep):
			NOME(nome), endereco(end), CIDADE(cidade), ESTADO(estado), cep(_cep)  {}

		/*  Imprime na tela os dados do cliente  */
		void print();

		/*  Retornam as variáveis da classe  */
		string getNome();
		string getEnd();
		string getCid();
		string getEst();
		string getCep();
		
	private:

		string NOME;
		string endereco;
		string CIDADE;
		string ESTADO;
		string cep;
		
};

#endif