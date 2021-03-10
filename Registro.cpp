#include <iostream>
#include <string>
#include "Cliente.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"

namespace Registro {

    Cliente registrarCliente(string nome, string endereco, string cidade, string estado, string cep){

        Cliente c;

        c.setNome(nome);
        c.setEndereco(endereco);
        c.setCidade(cidade);
        c.setEstado(estado);
        c.setCEP(cep);

        return c;

    }

    EncomendaNormal registrarNormal(double _peso, Cliente _remetente, Cliente _dest){

        EncomendaNormal e;

        e.setPeso(_peso);
        e.setRemet(_remetente);
        e.setDest(_dest);

        return e;

    }

    EncomendaRelampago registrarRelampago(double peso, Cliente remetente, Cliente dest) {

        EncomendaRelampago e;

        e.setPeso(peso);
        e.setRemet(remetente);
        e.setDest(dest);

        return e;

    }
}
