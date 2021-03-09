#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{

	public:

		// Atributos da classe Encomenda
		double _peso = 0.0;
		double _custo_kg = 0.0;
		double _custo_total = 0.0;

		// Construtor da classe Encomenda
		Encomenda(double peso, double custo, Cliente remetente, Cliente destinatario) 
		{
			this->_peso = peso;
			this->_custo_kg = custo;
			this->_remetente = remetente;
			this->_destinatario = destinatario;
		}

		// Impressão dos atributos da classe
		void print() 
		{
			std::cout << "[Remetente]" << std::endl;
			_remetente.print();
			std::cout << "[Destinatário]" << std::endl;
			_destinatario.print();
		}

		// Cálculo do custo total da encomenda
		virtual double calcula() = 0;

		virtual void print_data() = 0;

		// Formatação da impressão final e cálculo do custo total
		double metodo()
		{
			this->print();
			this->print_data();
			std::cout << std::endl;
			return this->calcula();
		}

	private:

		// Clientes associados à encomenda
		Cliente _remetente;
		Cliente _destinatario;
			
};

#endif