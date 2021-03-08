#include <iostream>
#include "EncomendaNormal.hpp"

//Construtor da EncomendaNormal
EncomendaNormal::EncomendaNormal(Cliente remetente,Cliente destinatario,double peso,double custoPorkg){
    _remetente = remetente;
    _destinatario = destinatario;
    _peso = peso;
    _custoPorkg = custoPorkg;
}

//Calculo do custo da Encomenta 
double EncomendaNormal::calcula(){
		return _peso * _custoPorkg;
}

//Print das informações individuiais dessa encomenda 
void EncomendaNormal::print(){

		std::cout << "[Remetente]" << endl;
        _remetente.print();
        std::cout << "[Destinatário]" << endl;
        _destinatario.print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << _peso << endl
			<< "  Custo por kg: " << _custoPorkg << endl
			<< "  Custo total: " << calcula() << endl;

	}
