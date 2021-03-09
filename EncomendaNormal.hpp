#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:

	double calculaCusto() override;

	void print() override;

	EncomendaNormal(double Peso, double CustoKg, Cliente* remetente, Cliente* dest);

};


#endif
