#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
ref class AlteradorPropriedadeCaixaDeTexto
{
public:
	AlteradorPropriedadeCaixaDeTexto();
	~AlteradorPropriedadeCaixaDeTexto();
	void alterarVisiabilidadeParaVerdadeiro(TextBox^);
	void alterarVisiabilidadeParaFalso(TextBox^);
	void alterarCursorParaMao(TextBox^);
	void alterarCursorParaNao(TextBox^);
	void alterarTexto(TextBox^, String^);
	void alterarCorDeFundoParaBranco(TextBox^);
	void alterarCorDeFundoParaAmarelo(TextBox^);
	void alterarCorDeFundoParaTransparente(TextBox^);
	void alterarCorDeFundoParaCinzaEscuro(TextBox^);
	void alterarBordaParaNenhuma(TextBox^);
	void alterarBordaParaFixada3d(TextBox^);
	void desativarCaixaDeTexto(TextBox^);
	void ativarCaixaDeTexto(TextBox^);
	void mudarLocalizacao(TextBox^, int, int);
};

