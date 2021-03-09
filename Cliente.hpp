#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:	
		Cliente(string n, string end, string cid, string est, string cep): Nome(n), Endereco(end), Cidade(cid), Estado(est), CEP(cep);
		void print(); // imprime na tela os dados de um cliente cadastrado
	
	private:
		string Nome;
		string Endereco;
		string Cidade;
		string Estado;
		string CEP;
};

#endif
