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
	/// Sumário para TelaMenuExplicacao
	/// </summary>
	public ref class TelaMenuExplicacao : public System::Windows::Forms::Form
	{
	private:
		int Opcao;
	public:
		int getOpcao();
		void fecharJogo();

	public:
		TelaMenuExplicacao(void)
		{
			InitializeComponent();
			//
			Opcao = 0;
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~TelaMenuExplicacao()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  BotaoVariaveis;
	protected:

	private: System::Windows::Forms::Button^  BotaoRepeticao;
	protected:

	private: System::Windows::Forms::Button^  BotaoCondicao;

	private: System::Windows::Forms::Button^  BotaoAlgoritmo;
	private: System::Windows::Forms::Button^  BotaoVoltar;
	private: System::Windows::Forms::PictureBox^  ImagemBotaoCinza;
	private: System::Windows::Forms::PictureBox^  ImagemBotaoAzul;

	private: System::Windows::Forms::PictureBox^  ImagemBotaoVerde;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaMenuExplicacao::typeid));
			this->BotaoVariaveis = (gcnew System::Windows::Forms::Button());
			this->BotaoRepeticao = (gcnew System::Windows::Forms::Button());
			this->BotaoCondicao = (gcnew System::Windows::Forms::Button());
			this->BotaoAlgoritmo = (gcnew System::Windows::Forms::Button());
			this->BotaoVoltar = (gcnew System::Windows::Forms::Button());
			this->ImagemBotaoCinza = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemBotaoAzul = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemBotaoVerde = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoCinza))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoAzul))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVerde))->BeginInit();
			this->SuspendLayout();
			// 
			// BotaoVariaveis
			// 
			this->BotaoVariaveis->BackColor = System::Drawing::Color::Transparent;
			this->BotaoVariaveis->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoVariaveis.BackgroundImage")));
			this->BotaoVariaveis->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotaoVariaveis->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoVariaveis->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->BotaoVariaveis->FlatAppearance->BorderSize = 0;
			this->BotaoVariaveis->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BotaoVariaveis->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BotaoVariaveis->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoVariaveis->Font = (gcnew System::Drawing::Font(L"Century Gothic", 30));
			this->BotaoVariaveis->Location = System::Drawing::Point(39, 237);
			this->BotaoVariaveis->Margin = System::Windows::Forms::Padding(30, 20, 30, 20);
			this->BotaoVariaveis->Name = L"BotaoVariaveis";
			this->BotaoVariaveis->Size = System::Drawing::Size(242, 64);
			this->BotaoVariaveis->TabIndex = 7;
			this->BotaoVariaveis->Text = L"Variáveis";
			this->BotaoVariaveis->UseCompatibleTextRendering = true;
			this->BotaoVariaveis->UseVisualStyleBackColor = false;
			this->BotaoVariaveis->Click += gcnew System::EventHandler(this, &TelaMenuExplicacao::BotaoVariaveis_Click);
			this->BotaoVariaveis->MouseLeave += gcnew System::EventHandler(this, &TelaMenuExplicacao::BotaoVariaveis_MouseLeave);
			this->BotaoVariaveis->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaMenuExplicacao::BotaoVariaveis_MouseMove);
			// 
			// BotaoRepeticao
			// 
			this->BotaoRepeticao->BackColor = System::Drawing::Color::Transparent;
			this->BotaoRepeticao->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoRepeticao.BackgroundImage")));
			this->BotaoRepeticao->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotaoRepeticao->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoRepeticao->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->BotaoRepeticao->FlatAppearance->BorderSize = 0;
			this->BotaoRepeticao->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BotaoRepeticao->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BotaoRepeticao->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoRepeticao->Font = (gcnew System::Drawing::Font(L"Century Gothic", 30));
			this->BotaoRepeticao->Location = System::Drawing::Point(39, 445);
			this->BotaoRepeticao->Margin = System::Windows::Forms::Padding(30, 20, 30, 20);
			this->BotaoRepeticao->Name = L"BotaoRepeticao";
			this->BotaoRepeticao->Size = System::Drawing::Size(242, 64);
			this->BotaoRepeticao->TabIndex = 6;
			this->BotaoRepeticao->Text = L"Repetição";
			this->BotaoRepeticao->UseCompatibleTextRendering = true;
			this->BotaoRepeticao->UseVisualStyleBackColor = false;
			this->BotaoRepeticao->Click += gcnew System::EventHandler(this, &TelaMenuExplicacao::BotaoRepeticao_Click);
			this->BotaoRepeticao->MouseLeave += gcnew System::EventHandler(this, &TelaMenuExplicacao::BotaoRepeticao_MouseLeave);
			this->BotaoRepeticao->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaMenuExplicacao::BotaoRepeticao_MouseMove);
			// 
			// BotaoCondicao
			// 
			this->BotaoCondicao->BackColor = System::Drawing::Color::Transparent;
			this->BotaoCondicao->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoCondicao.BackgroundImage")));
			this->BotaoCondicao->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotaoCondicao->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoCondicao->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->BotaoCondicao->FlatAppearance->BorderSize = 0;
			this->BotaoCondicao->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BotaoCondicao->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BotaoCondicao->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoCondicao->Font = (gcnew System::Drawing::Font(L"Century Gothic", 30));
			this->BotaoCondicao->Location = System::Drawing::Point(39, 341);
			this->BotaoCondicao->Margin = System::Windows::Forms::Padding(30, 20, 30, 20);
			this->BotaoCondicao->Name = L"BotaoCondicao";
			this->BotaoCondicao->Size = System::Drawing::Size(242, 64);
			this->BotaoCondicao->TabIndex = 5;
			this->BotaoCondicao->Text = L"Condição";
			this->BotaoCondicao->UseCompatibleTextRendering = true;
			this->BotaoCondicao->UseVisualStyleBackColor = false;
			this->BotaoCondicao->Click += gcnew System::EventHandler(this, &TelaMenuExplicacao::BotaoCondicao_Click);
			this->BotaoCondicao->MouseLeave += gcnew System::EventHandler(this, &TelaMenuExplicacao::BotaoCondicao_MouseLeave);
			this->BotaoCondicao->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaMenuExplicacao::BotaoCondicao_MouseMove);
			// 
			// BotaoAlgoritmo
			// 
			this->BotaoAlgoritmo->BackColor = System::Drawing::Color::Transparent;
			this->BotaoAlgoritmo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoAlgoritmo.BackgroundImage")));
			this->BotaoAlgoritmo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotaoAlgoritmo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoAlgoritmo->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->BotaoAlgoritmo->FlatAppearance->BorderSize = 0;
			this->BotaoAlgoritmo->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BotaoAlgoritmo->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BotaoAlgoritmo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoAlgoritmo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 30));
			this->BotaoAlgoritmo->Location = System::Drawing::Point(39, 133);
			this->BotaoAlgoritmo->Margin = System::Windows::Forms::Padding(30, 20, 30, 20);
			this->BotaoAlgoritmo->Name = L"BotaoAlgoritmo";
			this->BotaoAlgoritmo->Size = System::Drawing::Size(242, 64);
			this->BotaoAlgoritmo->TabIndex = 4;
			this->BotaoAlgoritmo->Text = L"Algoritmo";
			this->BotaoAlgoritmo->UseCompatibleTextRendering = true;
			this->BotaoAlgoritmo->UseVisualStyleBackColor = false;
			this->BotaoAlgoritmo->Click += gcnew System::EventHandler(this, &TelaMenuExplicacao::BotaoAlgoritmo_Click);
			this->BotaoAlgoritmo->MouseLeave += gcnew System::EventHandler(this, &TelaMenuExplicacao::BotaoAlgoritmo_MouseLeave);
			this->BotaoAlgoritmo->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaMenuExplicacao::BotaoAlgoritmo_MouseMove);
			// 
			// BotaoVoltar
			// 
			this->BotaoVoltar->BackColor = System::Drawing::Color::Transparent;
			this->BotaoVoltar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoVoltar.BackgroundImage")));
			this->BotaoVoltar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotaoVoltar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoVoltar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->BotaoVoltar->FlatAppearance->BorderSize = 0;
			this->BotaoVoltar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BotaoVoltar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BotaoVoltar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoVoltar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 30));
			this->BotaoVoltar->Location = System::Drawing::Point(39, 549);
			this->BotaoVoltar->Margin = System::Windows::Forms::Padding(30, 20, 30, 20);
			this->BotaoVoltar->Name = L"BotaoVoltar";
			this->BotaoVoltar->Size = System::Drawing::Size(242, 64);
			this->BotaoVoltar->TabIndex = 8;
			this->BotaoVoltar->Text = L"Voltar";
			this->BotaoVoltar->UseCompatibleTextRendering = true;
			this->BotaoVoltar->UseVisualStyleBackColor = false;
			this->BotaoVoltar->Click += gcnew System::EventHandler(this, &TelaMenuExplicacao::BotaoVoltar_Click);
			this->BotaoVoltar->MouseLeave += gcnew System::EventHandler(this, &TelaMenuExplicacao::BotaoVoltar_MouseLeave);
			this->BotaoVoltar->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaMenuExplicacao::BotaoVoltar_MouseMove);
			// 
			// ImagemBotaoCinza
			// 
			this->ImagemBotaoCinza->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoCinza.Image")));
			this->ImagemBotaoCinza->Location = System::Drawing::Point(287, 55);
			this->ImagemBotaoCinza->Name = L"ImagemBotaoCinza";
			this->ImagemBotaoCinza->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoCinza->TabIndex = 12;
			this->ImagemBotaoCinza->TabStop = false;
			this->ImagemBotaoCinza->Visible = false;
			// 
			// ImagemBotaoAzul
			// 
			this->ImagemBotaoAzul->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoAzul.Image")));
			this->ImagemBotaoAzul->Location = System::Drawing::Point(271, 55);
			this->ImagemBotaoAzul->Name = L"ImagemBotaoAzul";
			this->ImagemBotaoAzul->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoAzul->TabIndex = 11;
			this->ImagemBotaoAzul->TabStop = false;
			this->ImagemBotaoAzul->Visible = false;
			// 
			// ImagemBotaoVerde
			// 
			this->ImagemBotaoVerde->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoVerde.Image")));
			this->ImagemBotaoVerde->Location = System::Drawing::Point(239, 55);
			this->ImagemBotaoVerde->Name = L"ImagemBotaoVerde";
			this->ImagemBotaoVerde->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoVerde->TabIndex = 9;
			this->ImagemBotaoVerde->TabStop = false;
			this->ImagemBotaoVerde->Visible = false;
			// 
			// TelaMenuExplicacao
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1264, 661);
			this->Controls->Add(this->ImagemBotaoCinza);
			this->Controls->Add(this->ImagemBotaoAzul);
			this->Controls->Add(this->ImagemBotaoVerde);
			this->Controls->Add(this->BotaoVoltar);
			this->Controls->Add(this->BotaoVariaveis);
			this->Controls->Add(this->BotaoRepeticao);
			this->Controls->Add(this->BotaoCondicao);
			this->Controls->Add(this->BotaoAlgoritmo);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"TelaMenuExplicacao";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Alg+";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TelaMenuExplicacao::TelaMenuExplicacao_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoCinza))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoAzul))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVerde))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void BotaoAlgoritmo_Click(System::Object^  sender, System::EventArgs^  e) {
				 Opcao = 1;
				 this->Visible = false;
	}
