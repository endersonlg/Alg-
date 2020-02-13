#include "TelaExplicacaoRepeticao2.h"

void Alg::TelaExplicacaoRepeticao2::executarAoClicarBotaoAvancar()
{
	OpcaoContinuar = true;
	this->Visible = false;
}
void Alg::TelaExplicacaoRepeticao2::executarAoClicarBotaoMenuPrincipal()
{
	OpcaoContinuar = false;
	this->Visible = false;
}
int Alg::TelaExplicacaoRepeticao2::getOpcaoContinuar()
{
	int QuantidadeRetorna = 0;
	if (OpcaoContinuar)
		QuantidadeRetorna = 1;
	else
		QuantidadeRetorna = -100;
	return QuantidadeRetorna;
}
void Alg::TelaExplicacaoRepeticao2::fecharJogo()
{
	System::Windows::Forms::Application::Exit();
}