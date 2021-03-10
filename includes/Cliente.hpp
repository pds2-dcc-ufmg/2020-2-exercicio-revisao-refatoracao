#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <iostream>

using namespace std;

class Cliente {

	public:
		string _name;
		string _address;
		string _city;
		string _state;
		string _zipCode;
				
		void print(); // imprime na tela os dados de um cliente cadastrado

		/**
		 * @brief Construtor da classe
		 * 
		 * @param name 
		 * @param address 
		 * @param city 
		 * @param state 
		 * @param zipCode 
		 */
		Cliente(string name, string address, string city, string state, string zipCode);
		Cliente();
};

#endif