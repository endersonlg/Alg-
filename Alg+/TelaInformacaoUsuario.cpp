#include "TelaInformacaoUsuario.h"

System::String^ Alg::TelaInformacaoUsuario::getIdade()
{
	return Idade;
}

System::String^ Alg::TelaInformacaoUsuario::getNome()
{
	return Nome;
}
void Alg::TelaInformacaoUsuario::executarAoClicarBotaoJogar()
{
	Nome = CaixaDeTextoNome->Text;
	
	if (testarSeAVariavelNomeEhValida())
	{
		Idade = CaixaDeNumeroIdade->Text;
		Visible = false;
	}
	else
	{
		MessageBox::Show("Escreva seu nome!");
	}
	
}

void Alg::TelaInformacaoUsuario::fecharJogo()
{
	System::Windows::Forms::Application::Exit();
}
bool Alg::TelaInformacaoUsuario::testarSeAVariavelNomeEhValida()
{
	bool Valida;
	if (Nome == "")
	{
		Valida = false;
	}
	else
	{
		Valida = true;
	}
	return Valida;
}