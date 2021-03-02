#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include <vector> 
using namespace std;

int main(){
	vector<Cliente> vetor_clientes; 
	vector<EncomendaNormal> vetor_encomendas_normais;
	vector<EncomendaRelampago> vetor_encomendas_relampago;

	string nomes_clientes[8] = {"Thales","Aristóteles","Platão","Sócrates","Pitágoras","Parmênides","Empédocles","Anaxágoras"};
	string endr_clientes[8] = {
	"Rua dos Pré-Socráticos",
	"Avenida do Meio-Termo",
	"Praça das Formas",
	"Rua do Elenchus",
	"Praça dos Quadrados dos Catetos",
	"Rua do Não Ser",
	"Rua dos Quatro Elementos",
	"Avenida da Mente Cósmica"
	};
	string cidades_clientes[8] = {"Miletus","Atenas","Atenas","Atenas","Samos","Eleia","Agrigento","Clazômenas"};
	string estados_clientes[8] = {"Ionia","Ática","Ática","Ática","Egeu","Magna Grécia","Sicília","Jónia"};
	string cep_clientes[8] = {"548 a.C.","384 a.C.","348 a.C","399 a.C.","571 a.C.","460 a.C.","495 a.C.","499 a.C."};
	
	int num_encomendas_normais = 0; 
	int num_encomendas_relampago = 0;

	double peso_encomendas_normal[5] = {5,10,7,2,3};
	double custo_encomenda_normal = 12;

	double peso_encomendas_relampago[3] = {13,6,8};
	double custo_encomenda_relampago = 18;


	for(int i = 0; i < 8; i++){
		Cliente cli;
		cli.set_NOME(nomes_clientes[i]);
		cli.set_ENDERECO(endr_clientes[i]);
		cli.set_CIDADE(cidades_clientes[i]);
		cli.set_ESTADO(estados_clientes[i]);
		cli.set_CEP(cep_clientes[i]);
		vetor_clientes.push_back(cli);
	}

	for(int i = 0; i < 5; i++){
		EncomendaNormal enc_n;
		enc_n.set_PESO(peso_encomendas_normal[i]);
		enc_n.set_CUSTOkg(custo_encomenda_normal);
		enc_n.set_remetente(vetor_clientes[i]);
		enc_n.set_dest(vetor_clientes[i+1]) ;
		enc_n.set_CUSTO_TOTAL(enc_n.calcula_custo());
		vetor_encomendas_normais.push_back(enc_n);
	}
	for(int j = 0; j < 3; j++){
		EncomendaRelampago enc_r;
		enc_r.set_PESO(peso_encomendas_relampago[j]);
		enc_r.set_CUSTOkg(custo_encomenda_relampago);
		enc_r.set_remetente(vetor_clientes[5+j]);
		if(j != 2){
			enc_r.set_dest(vetor_clientes[5+j+1]);
		}
		else{
			enc_r.set_dest(vetor_clientes[0]);
		}
		enc_r.set_CUSTO_TOTAL(enc_r.calcula_custo());
		vetor_encomendas_relampago.push_back(enc_r);
	}

	num_encomendas_normais = vetor_encomendas_normais.size();
	num_encomendas_relampago = vetor_encomendas_relampago.size();
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custo_normal = 0;
	double custo_relampago = 0; 

	for(EncomendaNormal encomenda_n : vetor_encomendas_normais){
		encomenda_n.calcula_custo();
		encomenda_n.print();
		custo_normal += encomenda_n.calcula_custo();
		std::cout << endl;
	}
	for(EncomendaRelampago encomenda_r: vetor_encomendas_relampago){
		encomenda_r.calcula_custo();
		encomenda_r.print();
		custo_relampago += encomenda_r.calcula_custo();
		std::cout << endl;
	}

	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << num_encomendas_normais
		 << "\nValor Total: " << custo_normal
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << num_encomendas_relampago
		 << "\nValor Total: " << custo_relampago
		 << endl;
	
}