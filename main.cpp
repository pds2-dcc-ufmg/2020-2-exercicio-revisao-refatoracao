#include <iostream>
#include "Cliente.hpp"
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Lista.hpp"
#include "Lista.cpp"
#include "No.hpp"
#include "No.cpp"


int main(){

	// criando e inserindo clientes
	Cliente cliente0 ("Thales","Rua dos Pré-Socráticos","Miletus","Ionia","548 a.C.");
	Cliente cliente1 ("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");
	Cliente cliente2 ("Platão", "Praça das Formas",	"Atenas", "Ática", "348 a.C");
	Cliente cliente3 ("Sócrates","Rua do Elenchus","Atenas", "Ática", "399 a.C.");
	Cliente cliente4 ("Pitágoras", "Praça dos Quadrados dos Catetos","Samos", "Egeu","571 a.C.");
	Cliente cliente5 ("Parmênides","Rua do Não Ser","Eleia", "Magna Grécia","460 a.C.");
	Cliente cliente6 ("Empédocles", "Rua dos Quatro Elementos","Agrigento", "Sicília", "495 a.C.");
	Cliente cliente7 ("Anexágoras", "Avenida da Mente Cósmica", "Clazômenas","Jónia", "499 a.C.");

	int _quantEncomendasNormais = 0;
	int _quantEncomendasRelampago = 0;

	// criando e inserindo encomendas normais
	EncomendaNormal encomenda0 (5, 12, cliente0, cliente1, _quantEncomendasNormais++);
	EncomendaNormal encomenda1 (10, 12, cliente1, cliente2, _quantEncomendasNormais++);
	EncomendaNormal encomenda2 (7, 12, cliente2, cliente3, _quantEncomendasNormais++);
	EncomendaNormal encomenda3 (2, 12, cliente3, cliente4, _quantEncomendasNormais++);
	EncomendaNormal encomenda4 (3, 12, cliente4, cliente5, _quantEncomendasNormais++);

	// criando lista encadeada de encomendas normais e inserindo seus elementos
	Lista<EncomendaNormal> *listaEncomendasNormais = new Lista<EncomendaNormal>();
	listaEncomendasNormais->inserir(encomenda0);
	listaEncomendasNormais->inserir(encomenda1);
	listaEncomendasNormais->inserir(encomenda2);
	listaEncomendasNormais->inserir(encomenda3);
	listaEncomendasNormais->inserir(encomenda4);

	// criando e inserindo encomendas relampago
	EncomendaRelampago encomenda5 (13, 18, cliente5, cliente6, _quantEncomendasRelampago++);
	EncomendaRelampago encomenda6 (6, 18, cliente6, cliente7, _quantEncomendasRelampago++);
	EncomendaRelampago encomenda7 (8, 18, cliente7, cliente0, _quantEncomendasRelampago++);

	// criando lista encadeada de encomendas relampago e inserindo seus elementos
	Lista<EncomendaRelampago> *listaEncomendasRelampago = new Lista<EncomendaRelampago>();
	listaEncomendasRelampago->inserir(encomenda5);
	listaEncomendasRelampago->inserir(encomenda6);
	listaEncomendasRelampago->inserir(encomenda7);

	std::cout << "\n>> Relatário de encomendas <<" << std::endl;

	double _custoEntregasNormais = listaEncomendasNormais->printAndCalc(); // printando todas as encomendas da lista e retornando seu custo total
	double _custoEntregasRelampago = listaEncomendasRelampago->printAndCalc(); // printando todas as encomendas da lista e retornando seu custo total

	std::cout << "\n>> Encomendas Normais <<" << "\nQuantidade: " << _quantEncomendasNormais << "\nValor Total: " << _custoEntregasNormais<< std::endl;
	std::cout << "\n>> Encomendas Relâmpago <<" << "\nQuantidade: " << _quantEncomendasRelampago << "\nValor Total: " << _custoEntregasRelampago << std::endl;


} // fim do metodo main
