#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:

		string getNome();
		void setNome(string nome);
		string getEndereco();
		void setEndereco(string endereco);
		string getCidade();
		void setCidade(string cidade);
		string getEstado();
		void setEstado(string estado);
		string getCep();
		void setCep(string cep);
		void printCliente(); // imprime na tela os dados de um cliente cadastrado

    private:

        string Nome;
		string Endereco;
		string Cidade;
		string Estado;
		string Cep;

};

#endif
