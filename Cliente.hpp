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
		Cliente() {};
		Cliente	(	std::string _nome,
					std::string _endereco,
					std::string _cidade,
					std::string _estado,
					std::string _cep
				) : nome(_nome),
					endereco(_endereco),
					cidade(_cidade),
					estado(_estado),
					cep(_cep)	 {}
				

		string getNome()	{ return this->nome; 		}
		string getEndereco(){ return this->endereco; 	}
		string getCidade()	{ return this->cidade;		}
		string getEstado()	{ return this->estado;		}
		string getCep()		{ return this->cep;			}


		void print(); // imprime na tela os dados de um cliente cadastrado
		
};

#endif