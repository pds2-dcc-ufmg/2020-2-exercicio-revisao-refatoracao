#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{
	
	private:
		std::string nomeCliente;
		std::string enderecoCliente;
		std::string cidadeCliente;
		std::string estadoCliente;
		std::string cepCliente;
	public:
		void printCliente(); // imprime na tela os dados de um cliente cadastrado

		Cliente(){};
		Cliente(std::string nomeCliente, std::string enderecoCliente, std::string cidadeCliente, 
				 std::string estadoCliente, std::string cepCliente);

		std::string getNomeCliente();
		std::string getEnderecoCliente();
		std::string getCidadeCliente();
		std::string getEstadoCliente();
		std::string getCepCliente();

		void setNomeCliente(std::string nomeCliente);
		void setEnderecoCliente(std::string enderecoCliente);
		void setCidadeCliente(std::string cidadeCliente);
		void setEstadoCliente(std::string estadoCliente);
		void setCepCliente(std::string cepCliente);
};

#endif