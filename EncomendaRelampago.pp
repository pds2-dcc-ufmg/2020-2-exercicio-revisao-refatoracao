#include <iostream>
#include "EncomendaRelampago.hpp"

//Construtor da EncomendaRelampago
 EncomendaRelampago::EncomendaRelampago(Cliente remetente,Cliente destinatario,double peso,double custoPorkg){
    _remetente = remetente;
    _destinatario = destinatario;
    _peso = peso;
    _custoPorkg = custoPorkg;
}

//Calculo do custo total incluindo  a taxa adicional
double EncomendaRelampago::calcula(){
    return (_peso * _custoPorkg)+(TAXA_ADICIONAL*(_peso * _custoPorkg));
}

//Print das informações individuiais dessa encomenda 
void EncomendaRelampago::print(){

			std::cout << "[Remetente]" << endl;
			_remetente.print();
			std::cout << "[Destinatário]" << endl;
			_destinatario.print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << _peso << endl
				<< "  Custo por kg: " << _custoPorkg << endl
				<< "  Taxa adicional: " << TAXA_ADICIONAL << endl
				<< "  Custo total: " << calcula() << endl;

		}
