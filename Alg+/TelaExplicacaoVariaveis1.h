#pragma once
#include "AlteradorPropriedadeBotao.h"
namespace Alg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para TelaExplicacaoVariaveis1
	/// </summary>
	public ref class TelaExplicacaoVariaveis1 : public System::Windows::Forms::Form
	{
	public:
		int getOpcaoContinuar();
		void fecharJogo();
	private: System::Windows::Forms::PictureBox^  ImagemBotaoCinza;
	public:
	private: System::Windows::Forms::PictureBox^  ImagemBotaoVermelho;


	private:
		bool OpcaoContinuar;		
		void executarAoClicarBotaoAvancar();
		void executarAoClicarBotaoMenuPrincipal();
	public:
		TelaExplicacaoVariaveis1(void)
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
		~TelaExplicacaoVariaveis1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  CaixaDeInformacao1;
	protected:
	private: System::Windows::Forms::Button^  BotaoAvancar;
	private: System::Windows::Forms::Button^  BotaoMenuPrincipal;
	private: System::Windows::Forms::Label^  LetreiroInformacao3;
	private: System::Windows::Forms::Label^  LetreiroSubTitulo3;
	private: System::Windows::Forms::Label^  LetreiroInformacao2;
	private: System::Windows::Forms::Label^  LetreiroSubTitulo2;
	private: System::Windows::Forms::Label^  LetreiroSubTitulo1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaExplicacaoVariaveis1::typeid));
			this->CaixaDeInformacao1 = (gcnew System::Windows::Forms::RichTextBox());
			this->BotaoAvancar = (gcnew System::Windows::Forms::Button());
			this->BotaoMenuPrincipal = (gcnew System::Windows::Forms::Button());
			this->LetreiroInformacao3 = (gcnew System::Windows::Forms::Label());
			this->LetreiroSubTitulo3 = (gcnew System::Windows::Forms::Label());
			this->LetreiroInformacao2 = (gcnew System::Windows::Forms::Label());
			this->LetreiroSubTitulo2 = (gcnew System::Windows::Forms::Label());
			this->LetreiroSubTitulo1 = (gcnew System::Windows::Forms::Label());
			this->LetreiroTitulo = (gcnew System::Windows::Forms::Label());
			this->ImagemBotaoCinza = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemBotaoVermelho = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoCinza))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVermelho))->BeginInit();
			this->SuspendLayout();
			// 
			// CaixaDeInformacao1
			// 
			this->CaixaDeInformacao1->BackColor = System::Drawing::Color::Silver;
			this->CaixaDeInformacao1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18));
			this->CaixaDeInformacao1->Location = System::Drawing::Point(121, 174);
			this->CaixaDeInformacao1->Name = L"CaixaDeInformacao1";
			this->CaixaDeInformacao1->Size = System::Drawing::Size(1025, 196);
			this->CaixaDeInformacao1->TabIndex = 26;
			this->CaixaDeInformacao1->Text = resources->GetString(L"CaixaDeInformacao1.Text");
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
			this->BotaoAvancar->TabIndex = 25;
			this->BotaoAvancar->UseCompatibleTextRendering = true;
			this->BotaoAvancar->UseVisualStyleBackColor = false;
			this->BotaoAvancar->Click += gcnew System::EventHandler(this, &TelaExplicacaoVariaveis1::BotaoAvancar_Click);
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
			this->BotaoMenuPrincipal->TabIndex = 24;
			this->BotaoMenuPrincipal->Text = L"Menu Principal";
			this->BotaoMenuPrincipal->UseCompatibleTextRendering = true;
			this->BotaoMenuPrincipal->UseVisualStyleBackColor = false;
			this->BotaoMenuPrincipal->Click += gcnew System::EventHandler(this, &TelaExplicacaoVariaveis1::BotaoMenuPrincipal_Click);
			this->BotaoMenuPrincipal->MouseLeave += gcnew System::EventHandler(this, &TelaExplicacaoVariaveis1::BotaoMenuPrincipal_MouseLeave);
			this->BotaoMenuPrincipal->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaExplicacaoVariaveis1::BotaoMenuPrincipal_MouseMove);
			// 
			// LetreiroInformacao3
			// 
			this->LetreiroInformacao3->AutoSize = true;
			this->LetreiroInformacao3->BackColor = System::Drawing::Color::Transparent;
			this->LetreiroInformacao3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18));
			this->LetreiroInformacao3->Location = System::Drawing::Point(935, 564);
			this->LetreiroInformacao3->Name = L"LetreiroInformacao3";
			this->LetreiroInformacao3->Size = System::Drawing::Size(258, 30);
			this->LetreiroInformacao3->TabIndex = 23;
			this->LetreiroInformacao3->Text = L"Exemplo:  Pi = 3,1415";
			// 
			// LetreiroSubTitulo3
			// 
			this->LetreiroSubTitulo3->AutoSize = true;
			this->LetreiroSubTitulo3->BackColor = System::Drawing::Color::Transparent;
			this->LetreiroSubTitulo3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20));
			this->LetreiroSubTitulo3->Location = System::Drawing::Point(973, 507);
			this->LetreiroSubTitulo3->Name = L"LetreiroSubTitulo3";
			this->LetreiroSubTitulo3->Size = System::Drawing::Size(128, 33);
			this->LetreiroSubTitulo3->TabIndex = 22;
			this->LetreiroSubTitulo3->Text = L"Exemplo";
			// 
			// LetreiroInformacao2
			// 
			this->LetreiroInformacao2->AutoSize = true;
			this->LetreiroInformacao2->BackColor = System::Drawing::Color::Transparent;
			this->LetreiroInformacao2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18));
			this->LetreiroInformacao2->Location = System::Drawing::Point(117, 426);
			this->LetreiroInformacao2->Name = L"LetreiroInformacao2";
			this->LetreiroInformacao2->Size = System::Drawing::Size(1132, 90);
			this->LetreiroInformacao2->TabIndex = 21;
			this->LetreiroInformacao2->Text = resources->GetString(L"LetreiroInformacao2.Text");
			// 
			// LetreiroSubTitulo2
			// 
			this->LetreiroSubTitulo2->AutoSize = true;
			this->LetreiroSubTitulo2->BackColor = System::Drawing::Color::Transparent;
			this->LetreiroSubTitulo2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20));
			this->LetreiroSubTitulo2->Location = System::Drawing::Point(113, 373);
			this->LetreiroSubTitulo2->Name = L"LetreiroSubTitulo2";
			this->LetreiroSubTitulo2->Size = System::Drawing::Size(153, 33);
			this->LetreiroSubTitulo2->TabIndex = 20;
			this->LetreiroSubTitulo2->Text = L"Constante";
			// 
			// LetreiroSubTitulo1
			// 
			this->LetreiroSubTitulo1->AutoSize = true;
			this->LetreiroSubTitulo1->BackColor = System::Drawing::Color::Transparent;
			this->LetreiroSubTitulo1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20));
			this->LetreiroSubTitulo1->Location = System::Drawing::Point(113, 124);
			this->LetreiroSubTitulo1->Name = L"LetreiroSubTitulo1";
			this->LetreiroSubTitulo1->Size = System::Drawing::Size(125, 33);
			this->LetreiroSubTitulo1->TabIndex = 19;
			this->LetreiroSubTitulo1->Text = L"Variável";
			// 
			// LetreiroTitulo
			// 
			this->LetreiroTitulo->AutoSize = true;
			this->LetreiroTitulo->BackColor = System::Drawing::Color::Transparent;
			this->LetreiroTitulo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 48));
			this->LetreiroTitulo->Location = System::Drawing::Point(466, 14);
			this->LetreiroTitulo->Name = L"LetreiroTitulo";
			this->LetreiroTitulo->Size = System::Drawing::Size(351, 78);
			this->LetreiroTitulo->TabIndex = 18;
			this->LetreiroTitulo->Text = L"Conceitos";
			// 
			// ImagemBotaoCinza
			// 
			this->ImagemBotaoCinza->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoCinza.Image")));
			this->ImagemBotaoCinza->Location = System::Drawing::Point(208, 42);
			this->ImagemBotaoCinza->Name = L"ImagemBotaoCinza";
			this->ImagemBotaoCinza->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoCinza->TabIndex = 75;
			this->ImagemBotaoCinza->TabStop = false;
			this->ImagemBotaoCinza->Visible = false;
			// 
			// ImagemBotaoVermelho
			// 
			this->ImagemBotaoVermelho->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoVermelho.Image")));
			this->ImagemBotaoVermelho->Location = System::Drawing::Point(176, 42);
			this->ImagemBotaoVermelho->Name = L"ImagemBotaoVermelho";
			this->ImagemBotaoVermelho->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoVermelho->TabIndex = 74;
			this->ImagemBotaoVermelho->TabStop = false;
			this->ImagemBotaoVermelho->Visible = false;
			// 
			// TelaExplicacaoVariaveis1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(1264, 661);
			this->Controls->Add(this->ImagemBotaoCinza);
			this->Controls->Add(this->ImagemBotaoVermelho);
			this->Controls->Add(this->CaixaDeInformacao1);
			this->Controls->Add(this->BotaoAvancar);
			this->Controls->Add(this->BotaoMenuPrincipal);
			this->Controls->Add(this->LetreiroInformacao3);
			this->Controls->Add(this->LetreiroSubTitulo3);
			this->Controls->Add(this->LetreiroInformacao2);
			this->Controls->Add(this->LetreiroSubTitulo2);
			this->Controls->Add(this->LetreiroSubTitulo1);
			this->Controls->Add(this->LetreiroTitulo);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"TelaExplicacaoVariaveis1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Alg+";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TelaExplicacaoVariaveis1::TelaExplicacaoVariaveis1_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoCinza))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVermelho))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BotaoMenuPrincipal_Click(System::Object^  sender, System::EventArgs^  e) {
				 executarAoClicarBotaoMenuPrincipal();
	}
private: System::Void BotaoAvancar_Click(System::Object^  sender, System::EventArgs^  e) {
			 executarAoClicarBotaoAvancar();
}
private: System::Void TelaExplicacaoVariaveis1_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
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
};
}
