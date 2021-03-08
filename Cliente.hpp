#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
  public:

  void setDadosCliente(string _nome,string _endereco,string _cidade,string _estado,string _cep);
  string getNome();
  string getEndereco();
  string getCidade();
  string getEstado();
  string getCep();
  void printDadosCliente(); // imprime na tela os dados de um cliente cadastrado


	private:

		string nome;
		string endereco;
		string cidade;
		string estado;
		string cep;	

};

#endif
