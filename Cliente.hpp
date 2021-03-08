#ifndef CLIENTE_H
#define CLIENTE_H

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
		void setNome(string pNome);
        string getNome();
        void setEndereco(string pEndereco);
        string getEndereco();
        void setCidade(string pCidade);
        string getCidade();
        void setEstado(string pEstado);
        string getEstado();
        void setCep(string pCep);
        string getCep();
		void print(); // imprime na tela os dados de um cliente cadastrado
		
};

#endif
