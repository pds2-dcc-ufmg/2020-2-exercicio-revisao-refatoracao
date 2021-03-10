#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <iostream>

using namespace std;

class Cliente {

	public:
    /**
     * @brief Construtor padrão da classe (default)
     * 
     */
    Cliente();

		/**
		 * @brief Construtor personalizado da classe
		 * 
		 * @param name 
		 * @param address 
		 * @param city 
		 * @param state 
		 * @param zipCode 
		 */
		Cliente(string name, string address, string city, string state, string zipCode);

    /**
     * @brief imprime na tela os dados de um cliente cadastrado
     * 
     */
    void print(); 

  protected:
    string _name;
    string _address;
    string _city;
    string _state;
    string _zipCode;
		
};

#endif