#include "ConversorDeTipos.h"
#include <string>
#include<sstream>

ConversorDeTipos::ConversorDeTipos()
{
}


ConversorDeTipos::~ConversorDeTipos()
{
}

int ConversorDeTipos::ConverterStringParaInt(string Numero)
{
	int ONumero=0;
	ONumero = std::stoi(Numero);
	return ONumero;
}

double ConversorDeTipos::ConverterStringParaDouble(string Numero)
{
	double ONumero = 0;
	ONumero = std::stod(Numero);
	return ONumero;
}