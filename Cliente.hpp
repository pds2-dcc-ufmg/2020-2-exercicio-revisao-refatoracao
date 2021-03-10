#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
	//trocando variaveis de publica para private
	private:

	string nome;
	string endereco;
	string cidade;
	string estado;
	string cep;
				
		
	
	public:
	
	string getNome();
	string getEndereco();
	string getCidade();
	string getEstado();
	string getCep();

	void setNome(string _nome);
	void setEndereco(string _endereco);
	void setCidade(string _cidade);
	void setEstado(string _estado);
	void setCep(string _cep);

	void printarCliente(); 
};

#endif