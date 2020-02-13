#include "TelaExplicacaoAlgoritmo3.h"

void Alg::TelaExplicacaoAlgoritmo3::executarAoClicarBotaoAvancar()
{
	OpcaoContinuar = true;
	this->Visible = false;
}
void Alg::TelaExplicacaoAlgoritmo3::executarAoClicarBotaoMenuPrincipal()
{
	OpcaoContinuar = false;
	this->Visible = false;
}
int Alg::TelaExplicacaoAlgoritmo3::getOpcaoContinuar()
{
	int QuantidadeRetorna = 0;
	if (OpcaoContinuar)
		QuantidadeRetorna = 1;
	else
		QuantidadeRetorna = -100;
	return QuantidadeRetorna;
}
void Alg::TelaExplicacaoAlgoritmo3::fecharJogo()
{
	System::Windows::Forms::Application::Exit();
}