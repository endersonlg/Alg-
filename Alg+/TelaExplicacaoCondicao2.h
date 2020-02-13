#pragma once
#include "AlteradorPropriedadeBotao.h"
#include "Escolha.h"

namespace Alg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para TelaExplicacaoCondicao2
	/// </summary>
	public ref class TelaExplicacaoCondicao2 : public System::Windows::Forms::Form
	{
	public:
		int getOpcaoContinuar();
		void fecharJogo();
	private: System::Windows::Forms::PictureBox^  ImagemBotaoCinza;
	public:
	private: System::Windows::Forms::PictureBox^  ImagemBotaoVermelho;
	private: System::Windows::Forms::Button^  buttonC2;



	private:
		bool OpcaoContinuar;		
		void executarAoClicarBotaoAvancar();
		void executarAoClicarBotaoMenuPrincipal();
	public:
		TelaExplicacaoCondicao2(void)
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
		~TelaExplicacaoCondicao2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  CaixaDeTextoAlgoritmo;
	protected:
	private: System::Windows::Forms::Button^  BotaoAvancar;
	private: System::Windows::Forms::Button^  BotaoMenuPrincipal;
	private: System::Windows::Forms::Label^  LetreiroInformacao;
	private: System::Windows::Forms::Label^  LetreiroTitulo;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaExplicacaoCondicao2::typeid));
			this->CaixaDeTextoAlgoritmo = (gcnew System::Windows::Forms::RichTextBox());
			this->BotaoAvancar = (gcnew System::Windows::Forms::Button());
			this->BotaoMenuPrincipal = (gcnew System::Windows::Forms::Button());
			this->LetreiroInformacao = (gcnew System::Windows::Forms::Label());
			this->LetreiroTitulo = (gcnew System::Windows::Forms::Label());
			this->ImagemBotaoCinza = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemBotaoVermelho = (gcnew System::Windows::Forms::PictureBox());
			this->buttonC2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoCinza))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVermelho))->BeginInit();
			this->SuspendLayout();
			// 
			// CaixaDeTextoAlgoritmo
			// 
			this->CaixaDeTextoAlgoritmo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->CaixaDeTextoAlgoritmo->Location = System::Drawing::Point(55, 269);
			this->CaixaDeTextoAlgoritmo->Name = L"CaixaDeTextoAlgoritmo";
			this->CaixaDeTextoAlgoritmo->Size = System::Drawing::Size(393, 302);
			this->CaixaDeTextoAlgoritmo->TabIndex = 29;
			this->CaixaDeTextoAlgoritmo->Text = resources->GetString(L"CaixaDeTextoAlgoritmo.Text");
			// 
			// BotaoAvancar
			// 
			this->BotaoAvancar->BackColor = System::Drawing::Color::Transparent;
			this->BotaoAvancar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoAvancar->FlatAppearance->BorderSize = 0;
			this->BotaoAvancar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BotaoAvancar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BotaoAvancar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoAvancar->Font = (gcnew System::Drawing::Font(L"Segoe Print", 30));
			this->BotaoAvancar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoAvancar.Image")));
			this->BotaoAvancar->Location = System::Drawing::Point(1189, 620);
			this->BotaoAvancar->Margin = System::Windows::Forms::Padding(10);
			this->BotaoAvancar->Name = L"BotaoAvancar";
			this->BotaoAvancar->Size = System::Drawing::Size(56, 26);
			this->BotaoAvancar->TabIndex = 28;
			this->BotaoAvancar->UseCompatibleTextRendering = true;
			this->BotaoAvancar->UseVisualStyleBackColor = false;
			this->BotaoAvancar->Click += gcnew System::EventHandler(this, &TelaExplicacaoCondicao2::BotaoAvancar_Click);
			// 
			// BotaoMenuPrincipal
			// 
			this->BotaoMenuPrincipal->BackColor = System::Drawing::Color::Transparent;
			this->BotaoMenuPrincipal->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoMenuPrincipal.BackgroundImage")));
			this->BotaoMenuPrincipal->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotaoMenuPrincipal->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoMenuPrincipal->FlatAppearance->BorderSize = 0;
			this->BotaoMenuPrincipal->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BotaoMenuPrincipal->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BotaoMenuPrincipal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoMenuPrincipal->Font = (gcnew System::Drawing::Font(L"Century Gothic", 30));
			this->BotaoMenuPrincipal->Location = System::Drawing::Point(19, 584);
			this->BotaoMenuPrincipal->Margin = System::Windows::Forms::Padding(10);
			this->BotaoMenuPrincipal->Name = L"BotaoMenuPrincipal";
			this->BotaoMenuPrincipal->Size = System::Drawing::Size(350, 62);
			this->BotaoMenuPrincipal->TabIndex = 27;
			this->BotaoMenuPrincipal->Text = L"Menu Principal";
			this->BotaoMenuPrincipal->UseCompatibleTextRendering = true;
			this->BotaoMenuPrincipal->UseVisualStyleBackColor = false;
			this->BotaoMenuPrincipal->Click += gcnew System::EventHandler(this, &TelaExplicacaoCondicao2::BotaoMenuPrincipal_Click);
			this->BotaoMenuPrincipal->MouseLeave += gcnew System::EventHandler(this, &TelaExplicacaoCondicao2::BotaoMenuPrincipal_MouseLeave);
			this->BotaoMenuPrincipal->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaExplicacaoCondicao2::BotaoMenuPrincipal_MouseMove);
			// 
			// LetreiroInformacao
			// 
			this->LetreiroInformacao->AutoSize = true;
			this->LetreiroInformacao->BackColor = System::Drawing::Color::Transparent;
			this->LetreiroInformacao->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18));
			this->LetreiroInformacao->Location = System::Drawing::Point(50, 144);
			this->LetreiroInformacao->Name = L"LetreiroInformacao";
			this->LetreiroInformacao->Size = System::Drawing::Size(1186, 120);
			this->LetreiroInformacao->TabIndex = 26;
			this->LetreiroInformacao->Text = resources->GetString(L"LetreiroInformacao.Text");
			// 
			// LetreiroTitulo
			// 
			this->LetreiroTitulo->AutoSize = true;
			this->LetreiroTitulo->BackColor = System::Drawing::Color::Transparent;
			this->LetreiroTitulo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 48));
			this->LetreiroTitulo->ForeColor = System::Drawing::SystemColors::InfoText;
			this->LetreiroTitulo->Location = System::Drawing::Point(494, 9);
			this->LetreiroTitulo->Name = L"LetreiroTitulo";
			this->LetreiroTitulo->Size = System::Drawing::Size(272, 78);
			this->LetreiroTitulo->TabIndex = 25;
			this->LetreiroTitulo->Text = L"Escolha";
			// 
			// ImagemBotaoCinza
			// 
			this->ImagemBotaoCinza->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoCinza.Image")));
			this->ImagemBotaoCinza->Location = System::Drawing::Point(205, 86);
			this->ImagemBotaoCinza->Name = L"ImagemBotaoCinza";
			this->ImagemBotaoCinza->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoCinza->TabIndex = 73;
			this->ImagemBotaoCinza->TabStop = false;
			this->ImagemBotaoCinza->Visible = false;
			// 
			// ImagemBotaoVermelho
			// 
			this->ImagemBotaoVermelho->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoVermelho.Image")));
			this->ImagemBotaoVermelho->Location = System::Drawing::Point(173, 86);
			this->ImagemBotaoVermelho->Name = L"ImagemBotaoVermelho";
			this->ImagemBotaoVermelho->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoVermelho->TabIndex = 72;
			this->ImagemBotaoVermelho->TabStop = false;
			this->ImagemBotaoVermelho->Visible = false;
			// 
			// buttonC2
			// 
			this->buttonC2->BackColor = System::Drawing::Color::Transparent;
			this->buttonC2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonC2.BackgroundImage")));
			this->buttonC2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonC2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonC2->FlatAppearance->BorderSize = 0;
			this->buttonC2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->buttonC2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->buttonC2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonC2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20));
			this->buttonC2->Location = System::Drawing::Point(634, 361);
			this->buttonC2->Margin = System::Windows::Forms::Padding(10);
			this->buttonC2->Name = L"buttonC2";
			this->buttonC2->Size = System::Drawing::Size(255, 62);
			this->buttonC2->TabIndex = 75;
			this->buttonC2->Text = L"Linguagem C";
			this->buttonC2->UseCompatibleTextRendering = true;
			this->buttonC2->UseVisualStyleBackColor = false;
			this->buttonC2->Click += gcnew System::EventHandler(this, &TelaExplicacaoCondicao2::buttonC2_Click);
			// 
			// TelaExplicacaoCondicao2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(1264, 661);
			this->Controls->Add(this->buttonC2);
			this->Controls->Add(this->ImagemBotaoCinza);
			this->Controls->Add(this->ImagemBotaoVermelho);
			this->Controls->Add(this->CaixaDeTextoAlgoritmo);
			this->Controls->Add(this->BotaoAvancar);
			this->Controls->Add(this->BotaoMenuPrincipal);
			this->Controls->Add(this->LetreiroInformacao);
			this->Controls->Add(this->LetreiroTitulo);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"TelaExplicacaoCondicao2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Alg+";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TelaExplicacaoCondicao2::TelaExplicacaoCondicao2_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoCinza))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVermelho))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BotaoAvancar_Click(System::Object^  sender, System::EventArgs^  e) {
				 executarAoClicarBotaoAvancar();
	}
private: System::Void BotaoMenuPrincipal_Click(System::Object^  sender, System::EventArgs^  e) {
			 executarAoClicarBotaoMenuPrincipal();
}
private: System::Void TelaExplicacaoCondicao2_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 fecharJogo();
}
private: System::Void BotaoMenuPrincipal_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoMenuPrincipal, ImagemBotaoVermelho);
}
private: System::Void BotaoMenuPrincipal_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoMenuPrincipal, ImagemBotaoCinza);
}
private: System::Void buttonC2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Escolha escolha;
			 escolha.ShowDialog();

}
};
}
