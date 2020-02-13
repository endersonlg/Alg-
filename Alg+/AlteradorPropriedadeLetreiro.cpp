#include "AlteradorPropriedadeLetreiro.h"


AlteradorPropriedadeLetreiro::AlteradorPropriedadeLetreiro()
{
}

AlteradorPropriedadeLetreiro::~AlteradorPropriedadeLetreiro()
{
}

void AlteradorPropriedadeLetreiro::alterarTexto(Label^ Letreiro, String^ Texto)
{
	Letreiro->Text = Texto;
}
void AlteradorPropriedadeLetreiro::alterarCorDaFonteParaPreto(Label^ Letreiro)
{
	Letreiro->ForeColor = System::Drawing::Color::Black;
}
void AlteradorPropriedadeLetreiro::alterarCorDaFonteParaAmarelo(Label^ Letreiro)
{
	Letreiro->ForeColor = System::Drawing::Color::Yellow;
}
void AlteradorPropriedadeLetreiro::alterarCorDeFundoParaBranco(Label^ Letreiro)
{
	Letreiro->BackColor = System::Drawing::Color::White;
}
void AlteradorPropriedadeLetreiro::alterarCorDeFundoParaCinzaEscuro(Label^ Letreiro)
{
	Letreiro->BackColor = System::Drawing::Color::Gray;
}
void AlteradorPropriedadeLetreiro::alterarCorDeFundoParaAmarelo(Label^ Letreiro)
{
	Letreiro->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
		static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
}

void AlteradorPropriedadeLetreiro::alterarVisiabilidadeParaVerdadeiro(Label^ Letreiro)
{
	Letreiro->Visible = true;
}

void AlteradorPropriedadeLetreiro::alterarVisiabilidadeParaFalso(Label^ Letreiro)
{
	Letreiro->Visible = false;
}
