#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:

		Cliente() {}

		Cliente(string nome, string end, string cidade, string estado, string ccep) {
			NOME = nome;
			endereco = end;
			CIDADE = cidade;
			ESTADO = estado;
			cep = ccep;
		}

		void setNome(string nome) { NOME = nome; }

		string getNome() { return NOME; }

		void setEndereco(string end) { endereco = end; }

		string getEndereco() { return endereco; }

		void setCidade(string cidade) { CIDADE = cidade; }

		string getCidade() { return CIDADE; }

		void setEstado(string estado) { ESTADO = estado; }

		string getEstado() { return ESTADO; }

		void setCep(string ccep) { cep = ccep; }

		string getCep() { return cep; }
				
		void print(); // imprime na tela os dados de um cliente cadastrado

	private:

		string NOME;
		string endereco;
		string CIDADE;
		string ESTADO;
		string cep;
		
};

#endif