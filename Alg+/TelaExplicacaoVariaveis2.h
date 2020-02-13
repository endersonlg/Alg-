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
	/// Sumário para TelaExplicacaoVariaveis2
	/// </summary>
	public ref class TelaExplicacaoVariaveis2 : public System::Windows::Forms::Form
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
		TelaExplicacaoVariaveis2(void)
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
		~TelaExplicacaoVariaveis2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  BotaoAvancar;
	protected:
	private: System::Windows::Forms::Button^  BotaoMenuPrincipal;
	private: System::Windows::Forms::RichTextBox^  CaixaDeInformacao;
	private: System::Windows::Forms::Label^  LetreiroSubTitulo;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaExplicacaoVariaveis2::typeid));
			this->BotaoAvancar = (gcnew System::Windows::Forms::Button());
			this->BotaoMenuPrincipal = (gcnew System::Windows::Forms::Button());
			this->CaixaDeInformacao = (gcnew System::Windows::Forms::RichTextBox());
			this->LetreiroSubTitulo = (gcnew System::Windows::Forms::Label());
			this->LetreiroTitulo = (gcnew System::Windows::Forms::Label());
			this->ImagemBotaoCinza = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemBotaoVermelho = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoCinza))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVermelho))->BeginInit();
			this->SuspendLayout();
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
			this->BotaoAvancar->TabIndex = 11;
			this->BotaoAvancar->UseCompatibleTextRendering = true;
			this->BotaoAvancar->UseVisualStyleBackColor = false;
			this->BotaoAvancar->Click += gcnew System::EventHandler(this, &TelaExplicacaoVariaveis2::BotaoAvancar_Click);
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
			this->BotaoMenuPrincipal->Font = (gcnew System::Drawing::Font(L"Segoe Print", 30));
			this->BotaoMenuPrincipal->Location = System::Drawing::Point(19, 584);
			this->BotaoMenuPrincipal->Margin = System::Windows::Forms::Padding(10);
			this->BotaoMenuPrincipal->Name = L"BotaoMenuPrincipal";
			this->BotaoMenuPrincipal->Size = System::Drawing::Size(350, 62);
			this->BotaoMenuPrincipal->TabIndex = 10;
			this->BotaoMenuPrincipal->Text = L"Menu Principal";
			this->BotaoMenuPrincipal->UseCompatibleTextRendering = true;
			this->BotaoMenuPrincipal->UseVisualStyleBackColor = false;
			this->BotaoMenuPrincipal->Click += gcnew System::EventHandler(this, &TelaExplicacaoVariaveis2::BotaoMenuPrincipal_Click);
			this->BotaoMenuPrincipal->MouseLeave += gcnew System::EventHandler(this, &TelaExplicacaoVariaveis2::BotaoMenuPrincipal_MouseLeave);
			this->BotaoMenuPrincipal->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaExplicacaoVariaveis2::BotaoMenuPrincipal_MouseMove);
			// 
			// CaixaDeInformacao
			// 
			this->CaixaDeInformacao->AutoWordSelection = true;
			this->CaixaDeInformacao->BackColor = System::Drawing::Color::Silver;
			this->CaixaDeInformacao->EnableAutoDragDrop = true;
			this->CaixaDeInformacao->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18));
			this->CaixaDeInformacao->ImeMode = System::Windows::Forms::ImeMode::On;
			this->CaixaDeInformacao->Location = System::Drawing::Point(55, 225);
			this->CaixaDeInformacao->Name = L"CaixaDeInformacao";
			this->CaixaDeInformacao->ReadOnly = true;
			this->CaixaDeInformacao->ShowSelectionMargin = true;
			this->CaixaDeInformacao->Size = System::Drawing::Size(933, 276);
			this->CaixaDeInformacao->TabIndex = 9;
			this->CaixaDeInformacao->TabStop = false;
			this->CaixaDeInformacao->Text = resources->GetString(L"CaixaDeInformacao.Text");
			// 
			// LetreiroSubTitulo
			// 
			this->LetreiroSubTitulo->AutoSize = true;
			this->LetreiroSubTitulo->BackColor = System::Drawing::Color::Transparent;
			this->LetreiroSubTitulo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18));
			this->LetreiroSubTitulo->Location = System::Drawing::Point(50, 160);
			this->LetreiroSubTitulo->Name = L"LetreiroSubTitulo";
			this->LetreiroSubTitulo->Size = System::Drawing::Size(952, 30);
			this->LetreiroSubTitulo->TabIndex = 8;
			this->LetreiroSubTitulo->Text = L"Tipos Primitivos: tipos de dados básicos utilizados na construção de algoritmos.";
			// 
			// LetreiroTitulo
			// 
			this->LetreiroTitulo->AutoSize = true;
			this->LetreiroTitulo->BackColor = System::Drawing::Color::Transparent;
			this->LetreiroTitulo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 48));
			this->LetreiroTitulo->Location = System::Drawing::Point(321, 14);
			this->LetreiroTitulo->Name = L"LetreiroTitulo";
			this->LetreiroTitulo->Size = System::Drawing::Size(548, 78);
			this->LetreiroTitulo->TabIndex = 7;
			this->LetreiroTitulo->Text = L"TIPOS DE DADOS";
			// 
			// ImagemBotaoCinza
			// 
			this->ImagemBotaoCinza->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoCinza.Image")));
			this->ImagemBotaoCinza->Location = System::Drawing::Point(144, 76);
			this->ImagemBotaoCinza->Name = L"ImagemBotaoCinza";
			this->ImagemBotaoCinza->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoCinza->TabIndex = 75;
			this->ImagemBotaoCinza->TabStop = false;
			this->ImagemBotaoCinza->Visible = false;
			// 
			// ImagemBotaoVermelho
			// 
			this->ImagemBotaoVermelho->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoVermelho.Image")));
			this->ImagemBotaoVermelho->Location = System::Drawing::Point(112, 76);
			this->ImagemBotaoVermelho->Name = L"ImagemBotaoVermelho";
			this->ImagemBotaoVermelho->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoVermelho->TabIndex = 74;
			this->ImagemBotaoVermelho->TabStop = false;
			this->ImagemBotaoVermelho->Visible = false;
			// 
			// TelaExplicacaoVariaveis2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(1264, 661);
			this->Controls->Add(this->ImagemBotaoCinza);
			this->Controls->Add(this->ImagemBotaoVermelho);
			this->Controls->Add(this->BotaoAvancar);
			this->Controls->Add(this->BotaoMenuPrincipal);
			this->Controls->Add(this->CaixaDeInformacao);
			this->Controls->Add(this->LetreiroSubTitulo);
			this->Controls->Add(this->LetreiroTitulo);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"TelaExplicacaoVariaveis2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Alg+";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TelaExplicacaoVariaveis2::TelaExplicacaoVariaveis2_FormClosed);
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
private: System::Void TelaExplicacaoVariaveis2_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
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
