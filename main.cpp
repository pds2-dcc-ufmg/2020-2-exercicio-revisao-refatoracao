#include <iostream>
#include <vector>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

using namespace std;

void printEncNormais(vector<EncomendaNormal> vetorEncNormais, int numEncNormais, double custoNormais){
    for(int i = 0; i < numEncNormais; i++){
        vetorEncNormais[i].printEncomenda();
        custoNormais += vetorEncNormais[i].calculaPreco();
        std::cout << endl;
    }
}
void printEncRelampago(vector<EncomendaRelampago> vetorEncRelampago, int numEncRelampago, double custoRelampago){
    for(int i = 0; i < numEncRelampago; i++){
        vetorEncRelampago[i].printEncomenda();
        custoRelampago += vetorEncRelampago[i].calculaPreco();
        std::cout << endl;
    }
}
void printRelatorio(vector<EncomendaNormal> vetorEncNormais, vector<EncomendaRelampago> vetorEncRelampago, int numEncNormais, int numEncRelampago){
    double custoNormais = 0;
	double custoRelampago = 0;
	std::cout << "\n>> Relatório de encomendas <<" << endl;
	printEncNormais(vetorEncNormais, numEncNormais, custoNormais);
    printEncRelampago(vetorEncRelampago, numEncRelampago, custoRelampago);
    std::cout << "\n>> Encomendas Normais <<"
    << "\nQuantidade: " << numEncNormais
    << "\nValor Total: " << custoNormais
    << endl
    << "\n>> Encomendas Relâmpago <<"
    << "\nQuantidade: " << numEncRelampago
    << "\nValor Total: " << custoRelampago
    << endl;
}

int main(){

    int numEncNormais = 0;
	int numEncRelampago = 0;

	vector<EncomendaNormal> vetorEncNormais;
	vector<EncomendaRelampago> vetorEncRelampago;

	Cliente cli0;
	cli0.setNome("Thales");
	cli0.setEndereco("Rua dos Pré-Socráticos");
	cli0.setCidade("Miletus");
	cli0.setEstado("Ionia");
	cli0.setCep("548 a.C.");

	Cliente cli1;
	cli1.setNome("Aristóteles");
	cli1.setEndereco("Avenida do Meio-Termo");
	cli1.setCidade("Atenas");
	cli1.setEstado("Ática");
	cli1.setCep("384 a.C.");

	Cliente cli2;
	cli2.setNome("Platão");
	cli2.setEndereco("Praça das Formas");
	cli2.setCidade("Atenas");
	cli2.setEstado("Ática");
	cli2.setCep("348 a.C");

	Cliente cli3;
	cli3.setNome("Sócrates");
	cli3.setEndereco("Rua do Elenchus");
	cli3.setCidade("Atenas");
	cli3.setEstado("Ática");
	cli3.setCep("399 a.C.");

	Cliente cli4;
	cli4.setNome("Pitágoras");
	cli4.setEndereco("Praça dos Quadrados dos Catetos");
	cli4.setCidade("Samos");
	cli4.setEstado("Egeu");
	cli4.setCep("571 a.C.");

	Cliente cli5;
	cli5.setNome("Parmênides");
	cli5.setEndereco("Rua do Não Ser");
	cli5.setCidade("Eleia");
	cli5.setEstado("Magna Grécia");
	cli5.setCep("460 a.C.");

	Cliente cli6;
	cli6.setNome("Empédocles");
	cli6.setEndereco("Rua dos Quatro Elementos");
	cli6.setCidade("Agrigento");
	cli6.setEstado("Sicília");
	cli6.setCep("495 a.C.");

	Cliente cli7;
	cli7.setNome("Anaxágoras");
	cli7.setEndereco("Avenida da Mente Cósmica");
	cli7.setCidade("Clazômenas");
	cli7.setEstado("Jónia");
	cli7.setCep("499 a.C.");

	EncomendaNormal enc0;
	enc0.setPeso(5.0);
	enc0.setCustoKg(12.0);
	enc0.setRemetente(cli0);
	enc0.setDestinatario(cli1);
	numEncNormais++;
	vetorEncNormais.push_back(enc0);

	EncomendaNormal enc1;
	enc1.setPeso(10.0);
	enc1.setCustoKg(12.0);
	enc1.setRemetente(cli1);
	enc1.setDestinatario(cli2);
	numEncNormais++;
	vetorEncNormais.push_back(enc1);

	EncomendaNormal enc2;
	enc2.setPeso(7.0);
	enc2.setCustoKg(12.0);
	enc2.setRemetente(cli2);
	enc2.setDestinatario(cli3);
	numEncNormais++;
	vetorEncNormais.push_back(enc2);

	EncomendaNormal enc3;
	enc3.setPeso(3.0);
	enc3.setCustoKg(12.0);
	enc3.setRemetente(cli3);
	enc3.setDestinatario(cli4);
	numEncNormais++;
	vetorEncNormais.push_back(enc3);

	EncomendaNormal enc4;
	enc4.setPeso(3.0);
	enc4.setCustoKg(12.0);
	enc4.setRemetente(cli4);
	enc4.setDestinatario(cli5);
	numEncNormais++;
	vetorEncNormais.push_back(enc4);

	EncomendaRelampago enc5;
	enc5.setPeso(13.0);
	enc5.setCustoKg(18.0);
	enc5.setRemetente(cli5);
	enc5.setDestinatario(cli6);
	numEncRelampago++;
	vetorEncRelampago.push_back(enc5);

	EncomendaRelampago enc6;
	enc6.setPeso(6.0);
	enc6.setCustoKg(18.0);
	enc6.setRemetente(cli6);
	enc6.setDestinatario(cli7);
	numEncRelampago++;
	vetorEncRelampago.push_back(enc6);

	EncomendaRelampago enc7;
	enc7.setPeso(8.0);
	enc7.setCustoKg(18.0);
	enc7.setRemetente(cli7);
	enc7.setDestinatario(cli0);
	numEncRelampago++;
	vetorEncRelampago.push_back(enc7);

    printRelatorio(vetorEncNormais, vetorEncRelampago, numEncNormais, numEncRelampago);
}
