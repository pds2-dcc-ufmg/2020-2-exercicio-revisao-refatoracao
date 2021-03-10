#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	private:

		string _nome;
		string _endereco;
		string _cidade;
		string _estado;
		string _cep;

	public:

		void print(); // imprime na tela os dados de um cliente cadastrado
		void setNome(string nome);
		void setEndereco(string endereco);
		void setCidade(string cidade);
		void setEstado(string estado);
		void setCEP(string cep);

		string getNome();
		string getEndereco();
		string getCidade();
		string getEstado();
		string getCEP();

};

#endif
