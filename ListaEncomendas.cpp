#include "ListaEncomendas.hpp"

ListaEncomendas::ListaEncomendas()
{

}

ListaEncomendas::~ListaEncomendas()
{
    
}

void ListaEncomendas::printRelatorio()
{
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	for(EncomendaNormal en : encomendasNormais) {
        en.print();
    	std::cout << endl;
    }

    for(EncomendaRelampago er : encomendasRelampago) {
        er.print();
    	std::cout << endl;
    }
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << this->encomendasNormais.size()
		 << "\nValor Total: " << this->custoNormal
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << this->encomendasRelampago.size()
		 << "\nValor Total: " << this->custoRelampago
		 << endl;
}


void ListaEncomendas::push_back(EncomendaNormal encomendaNormal)
{
    this->encomendasNormais.push_back(encomendaNormal);
    this->custoNormal += encomendaNormal.getCustoTotal();
}


void ListaEncomendas::push_back(EncomendaRelampago encomendaRelampago)
{
    this->encomendasRelampago.push_back(encomendaRelampago);
    this->custoRelampago += encomendaRelampago.getCustoTotal();
}

double ListaEncomendas::getCustoNormal()
{
    return this->custoNormal;
}


double ListaEncomendas::getCustoRelampago()
{
    return this->custoRelampago;
}