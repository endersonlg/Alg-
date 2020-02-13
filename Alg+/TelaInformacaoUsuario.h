#pragma once
#include <msclr\marshal_cppstd.h>
#include "AlteradorPropriedadeBotao.h"
namespace Alg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para TelaInformacaoUsuario
	/// </summary>
	public ref class TelaInformacaoUsuario : public System::Windows::Forms::Form
	{
	public:
		System::String^ getIdade();
		System::String^ getNome();
		void fecharJogo();


	private: String^ Nome;
	private: System::Windows::Forms::Label^  LetreiroIdade;
	private: System::Windows::Forms::Label^  LetreiroNome;
	private: System::Windows::Forms::TextBox^  CaixaDeTextoNome;
	private: System::Windows::Forms::NumericUpDown^  CaixaDeNumeroIdade;
	private: System::Windows::Forms::Button^  BotaoJogar;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  LetreiroTitulo;

	private: System::Windows::Forms::PictureBox^  ImagemBotaoCinza;
	private: System::Windows::Forms::PictureBox^  ImagemBotaoVerde;

			 String^ Idade;
			 void executarAoClicarBotaoJogar();
			 bool testarSeAVariavelNomeEhValida();
	public:
		TelaInformacaoUsuario(void)
		{
			InitializeComponent();
			//
			Nome = "";
			Idade = "";
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~TelaInformacaoUsuario()
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaInformacaoUsuario::typeid));
			this->LetreiroIdade = (gcnew System::Windows::Forms::Label());
			this->LetreiroNome = (gcnew System::Windows::Forms::Label());
			this->CaixaDeTextoNome = (gcnew System::Windows::Forms::TextBox());
			this->CaixaDeNumeroIdade = (gcnew System::Windows::Forms::NumericUpDown());
			this->BotaoJogar = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->LetreiroTitulo = (gcnew System::Windows::Forms::Label());
			this->ImagemBotaoCinza = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemBotaoVerde = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CaixaDeNumeroIdade))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoCinza))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVerde))->BeginInit();
			this->SuspendLayout();
			// 
			// LetreiroIdade
			// 
			this->LetreiroIdade->AutoSize = true;
			this->LetreiroIdade->Font = (gcnew System::Drawing::Font(L"Century Gothic", 30));
			this->LetreiroIdade->Location = System::Drawing::Point(501, 309);
			this->LetreiroIdade->Margin = System::Windows::Forms::Padding(25, 25, 25, 100);
			this->LetreiroIdade->Name = L"LetreiroIdade";
			this->LetreiroIdade->Size = System::Drawing::Size(146, 56);
			this->LetreiroIdade->TabIndex = 1;
			this->LetreiroIdade->Text = L"Idade:";
			this->LetreiroIdade->UseCompatibleTextRendering = true;
			// 
			// LetreiroNome
			// 
			this->LetreiroNome->AutoSize = true;
			this->LetreiroNome->Font = (gcnew System::Drawing::Font(L"Century Gothic", 30));
			this->LetreiroNome->Location = System::Drawing::Point(494, 242);
			this->LetreiroNome->Margin = System::Windows::Forms::Padding(100);
			this->LetreiroNome->Name = L"LetreiroNome";
			this->LetreiroNome->Size = System::Drawing::Size(148, 56);
			this->LetreiroNome->TabIndex = 2;
			this->LetreiroNome->Text = L"Nome:";
			this->LetreiroNome->UseCompatibleTextRendering = true;
			// 
			// CaixaDeTextoNome
			// 
			this->CaixaDeTextoNome->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20));
			this->CaixaDeTextoNome->Location = System::Drawing::Point(646, 252);
			this->CaixaDeTextoNome->MaxLength = 20;
			this->CaixaDeTextoNome->Name = L"CaixaDeTextoNome";
			this->CaixaDeTextoNome->Size = System::Drawing::Size(405, 40);
			this->CaixaDeTextoNome->TabIndex = 3;
			this->CaixaDeTextoNome->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &TelaInformacaoUsuario::CaixaDeTextoNome_KeyPress);
			// 
			// CaixaDeNumeroIdade
			// 
			this->CaixaDeNumeroIdade->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20));
			this->CaixaDeNumeroIdade->Location = System::Drawing::Point(646, 320);
			this->CaixaDeNumeroIdade->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 89, 0, 0, 0 });
			this->CaixaDeNumeroIdade->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->CaixaDeNumeroIdade->Name = L"CaixaDeNumeroIdade";
			this->CaixaDeNumeroIdade->Size = System::Drawing::Size(88, 40);
			this->CaixaDeNumeroIdade->TabIndex = 4;
			this->CaixaDeNumeroIdade->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->CaixaDeNumeroIdade->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->CaixaDeNumeroIdade->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &TelaInformacaoUsuario::CaixaDeNumeroIdade_KeyPress);
			// 
			// BotaoJogar
			// 
			this->BotaoJogar->BackColor = System::Drawing::Color::Transparent;
			this->BotaoJogar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoJogar.BackgroundImage")));
			this->BotaoJogar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotaoJogar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoJogar->FlatAppearance->BorderSize = 0;
			this->BotaoJogar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BotaoJogar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BotaoJogar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoJogar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20));
			this->BotaoJogar->ForeColor = System::Drawing::Color::Black;
			this->BotaoJogar->Location = System::Drawing::Point(912, 320);
			this->BotaoJogar->Name = L"BotaoJogar";
			this->BotaoJogar->Size = System::Drawing::Size(139, 44);
			this->BotaoJogar->TabIndex = 5;
			this->BotaoJogar->Text = L"Jogar";
			this->BotaoJogar->UseCompatibleTextRendering = true;
			this->BotaoJogar->UseVisualStyleBackColor = false;
			this->BotaoJogar->Click += gcnew System::EventHandler(this, &TelaInformacaoUsuario::BotaoJogar_Click);
			this->BotaoJogar->MouseLeave += gcnew System::EventHandler(this, &TelaInformacaoUsuario::BotaoJogar_MouseLeave);
			this->BotaoJogar->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaInformacaoUsuario::BotaoJogar_MouseMove);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::HotTrack;
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(288, 661);
			this->panel2->TabIndex = 7;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-4, 193);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(289, 194);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// LetreiroTitulo
			// 
			this->LetreiroTitulo->AutoSize = true;
			this->LetreiroTitulo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 40));
			this->LetreiroTitulo->Location = System::Drawing::Point(460, 65);
			this->LetreiroTitulo->Margin = System::Windows::Forms::Padding(100);
			this->LetreiroTitulo->Name = L"LetreiroTitulo";
			this->LetreiroTitulo->Size = System::Drawing::Size(647, 74);
			this->LetreiroTitulo->TabIndex = 8;
			this->LetreiroTitulo->Text = L"Informações do Usuário";
			this->LetreiroTitulo->UseCompatibleTextRendering = true;
			// 
			// ImagemBotaoCinza
			// 
			this->ImagemBotaoCinza->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoCinza.Image")));
			this->ImagemBotaoCinza->Location = System::Drawing::Point(419, 50);
			this->ImagemBotaoCinza->Name = L"ImagemBotaoCinza";
			this->ImagemBotaoCinza->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoCinza->TabIndex = 75;
			this->ImagemBotaoCinza->TabStop = false;
			this->ImagemBotaoCinza->Visible = false;
			// 
			// ImagemBotaoVerde
			// 
			this->ImagemBotaoVerde->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoVerde.Image")));
			this->ImagemBotaoVerde->Location = System::Drawing::Point(371, 50);
			this->ImagemBotaoVerde->Name = L"ImagemBotaoVerde";
			this->ImagemBotaoVerde->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoVerde->TabIndex = 74;
			this->ImagemBotaoVerde->TabStop = false;
			this->ImagemBotaoVerde->Visible = false;
			// 
			// TelaInformacaoUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(1264, 661);
			this->Controls->Add(this->ImagemBotaoCinza);
			this->Controls->Add(this->ImagemBotaoVerde);
			this->Controls->Add(this->LetreiroTitulo);
			this->Controls->Add(this->BotaoJogar);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->CaixaDeNumeroIdade);
			this->Controls->Add(this->CaixaDeTextoNome);
			this->Controls->Add(this->LetreiroNome);
			this->Controls->Add(this->LetreiroIdade);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->Name = L"TelaInformacaoUsuario";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" Alg+";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TelaInformacaoUsuario::TelaInformacaoUsuario_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CaixaDeNumeroIdade))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoCinza))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVerde))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BotaoJogar_Click(System::Object^  sender, System::EventArgs^  e) {
				 executarAoClicarBotaoJogar();
	}
	private: System::Void CaixaDeNumeroIdade_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (e->KeyChar == 44 || e->KeyChar == 46)
					 e->Handled = true;
	}
private: System::Void CaixaDeTextoNome_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (e->KeyChar == 13)
			 {
				 this->ProcessTabKey(true);
				 e->Handled = true;
			 }
}
private: System::Void TelaInformacaoUsuario_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 fecharJogo();
}
private: System::Void BotaoJogar_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoJogar, ImagemBotaoVerde);
}
private: System::Void BotaoJogar_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoJogar, ImagemBotaoCinza);
}
};
}
