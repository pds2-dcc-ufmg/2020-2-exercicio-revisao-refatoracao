#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
	public:
		void setNome(string _nome){
		      nome = _nome;
		}
	
		void setEndereco(string _endereco){
		      endereco = _endereco;
		}
	
		void setCidade(string _cidade){
			cidade = _cidade;
		}
	
		void setEstado(string _estado){
      			estado = _estado;
    		}
	
		void setCep(string _cep){
      			cep = _cep;
    		}
	
    		string getNome(){
      			return this->nome;
    		}
	
		string getEndereco(){
			return this->endereco;
		}
	
		string getCidade(){
			return this->cidade;
		}
	
	        string getEstado(){
	      		return this->estado;
	    	}
	
	    	string getCep(){
	      		return this->cep;
    		}
	
		void registro(string _nome, string _endereco, string _cidade, string _estado, string _cep){
		      nome = _nome;
		      endereco = _endereco;
		      cidade = _cidade;
		      estado = _estado;
		      cep = _cep;
    		}
				
		void print();
	
	private:
		string nome;
		string endereco;
		string cidade;
		string estado;
		string cep;
};

#endif
