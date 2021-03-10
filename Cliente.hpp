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

		void setNome(string nome); // define a vari�vel _nome_cliente
		void setEndereco(string endereco); // define a vari�vel _endereco_cliente
		void setCidade(string cidade); // define a vari�vel _cidade_cliente
		void setEstado(string estado); // define a vari�vel _estado_cliente
		void setCep(string cep); // define a vari�vel _cep_cliente

		string getNome(); // retorna a vari�vel _nome_cliente
		string getEndereco(); // retorna a vari�vel _endereco_cliente
		string getCidade(); // retorna a vari�vel _cidade_cliente
		string getEstado(); // retorna a vari�vel _estado_cliente
		string getCep(); // retorna a vari�vel _cep_cliente

};

#endif
