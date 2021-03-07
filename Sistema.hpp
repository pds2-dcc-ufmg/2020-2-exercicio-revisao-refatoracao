#ifndef SISTEMA_H
#define SISTEMA_H

#include <iostream>
#include <string>
using namespace std;

class Sistema{
	public:			
		Sistema(){}
		~Sistema(){}

		virtual void print() = 0;		
};

#endif