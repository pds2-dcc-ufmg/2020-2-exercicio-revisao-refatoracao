#include <iostream>
#include "Encomenda.hpp"
#include "Cliente.hpp"
		
	Encomenda::Encomenda(bool prioridade, int peso, int custokg, Cliente Remetente, Cliente Destinatario){
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

		cout << "[Remetente]" << endl;
		this->remetente.print();
		cout << "[Destinatário]" << endl;
		this->dest.print();
			
		if(!this->relampago){
			cout << "[Encomenda Normal]" << endl;
			cout << "  Peso: " << this->PESO << endl
				<< "  Custo por kg: " << this->CUSTOkg << endl
				<< "  Custo total: " << this->T << endl;
		}
			
		else{
			cout << "[Encomenda Relâmpago]" << endl;
			cout << "  Peso: " << this->PESO << endl
				<< "  Custo por kg: " << this->CUSTOkg << endl
				<< "  Taxa adicional: " << 0.25 << endl
				<< "  Custo total: " << this->T << endl;
				
		}
	}
	bool Encomenda::prioridade(){
			
		return this->relampago;
	}
	
