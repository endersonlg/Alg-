#pragma once
#include<vector>
#include"TelaMenuPrincipal.h"
#include"TelaMenuExplicacao.h"
#include"ConversorDeString.h"
#include"ConversorDeTipos.h"
#include"Jogo.h"
#include"Explicacao.h"

namespace Alg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para Controle
	/// </summary>
	public ref class Controle : public System::Windows::Forms::Form
	{
	public:
		void gerenciarExecucao();
		void gerenciarExecucaoJogar();
		void gerenciarExecucaoExplicacao();
		void gerenciarExecucaoRank();
		void gerenciarExecucaoGrafico();
		Controle(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~Controle()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte do Designer - não modifique
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// Controle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Name = L"Controle";
			this->Text = L"Controle";
			this->Visible = false;
			this->Load += gcnew System::EventHandler(this, &Controle::Controle_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Controle_Load(System::Object^  sender, System::EventArgs^  e) {
				 gerenciarExecucao();
				 Close();
	}
	};
}
