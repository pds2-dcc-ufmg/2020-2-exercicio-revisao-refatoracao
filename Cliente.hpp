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

		void setNome(string nome){_nome=nome;};
		string getNome(){return _nome;};

		void setEndereco(string endereco){_endereco=endereco;};
		string getEndereco(){return _endereco;};

		void setCidade(string cidade){_cidade=cidade;};
		string getCidade(){return _cidade;};

		void setEstado(string estado){_estado=estado;};
		string getEstado(){return _estado;};

		void setCep(string cep){_cep=cep;};
		string getCep(){return _cep;};
		
		void print(){

			cout << "  Nome: " << getNome() << endl
				<< "  Endereço: " << getEndereco() << endl
				<< "  Cidade: " << getCidade() << endl
		 		<< "  Estado: " << getEstado() << endl
		 		<< "  CEP: " << getCep() << endl;
		};
		
};

#endif