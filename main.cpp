#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include <vector>

int main(){
	
	Cliente cli0;
	cli0._nome = "Thales";
	cli0._endereco = "Rua dos Pré-Socráticos";
	cli0._cidade = "Miletus";
	cli0._estado = "Ionia";
	cli0._cep = "548 a.C.";

	Cliente cli1;
	cli1._nome = "Aristóteles";
	cli1._endereco = "Avenida do Meio-Termo";
	cli1._cidade = "Atenas";
	cli1._estado = "Ática";
	cli1._cep = "384 a.C.";

	Cliente cli2;
	cli2._nome = "Platão";
	cli2._endereco = "Praça das Formas";
	cli2._cidade = "Atenas";
	cli2._estado = "Ática";
	cli2._cep = "348 a.C";

	Cliente cli3;
	cli3._nome = "Sócrates";
	cli3._endereco = "Rua do Elenchus";
	cli3._cidade = "Atenas";
	cli3._estado = "Ática";
	cli3._cep = "399 a.C.";

	Cliente cli4;
	cli4._nome = "Pitágoras";
	cli4._endereco = "Praça dos Quadrados dos Catetos";
	cli4._cidade = "Samos";
	cli4._estado = "Egeu";
	cli4._cep = "571 a.C.";

	Cliente cli5;
	cli5._nome = "Parmênides";
	cli5._endereco = "Rua do Não Ser";
	cli5._cidade = "Eleia";
	cli5._estado = "Magna Grécia";
	cli5._cep = "460 a.C.";

	Cliente cli6;
	cli6._nome = "Empédocles";
	cli6._endereco = "Rua dos Quatro Elementos";
	cli6._cidade = "Agrigento";
	cli6._estado = "Sicília";
	cli6._cep = "495 a.C.";

	Cliente cli7;
	cli7._nome = "Anaxágoras";
	cli7._endereco = "Avenida da Mente Cósmica";
	cli7._cidade = "Clazômenas";
	cli7._estado = "Jónia";
	cli7._cep = "499 a.C.";

	int quantidadeNormal = 0;
	int quantidadeRelampago = 0;

	vector<EncomendaNormal> EncomendasNormais;
	vector<EncomendaRelampago> EncomendasRelampago;

	EncomendaNormal enc0;
	enc0._peso = 5;
	enc0._custoKg = 12;
	enc0._remetente = cli0;
	enc0._dest = cli1;
	quantidadeNormal++;
	EncomendasNormais.push_back(enc0);

	EncomendaNormal enc1;
	enc1._peso = 10;
	enc1._custoKg = 12;
	enc1._remetente = cli1;
	enc1._dest = cli2;
	quantidadeNormal++;
	EncomendasNormais.push_back(enc1);

	EncomendaNormal enc2;
	enc2._peso = 7;
	enc2._custoKg = 12;
	enc2._remetente = cli2;
	enc2._dest = cli3;
	quantidadeNormal++;
	EncomendasNormais.push_back(enc2);

	EncomendaNormal enc3;
	enc3._peso = 2;
	enc3._custoKg = 12;
	enc3._remetente = cli3;
	enc3._dest = cli4;
	quantidadeNormal++;
	EncomendasNormais.push_back(enc3);

	EncomendaNormal enc4;
	enc4._peso = 3;
	enc4._custoKg = 12;
	enc4._remetente = cli4;
	enc4._dest = cli5;
	quantidadeNormal++;
	EncomendasNormais.push_back(enc4);

	EncomendaRelampago enc5;
	enc5._peso = 13;
	enc5._custoKg = 18;
	enc5._remetente = cli5;
	enc5._dest = cli6;
	quantidadeRelampago++;
	EncomendasRelampago.push_back(enc5);

	EncomendaRelampago enc6;
	enc6._peso = 6;
	enc6._custoKg = 18;
	enc6._remetente = cli6;
	enc6._dest = cli7;
	quantidadeRelampago++;
	EncomendasRelampago.push_back(enc6);

	EncomendaRelampago enc7;
	enc7._peso = 8;
	enc7._custoKg = 18;
	enc7._remetente = cli7;
	enc7._dest = cli0;
	quantidadeRelampago++;
	EncomendasRelampago.push_back(enc7);
	
	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	double custoNormal = 0;
	double custoRelampago = 0;

	for(int i = 0; i < quantidadeNormal; i++){
		EncomendasNormais[i].calcula();
		EncomendasNormais[i].print();
		custoNormal += EncomendasNormais[i].calcula();
		std::cout << std::endl;
	}

	for(int i = 0; i < quantidadeRelampago; i++){
		EncomendasRelampago[i].calcula();
		EncomendasRelampago[i].print();
		custoRelampago += EncomendasRelampago[i].calcula();
		std::cout << std::endl;
	}
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantidadeNormal
		 << "\nValor Total: " << custoNormal
		 << std::endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantidadeRelampago
		 << "\nValor Total: " << custoRelampago
		 << std::endl;
	
}
