#include "TelaExplicacaoVariaveis2.h"

void Alg::TelaExplicacaoVariaveis2::executarAoClicarBotaoAvancar()
{
	OpcaoContinuar = true;
	this->Visible = false;
}
void Alg::TelaExplicacaoVariaveis2::executarAoClicarBotaoMenuPrincipal()
{
	OpcaoContinuar = false;
	this->Visible = false;
}
int Alg::TelaExplicacaoVariaveis2::getOpcaoContinuar()
{
	int QuantidadeRetorna = 0;
	if (OpcaoContinuar)
		QuantidadeRetorna = 1;
	else
		QuantidadeRetorna = -100;
	return QuantidadeRetorna;
}
void Alg::TelaExplicacaoVariaveis2::fecharJogo()
{
	System::Windows::Forms::Application::Exit();
}