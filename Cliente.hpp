#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:

		string name;
		string adress;
		string city;
		string state;
		string post_card;
				
		void print(); // imprime na tela os dados de um cliente cadastrado
		
};

#endif
