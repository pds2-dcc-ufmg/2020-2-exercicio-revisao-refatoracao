#include <iostream>
#include <string>
#include "Encomenda.hpp"

		void Encomenda::print(){
			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			destinatario.print();
		};

    void Encomenda::preencher_enc(double PESO_, double CUSTOkg_, Cliente remetente_, Cliente destinatario_){
        PESO = PESO_;
        CUSTOkg = CUSTOkg_;
        remetente = remetente_;
        destinatario = destinatario_;
    };