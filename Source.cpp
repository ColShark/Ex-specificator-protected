#include <iostream>

class ClasaDeBaza
{
protected:
	int x;
};

class ClasaDerivata : public ClasaDeBaza
{
public:
	ClasaDerivata();
};

int main()
{
	ClasaDerivata cd;

	system("pause");
}

ClasaDerivata::ClasaDerivata()
{
	x = 23;
	std::cout << "Valoarea variabilei x este " << x << std::endl;
}