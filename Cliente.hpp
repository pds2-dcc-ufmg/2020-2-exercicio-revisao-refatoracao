#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	public:
	
		Cliente(){}; //Construtor normal.
	
		Cliente(std::string _nome, std::string _endereco, std::string _cidade, std::string _estado, std::string _cep); //Construtor completo.
		
		void print(); //Imprime na tela os dados de um cliente cadastrado.
		
	private:
	
		std::string Nome;
		std::string Endereco;
		std::string Cidade;
		std::string Estado;
		std::string CEP;
};

#endif