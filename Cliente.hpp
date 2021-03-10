#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
	public:
		string getNome() {return this->_nome;}
		string getEndereco() {return this->_endereco;}
		string getCidade() {return this->_cidade;}
		string getEstado() {return this->_estado;}
		string getCep() {return this->_cep;}

		void setNome(string nome) {this->_nome = nome;}
		void setEndereco(string endereco) {this->_endereco = endereco;}
		void setCidade(string cidade) {this->_cidade = cidade;}
		void setEstado(string estado) {this->_estado = estado;}
		void setCep(string cep) {this->_cep = cep;}

		void printCliente(); // imprime na tela os dados de um cliente cadastrado
	private:
		string _nome;
		string _endereco;
		string _cidade;
		string _estado;
		string _cep;
};

#endif