#include "AlteradorPropriedadePainel.h"


AlteradorPropriedadePainel::AlteradorPropriedadePainel()
{
}

void AlteradorPropriedadePainel::alterarVisiabilidadeParaFalso(Panel^ Painel)
{
	Painel->Visible = false;
}
void AlteradorPropriedadePainel::alterarVisiabilidadeParaVerdadeiro(Panel^ Painel)
{
	Painel->Visible = true;
}