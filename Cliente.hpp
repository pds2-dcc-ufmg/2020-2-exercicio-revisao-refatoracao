#ifndef CLIENTE
#define CLIENTE

#include <string>


class Cliente{

	std::string _nome;
	std::string _endereco;
	std::string _cidade;
	std::string _estado;
	std::string _cep;

	public:
		Cliente(std::string nome, std::string endereco, std::string cidade,std::string estado, std::string cep);
		void imprimir_dados_pessoais();
		
};

#endif