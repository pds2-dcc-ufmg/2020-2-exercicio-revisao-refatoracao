#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:
	        Cliente(string _nome, string _endereco, string _cidade, string _estado, string _cep);
	
		void print(); // imprime na tela os dados de um cliente cadastrado
	
	        void setNome(string _nome); 
	
	        void setEndereco(string _endereco); 
	
	        void setCidade(string _cidade); 
	 
	        void setEstado(string _estado); 
	
	        void setCep(string _cep);
	
	        string getNome();
	
	        string getEndereco();
	
	        string getCidade();
	 
	        string getEstado();
	
	        string getCep();
	private:
                
	        string nome;
		string endereco;
		string cidade;
		string estado;
		string cep;
	
};

#endif
