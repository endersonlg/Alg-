#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
ref class AlteradorPropriedadeBotao
{
public:
	AlteradorPropriedadeBotao();
	~AlteradorPropriedadeBotao();
	void alterarVisiabilidadeParaVerdadeiro(Button^);
	void alterarVisiabilidadeParaFalso(Button^);
	void alterarCursorParaMao(Button^);
	void alterarCursorParaNao(Button^);
	void alterarCorDeFundoComMouseEmCimaParaBranco(Button^);
	void alterarCorDeFundoComMouseEmCimaParaAgua(Button^);
	void alterarCorDeFundoParaTransparente(Button^);
	void alterarCorDeFundoParaBranco(Button^);
	void alterarLarguraDaBorda(Button^, int);
	void alterarCorDaBordaParaPreto(Button^);
	void alterarCorDaBordaParaAmarelo(Button^);
	void alterarTextoDoBotao(Button^, String^);
	void alterarImagemDeFundo(Button^, PictureBox^);

};

