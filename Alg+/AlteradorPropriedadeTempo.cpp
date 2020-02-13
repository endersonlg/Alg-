#include "AlteradorPropriedadeTempo.h"


AlteradorPropriedadeTempo::AlteradorPropriedadeTempo()
{
}

AlteradorPropriedadeTempo::~AlteradorPropriedadeTempo()
{
}

void AlteradorPropriedadeTempo::habilitarTempo(Timer^ Tempo)
{
	Tempo->Enabled = true;
}

void AlteradorPropriedadeTempo::desabilitarTempo(Timer^ Tempo)
{
	Tempo->Enabled = false;
}