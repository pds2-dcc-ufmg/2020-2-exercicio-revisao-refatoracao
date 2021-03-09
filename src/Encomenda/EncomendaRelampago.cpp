#include "EncomendaRelampago.hpp"

double EncomendaRelampago::calcula_tarifa_total() {
    _tarifa_total = _peso * _custo_por_kg;
    _tarifa_total += _tarifa_total * EncomendaRelampago::TARIFA_RELAMPAGO;
			
    return _tarifa_total;
}

void EncomendaRelampago::print() {
    print_remetente_destinatario();
    std::cout << "[Encomenda Relâmpago]" << std::endl;
    std::cout << "  Peso: " << _peso << std::endl;
    std::cout << "  Custo por kg: " << _custo_por_kg << std::endl;
    std::cout << "  Taxa adicional: " << EncomendaRelampago::TARIFA_RELAMPAGO << std::endl;
    std::cout << "  Custo total: " << _tarifa_total << std::endl;
}