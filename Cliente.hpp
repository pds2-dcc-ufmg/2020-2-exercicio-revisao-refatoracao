#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	private:

		string nome = "Invalido";
		string endereco = "Invalido";
		string cidade = "Invalido";
		string estado = "Invalido";
		string cep = "Invalido";

	public:

		void setNome(std::string _nome);
		void setDados(std::string _endereco, std::string _cidade, std::string _estado, std::string _cep);
		void imprimeCliente(); // Imprime dados de um cliente cadastrado
	
};

#endif
