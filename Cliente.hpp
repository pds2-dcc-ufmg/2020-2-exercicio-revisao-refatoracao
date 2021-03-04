#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	public:	
		Cliente(
			std::string _nome,
			std::string _endereco,
			std::string _cidade,
			std::string _estado,
			std::string _cep
		) : nome(_nome),
			endereco(_endereco),
			cidade(_cidade),
			estado(estado),
			cep(_cep) {}

		void print();

		void set_nome(std::string _nome);
		std::string get_nome();

		void set_endereco(std::string _endereco);
		std::string get_endereco();

		void set_cidade(std::string _cidade);
		std::string get_cidade();

		void set_estado(std::string _estado);
		std::string get_estado();

		void set_cep(std::string _cep);
		std::string get_cep();

	
	private:
		std::string nome;
		std::string endereco;
		std::string cidade;
		std::string estado;
		std::string cep;
};

#endif