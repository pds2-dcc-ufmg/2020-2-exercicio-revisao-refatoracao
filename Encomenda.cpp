#include <iostream>
#include "Encomenda.hpp"
#include "Cliente.hpp"
		
	void Encomenda::set(bool prioridade, int peso, int custokg, Cliente remetente, Cliente destinatario){
		this->Prioridade=prioridade;
		this->Peso=peso;
		this->CustoKg=custokg;
		this->Remetente=remetente;
		this->Destinatario=destinatario;
	}
		
	double Encomenda::calcula(){
			
		this->Total = this->Peso * this->CustoKg;
			
		if(this->Prioridade){
				
			this->Total *= 1.25;
		}
			
		return this->Total;
	}
	void Encomenda::print(){

		std::cout << "[Remetente]" << std::endl;
		this->Remetente.print();
		std::cout << "[Destinatário]" << std::endl;
		this->Destinatario.print();
			
		if(this->Prioridade){
			std::cout << "[Encomenda Relâmpago]" << std::endl;
			std::cout << "  Peso: " << this->Peso << std::endl
				<< "  Custo por kg: " << this->CustoKg << std::endl
				<< "  Taxa adicional: " << 0.25 << std::endl
				<< "  Custo total: " << this->Total << std::endl;
		}
			
		else{
			std::cout << "[Encomenda Normal]" << std::endl;
			std::cout << "  Peso: " << this->Peso << std::endl
				<< "  Custo por kg: " << this->CustoKg << std::endl
				<< "  Custo total: " << this->Total << std::endl;
				
		}
	}
	bool Encomenda::prioridade(){
			
		return this->Prioridade;
	}
	
