#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente {
	private:
		std::string _nome;
		std::string _endereco;
		std::string _cidade;
		std::string _estado;
		std::string _cep;
		
	public:
		Cliente(std::string nome, std::string endereco, std::string cidade, std::string estado, std::string cep) {
			this->_nome = nome;
			this->_endereco = endereco;
			this->_cidade = cidade;
			this->_estado = estado;
			this->_cep = cep; 
		}
		~Cliente() {};
	
		void setNome(std::string nome);
		void setEndereco(std::string endereco);
		void setCidade(std::string cidade);
		void setEstado(std::string estado);
		void setCep(std::string cep);
	
		std::string getNome();
		std::string getEndereco();
		std::string getCidade();
		std::string getEstado();
		std::string getCep();
	
		void print(); // imprime na tela os dados de um cliente cadastrado
};

#endif
