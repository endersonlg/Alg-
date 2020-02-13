#pragma once
#include <iostream>
#include <string>

using namespace std;

class ConversorDeTipos
{
public:
	ConversorDeTipos();
	~ConversorDeTipos();
	int ConverterStringParaInt(string);
	double ConverterStringParaDouble(string);
};
