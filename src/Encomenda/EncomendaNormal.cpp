#include "EncomendaNormal.hpp"

double EncomendaNormal::calcula_tarifa_total() {
    _tarifa_total = _peso * _custo_por_kg;

    return _tarifa_total;
}

void EncomendaNormal::print() {
    print_remetente_destinatario();
    std::cout << "[Encomenda Normal]" << std::endl;
    std::cout << "  Peso: " << _peso << std::endl;
    std::cout << "  Custo por kg: " << _custo_por_kg << std::endl;
    std::cout << "  Custo total: " << _tarifa_total << std::endl;
}