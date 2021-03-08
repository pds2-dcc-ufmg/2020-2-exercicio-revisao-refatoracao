#ifndef CLIENTE_H
#define CLIENTE_H

class Cliente {

	public:

		Cliente() {}
		Cliente(std::string nome, std::string endereco, std::string cidade, 
				std::string estado, std::string CEP) 
		: 		_nome(nome), _endereco(endereco), _cidade(cidade), 
				_estado(estado), _CEP(CEP) {}

		void setNome(std::string nome) { this->_nome = nome; }
		void setEndereco(std::string endereco) { this->_endereco = endereco; }
		void setCidade(std::string cidade)  { this->_cidade = cidade; }
		void setEstado(std::string estado) { this->_estado = estado; }
		void setCEP(std::string CEP) { this->_CEP = CEP; }

		std::string getNome() { return this->_nome; }
		std::string getEndereco() { return this->_endereco; }
		std::string getCidade() { return this->_cidade; }
		std::string getEstado() { return this->_estado; }
		std::string getCEP() { return this->_CEP; }
		
		void print(); // imprime na tela os dados de um cliente cadastrado

	private:

		std::string _nome;
		std::string _endereco;
		std::string _cidade;
		std::string _estado;
		std::string _CEP;

};

#endif