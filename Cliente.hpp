#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>


class Cliente{

	public:

		void print(); // imprime na tela os dados de um cliente cadastrado
		Cliente(std::string Nome, std::string Endereco, std::string Cidade, std::string Estado, std::string Cep):
		    _Nome(Nome),
		    _Endereco(Endereco),
		    _Cidade(Cidade),
		    _Estado(Estado),
		    _Cep(Cep) {}; //Construtor

    private:

        std::string _Nome;
		std::string _Endereco;
		std::string _Cidade;
		std::string _Estado;
		std::string _Cep;
};

#endif
