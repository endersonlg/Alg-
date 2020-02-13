#include "TelaExplicacaoVariaveis1.h"

void Alg::TelaExplicacaoVariaveis1::executarAoClicarBotaoAvancar()
{
	OpcaoContinuar = true;
	this->Visible = false;
}
void Alg::TelaExplicacaoVariaveis1::executarAoClicarBotaoMenuPrincipal()
{
	OpcaoContinuar = false;
	this->Visible = false;
}
int Alg::TelaExplicacaoVariaveis1::getOpcaoContinuar()
{
	int QuantidadeRetorna = 0;
	if (OpcaoContinuar)
		QuantidadeRetorna = 1;
	else
		QuantidadeRetorna = -100;
	return QuantidadeRetorna;
}
void Alg::TelaExplicacaoVariaveis1::fecharJogo()
{
	System::Windows::Forms::Application::Exit();
}