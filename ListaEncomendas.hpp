#ifndef LISTAENCOMENDAS_H
#define LISTAENCOMENDAS_H

#include <vector>

template <class T>
class ListaEncomendas
{

public:
    /**
     * @brief Construtor para a classe ListaEncomendas
     * 
     * @param _encomendas 
     */
    ListaEncomendas(std ::vector<T> *_encomendas) : encomendas(_encomendas){};
    
    /*Monta o relatório com todas as encomendas da lista*/
    void calcularTodos()
    {
        for (T encomenda : *(this->encomendas))
        {
            encomenda.print();
            this->addValorTotalEncomendas(encomenda.calcularTotal());
            std::cout << std ::endl;
        }
    };

    double getValorTotalEncomendas() { return valorTotalEncomendas; }
    int getQuantidadeEncomendas() { return this->encomendas->size(); }

private:
    std ::vector<T> *encomendas;
    void addValorTotalEncomendas(double _valorTotalEncomendas) { this->valorTotalEncomendas += _valorTotalEncomendas; }
    double valorTotalEncomendas = 0.0;
};

#endif