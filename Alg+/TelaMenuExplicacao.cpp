#include "TelaMenuExplicacao.h"

int Alg::TelaMenuExplicacao::getOpcao()
{
	return Opcao;
}
void Alg::TelaMenuExplicacao::fecharJogo()
{
	System::Windows::Forms::Application::Exit();
}