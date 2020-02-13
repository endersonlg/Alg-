#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
ref class AlteradorPropriedadeTempo
{
public:
	AlteradorPropriedadeTempo();
	~AlteradorPropriedadeTempo();
	void habilitarTempo(Timer^);
	void desabilitarTempo(Timer^);
};

