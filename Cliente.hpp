#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

using namespace std;

class Cliente{
	private:
		string _name;
		string _adress;
		string _zip_code;
		string _city;
		string _state;

	public:
		Cliente(string name, string adress, string zip_code, string city, string state);
		
		string get_name();
		string get_adress();
		string get_zip_code();
		string get_city();
		string get_state();
		
		void print();
		
};

#endif