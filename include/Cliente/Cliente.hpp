#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

namespace Cliente
{
	class Cliente
	{
	public:
		/**
		* \brief construtor padrão que não inicializa as variáveis
		*/
		Cliente(){};

		/**
		* \brief construtor que inicializa as variáveis
		*/
		Cliente(std::string cep, std::string cidade, std::string endereco, std::string estado, std::string nome);

		/**
		* \brief imprime na tela os dados de um cliente cadastrado
		*/
		void print();

	private:
		std::string nome;
		std::string endereco;
		std::string cidade;
		std::string estado;
		std::string cep;
	};
}

#endif