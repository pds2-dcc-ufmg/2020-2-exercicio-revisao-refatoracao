#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class print{
	virtual void imprimir() = 0;
};

class Cliente: public print{

	protected:
		std::string NOME;
		std::string endereco;
		std::string CIDADE;
		std::string ESTADO;
		std::string cep;

	public:
		std::string getNome();
		std::string getEndereco();
		std::string getCidade();
		std::string getEstado();
		std::string getCep();
		
		void setNome(std::string aux);
		void setEndereco(std::string aux);
		void setCidade(std::string aux);
		void setEstado(std::string aux);
		void setCep(std::string aux);


		void imprimir() override;
};

#endif