private: System::Void BotaoVariaveis_Click(System::Object^  sender, System::EventArgs^  e) {
			 Opcao = 4;
			 this->Visible = false;
}
private: System::Void BotaoCondicao_Click(System::Object^  sender, System::EventArgs^  e) {
			 Opcao = 6;
			 this->Visible = false;
}
private: System::Void BotaoRepeticao_Click(System::Object^  sender, System::EventArgs^  e) {
			 Opcao = 8;
			 this->Visible = false;
}
private: System::Void BotaoVoltar_Click(System::Object^  sender, System::EventArgs^  e) {
			 Opcao = -100;
			 this->Visible = false;
}
private: System::Void TelaMenuExplicacao_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 fecharJogo();
}
private: System::Void BotaoAlgoritmo_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoAlgoritmo, ImagemBotaoAzul);
}
private: System::Void BotaoVariaveis_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoVariaveis, ImagemBotaoAzul);
}
private: System::Void BotaoCondicao_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoCondicao, ImagemBotaoAzul);
}
private: System::Void BotaoRepeticao_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoRepeticao, ImagemBotaoAzul);
}
private: System::Void BotaoVoltar_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoVoltar, ImagemBotaoVerde);
}
private: System::Void BotaoAlgoritmo_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoAlgoritmo, ImagemBotaoCinza);
}
private: System::Void BotaoVariaveis_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoVariaveis, ImagemBotaoCinza);
}
private: System::Void BotaoCondicao_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoCondicao, ImagemBotaoCinza);
}
private: System::Void BotaoRepeticao_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoRepeticao, ImagemBotaoCinza);
}
private: System::Void BotaoVoltar_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoVoltar, ImagemBotaoCinza);
}
};
}
