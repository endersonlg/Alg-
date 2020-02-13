#include "AlteradorPropriedadeBotao.h"


AlteradorPropriedadeBotao::AlteradorPropriedadeBotao()
{
}
AlteradorPropriedadeBotao::~AlteradorPropriedadeBotao()
{
}

void AlteradorPropriedadeBotao::alterarVisiabilidadeParaVerdadeiro(System::Windows::Forms::Button^ Botao)
{
	Botao->Visible = true;
}
void AlteradorPropriedadeBotao::alterarVisiabilidadeParaFalso(System::Windows::Forms::Button^ Botao)
{
	Botao->Visible = false;
}
void AlteradorPropriedadeBotao::alterarCursorParaMao(System::Windows::Forms::Button^ Botao)
{
	Botao->Cursor = System::Windows::Forms::Cursors::Hand;
}
void AlteradorPropriedadeBotao::alterarTextoDoBotao(Button^ Botao, String^ Nome)
{
	Botao->Text = Nome;
}
void AlteradorPropriedadeBotao::alterarImagemDeFundo(Button^ Botao, PictureBox^ Imagem)
{
	Botao->BackgroundImage = Imagem->Image;
}
void AlteradorPropriedadeBotao::alterarCursorParaNao(System::Windows::Forms::Button^ Botao)
{
	Botao->Cursor = System::Windows::Forms::Cursors::No;
}
void AlteradorPropriedadeBotao::alterarCorDeFundoComMouseEmCimaParaBranco(System::Windows::Forms::Button^ Botao)
{
	Botao->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
	Botao->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
}

void AlteradorPropriedadeBotao::alterarCorDeFundoComMouseEmCimaParaAgua(System::Windows::Forms::Button^ Botao)
{
	Botao->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Aqua;
	Botao->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Aqua;
}

void AlteradorPropriedadeBotao::alterarCorDeFundoParaTransparente(Button^ Botao)
{
	Botao->BackColor = System::Drawing::Color::Transparent;
}

void AlteradorPropriedadeBotao::alterarCorDeFundoParaBranco(Button^ Botao)
{
	Botao->BackColor = System::Drawing::Color::White;
}
void AlteradorPropriedadeBotao::alterarLarguraDaBorda(Button^ Botao, int Largura)
{
	Botao->FlatAppearance->BorderSize = Largura;
}
void AlteradorPropriedadeBotao::alterarCorDaBordaParaPreto(Button^ Botao)
{
	Botao->FlatAppearance->BorderColor = System::Drawing::Color::Black;
}
void AlteradorPropriedadeBotao::alterarCorDaBordaParaAmarelo(Button^ Botao)
{
	Botao->FlatAppearance->BorderColor = System::Drawing::Color::Yellow;
}