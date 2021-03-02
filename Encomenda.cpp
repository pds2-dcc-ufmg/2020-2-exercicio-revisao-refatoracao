#include <iostream>
#include "Encomenda.hpp"
#include "Cliente.hpp"
		
	void Encomenda::set(bool prioridade, int peso, int custokg, Cliente Remetente, Cliente Destinatario){
		this->relampago=prioridade;
		this->PESO=peso;
		this->CUSTOkg=custokg;
		this->remetente=Remetente;
		this->dest=Destinatario;
	}
		
	double Encomenda::calcula(){
			
		this->T = this->PESO * this->CUSTOkg;
			
		if(this->relampago){
				
			this->T *= 1.25;
		}
			
		return this->T;
	}
	void Encomenda::print(){

		std::cout << "[Remetente]" << std::endl;
		this->remetente.print();
		std::cout << "[Destinatário]" << std::endl;
		this->dest.print();
			
		if(!this->relampago){
			std::cout << "[Encomenda Normal]" << std::endl;
			std::cout << "  Peso: " << this->PESO << std::endl
				<< "  Custo por kg: " << this->CUSTOkg << std::endl
				<< "  Custo total: " << this->T << std::endl;
		}
			
		else{
			std::cout << "[Encomenda Relâmpago]" << std::endl;
			std::cout << "  Peso: " << this->PESO << std::endl
				<< "  Custo por kg: " << this->CUSTOkg << std::endl
				<< "  Taxa adicional: " << 0.25 << std::endl
				<< "  Custo total: " << this->T << std::endl;
				
		}
	}
	bool Encomenda::prioridade(){
			
		return this->relampago;
	}
	
