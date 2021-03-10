#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	private:

		string _nome_cliente;
		string _endereco_cliente;
		string _cidade_cliente;
		string _estado_cliente;
		string _cep_cliente;

	public:

		void print(); // imprime na tela os dados de um cliente cadastrado

		void setNome(string nome); // define a variável _nome_cliente
		void setEndereco(string endereco); // define a variável _endereco_cliente
		void setCidade(string cidade); // define a variável _cidade_cliente
		void setEstado(string estado); // define a variável _estado_cliente
		void setCep(string cep); // define a variável _cep_cliente

		string getNome(); // retorna a variável _nome_cliente
		string getEndereco(); // retorna a variável _endereco_cliente
		string getCidade(); // retorna a variável _cidade_cliente
		string getEstado(); // retorna a variável _estado_cliente
		string getCep(); // retorna a variável _cep_cliente

};

#endif
