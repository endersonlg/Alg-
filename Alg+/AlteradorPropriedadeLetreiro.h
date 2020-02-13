#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
ref class AlteradorPropriedadeLetreiro
{
public:
	AlteradorPropriedadeLetreiro();
	~AlteradorPropriedadeLetreiro();
	void alterarTexto(Label^,String^);
	void alterarCorDeFundoParaBranco(Label^);
	void alterarCorDeFundoParaAmarelo(Label^);
	void alterarCorDeFundoParaCinzaEscuro(Label^);
	void alterarVisiabilidadeParaVerdadeiro(Label^);
	void alterarVisiabilidadeParaFalso(Label^);
	void alterarCorDaFonteParaPreto(Label^);
	void alterarCorDaFonteParaAmarelo(Label^);
};

