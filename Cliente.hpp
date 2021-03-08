#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
private:
	string _nome;
	string _endereco;
	string _cidade;
	string _estado;
	string _cep;
public:

	void print(); // imprime na tela os dados de um cliente cadastrado

//getter e setter
	string getNome();
	void setNome(string nome);
	string getEndereco();
	void setEndereco(string endereco);
	string getCidade();
	void setCidade(string cidade);
	string getEstado();
	void setEstado(string estado);
	string getCep();
	void setCep(string cep);

};

#endif