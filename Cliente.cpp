#include <iostream>
#include <string>
#include "Cliente.hpp"

using namespace std;

Cliente::Cliente (string name, string adress, string zip_code, string city, string state) {
	_name = name;
	_adress = adress;
	_zip_code = zip_code;
	_city = city;
	_state = state;
	
}
string Cliente::get_name(){
	return _name;
}

string Cliente::get_adress(){
	return _adress;
}

string Cliente::get_zip_code(){
	return _zip_code;
}

string Cliente::get_city(){
	return _city;
}

string Cliente::get_state(){
	return _state;
}

void Cliente::print(){
	cout << "  Nome: " << _name << endl
		 << "  Endereço: " << _adress << endl
		 << "  Cidade: " << _city << endl
		 << "  Estado: " << _state << endl
		 << "  CEP: " << _zip_code << endl;

}