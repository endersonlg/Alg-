#include "AlteradorPropriedadeCaixaDeTexto.h"


AlteradorPropriedadeCaixaDeTexto::AlteradorPropriedadeCaixaDeTexto()
{
}
AlteradorPropriedadeCaixaDeTexto::~AlteradorPropriedadeCaixaDeTexto()
{
}
void AlteradorPropriedadeCaixaDeTexto::alterarVisiabilidadeParaVerdadeiro(TextBox^ CaixaDeTexto)
{
	CaixaDeTexto->Visible = true;
}
void AlteradorPropriedadeCaixaDeTexto::alterarVisiabilidadeParaFalso(TextBox^ CaixaDeTexto)
{
	CaixaDeTexto->Visible = false;
}
void AlteradorPropriedadeCaixaDeTexto::alterarCursorParaMao(TextBox^ CaixaDeTexto)
{
	CaixaDeTexto->Cursor = System::Windows::Forms::Cursors::Hand;
}
void AlteradorPropriedadeCaixaDeTexto::alterarCursorParaNao(TextBox^ CaixaDeTexto)
{
	CaixaDeTexto->Cursor = System::Windows::Forms::Cursors::No;
}
void AlteradorPropriedadeCaixaDeTexto::alterarTexto(TextBox^ CaixaDeTexto, String^ Texto)
{
	CaixaDeTexto->Text = Texto;
}
void AlteradorPropriedadeCaixaDeTexto::alterarCorDeFundoParaBranco(TextBox^ CaixaDeTexto)
{
	CaixaDeTexto->BackColor = System::Drawing::Color::White;
}
void AlteradorPropriedadeCaixaDeTexto::alterarCorDeFundoParaTransparente(TextBox^ CaixaDeTexto)
{
	CaixaDeTexto->BackColor = System::Drawing::Color::Transparent;
}
void AlteradorPropriedadeCaixaDeTexto::alterarCorDeFundoParaCinzaEscuro(TextBox^ CaixaDeTexto)
{
	CaixaDeTexto->BackColor = System::Drawing::Color::Gray;
}
void AlteradorPropriedadeCaixaDeTexto::alterarCorDeFundoParaAmarelo(TextBox^ CaixaDeTexto)
{
	CaixaDeTexto->BackColor = System::Drawing::Color::Yellow;
}
void AlteradorPropriedadeCaixaDeTexto::alterarBordaParaNenhuma(TextBox^ CaixaDeTexto)
{
	CaixaDeTexto->BorderStyle = System::Windows::Forms::BorderStyle::None;
}
void AlteradorPropriedadeCaixaDeTexto::alterarBordaParaFixada3d(TextBox^ CaixaDeTexto)
{
	CaixaDeTexto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
}
void AlteradorPropriedadeCaixaDeTexto::ativarCaixaDeTexto(TextBox^ CaixaDeTexto)
{
	CaixaDeTexto->Enabled = true;
}
void AlteradorPropriedadeCaixaDeTexto::desativarCaixaDeTexto(TextBox^ CaixaDeTexto)
{
	CaixaDeTexto->Enabled = false;
}
void AlteradorPropriedadeCaixaDeTexto::mudarLocalizacao(TextBox^ CaixaDeTexto, int x, int y)
{
	CaixaDeTexto->Location = System::Drawing::Point(x, y);
}