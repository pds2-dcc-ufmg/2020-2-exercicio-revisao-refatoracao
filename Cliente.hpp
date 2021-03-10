#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <iostream>
#include <string>

using namespace std;

class Cliente{

	private:
		string nome;
		string endereco;
		string cidade;
		string estado;
		string cep;

	public:
		
		Cliente();
		Cliente(string nome);
		Cliente(string nome, string endereco, string cidade, string estado, string cep);
		~Cliente();

		void setNome(string nome);
		void setEndereco(string endereco);
		void setCidade(string cidade);
		void setEstado(string estado);
		void setCep(string cep);

		string getNome() const;
		string getEndereco() const;
		string getCidade() const;
		string getEstado() const;
		string getCep() const;

		friend ostream& operator << (ostream& os, const Cliente& c);
		
};

#endif