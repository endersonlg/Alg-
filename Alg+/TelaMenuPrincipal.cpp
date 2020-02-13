#include "TelaMenuPrincipal.h"

int Alg::TelaMenuPrincipal::getOpcao()
{
	return Opcao;
}
void Alg::TelaMenuPrincipal::fecharJogo()
{
	System::Windows::Forms::Application::Exit();
}
