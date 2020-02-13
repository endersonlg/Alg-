#include "TelaExplicacaoRepeticao3.h"

void Alg::TelaExplicacaoRepeticao3::executarAoClicarBotaoAvancar()
{
	OpcaoContinuar = true;
	this->Visible = false;
}
void Alg::TelaExplicacaoRepeticao3::executarAoClicarBotaoMenuPrincipal()
{
	OpcaoContinuar = false;
	this->Visible = false;
}
int Alg::TelaExplicacaoRepeticao3::getOpcaoContinuar()
{
	int QuantidadeRetorna = 0;
	if (OpcaoContinuar)
		QuantidadeRetorna = 1;
	else
		QuantidadeRetorna = -100;
	return QuantidadeRetorna;
}
void Alg::TelaExplicacaoRepeticao3::fecharJogo()
{
	System::Windows::Forms::Application::Exit();
}