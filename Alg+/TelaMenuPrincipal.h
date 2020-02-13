#include "Jogo.h"
#pragma once

namespace Alg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para TelaMenuPrincipal
	/// </summary>
	public ref class TelaMenuPrincipal : public System::Windows::Forms::Form
	{
	private:
		int Opcao;
	public:
		int getOpcao();
		void fecharJogo();


		TelaMenuPrincipal(void)
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
		~TelaMenuPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  BotaoJogar;
	private: System::Windows::Forms::Button^  BotaoExplicacao;
	private: System::Windows::Forms::Button^  BotaoRank;
	private: System::Windows::Forms::Button^  BotaoSair;
	private: System::Windows::Forms::Button^  BotaoGrafico;
	private: System::Windows::Forms::PictureBox^  ImagemBotaoVerde;
	private: System::Windows::Forms::PictureBox^  ImagemBotaoVermelho;
	private: System::Windows::Forms::PictureBox^  ImagemBotaoAzul;
	private: System::Windows::Forms::PictureBox^  ImagemBotaoCinza;
	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaMenuPrincipal::typeid));
			this->BotaoJogar = (gcnew System::Windows::Forms::Button());
			this->BotaoExplicacao = (gcnew System::Windows::Forms::Button());
			this->BotaoRank = (gcnew System::Windows::Forms::Button());
			this->BotaoSair = (gcnew System::Windows::Forms::Button());
			this->BotaoGrafico = (gcnew System::Windows::Forms::Button());
			this->ImagemBotaoVerde = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemBotaoVermelho = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemBotaoAzul = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemBotaoCinza = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVerde))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVermelho))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoAzul))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoCinza))->BeginInit();
			this->SuspendLayout();
			// 
			// BotaoJogar
			// 
			this->BotaoJogar->BackColor = System::Drawing::Color::Transparent;
			this->BotaoJogar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoJogar.BackgroundImage")));
			this->BotaoJogar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotaoJogar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoJogar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->BotaoJogar->FlatAppearance->BorderSize = 0;
			this->BotaoJogar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BotaoJogar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BotaoJogar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoJogar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 30));
			this->BotaoJogar->Location = System::Drawing::Point(39, 135);
			this->BotaoJogar->Margin = System::Windows::Forms::Padding(30, 20, 30, 20);
			this->BotaoJogar->Name = L"BotaoJogar";
			this->BotaoJogar->Size = System::Drawing::Size(246, 64);
			this->BotaoJogar->TabIndex = 0;
			this->BotaoJogar->Text = L"Jogar";
			this->BotaoJogar->UseCompatibleTextRendering = true;
			this->BotaoJogar->UseVisualStyleBackColor = false;
			this->BotaoJogar->Click += gcnew System::EventHandler(this, &TelaMenuPrincipal::button1_Click);
			this->BotaoJogar->MouseLeave += gcnew System::EventHandler(this, &TelaMenuPrincipal::BotaoJogar_MouseLeave);
			this->BotaoJogar->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaMenuPrincipal::BotaoJogar_MouseMove);
			// 
			// BotaoExplicacao
			// 
			this->BotaoExplicacao->BackColor = System::Drawing::Color::Transparent;
			this->BotaoExplicacao->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoExplicacao.BackgroundImage")));
			this->BotaoExplicacao->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotaoExplicacao->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoExplicacao->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->BotaoExplicacao->FlatAppearance->BorderSize = 0;
			this->BotaoExplicacao->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BotaoExplicacao->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BotaoExplicacao->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoExplicacao->Font = (gcnew System::Drawing::Font(L"Century Gothic", 30));
			this->BotaoExplicacao->Location = System::Drawing::Point(39, 239);
			this->BotaoExplicacao->Margin = System::Windows::Forms::Padding(30, 20, 30, 20);
			this->BotaoExplicacao->Name = L"BotaoExplicacao";
			this->BotaoExplicacao->Size = System::Drawing::Size(246, 64);
			this->BotaoExplicacao->TabIndex = 1;
			this->BotaoExplicacao->Text = L"Explicação";
			this->BotaoExplicacao->UseCompatibleTextRendering = true;
			this->BotaoExplicacao->UseVisualStyleBackColor = false;
			this->BotaoExplicacao->Click += gcnew System::EventHandler(this, &TelaMenuPrincipal::BotaoExplicacao_Click);
			this->BotaoExplicacao->MouseLeave += gcnew System::EventHandler(this, &TelaMenuPrincipal::BotaoExplicacao_MouseLeave);
			this->BotaoExplicacao->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaMenuPrincipal::BotaoExplicacao_MouseMove);
			// 
			// BotaoRank
			// 
			this->BotaoRank->BackColor = System::Drawing::Color::Transparent;
			this->BotaoRank->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoRank.BackgroundImage")));
			this->BotaoRank->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotaoRank->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoRank->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->BotaoRank->FlatAppearance->BorderSize = 0;
			this->BotaoRank->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BotaoRank->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BotaoRank->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoRank->Font = (gcnew System::Drawing::Font(L"Century Gothic", 30));
			this->BotaoRank->Location = System::Drawing::Point(39, 343);
			this->BotaoRank->Margin = System::Windows::Forms::Padding(30, 20, 30, 20);
			this->BotaoRank->Name = L"BotaoRank";
			this->BotaoRank->Size = System::Drawing::Size(246, 64);
			this->BotaoRank->TabIndex = 2;
			this->BotaoRank->Text = L"Rank";
			this->BotaoRank->UseCompatibleTextRendering = true;
			this->BotaoRank->UseVisualStyleBackColor = false;
			this->BotaoRank->Click += gcnew System::EventHandler(this, &TelaMenuPrincipal::BotaoRank_Click);
			this->BotaoRank->MouseLeave += gcnew System::EventHandler(this, &TelaMenuPrincipal::BotaoRank_MouseLeave);
			this->BotaoRank->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaMenuPrincipal::BotaoRank_MouseMove);
			// 
			// BotaoSair
			// 
			this->BotaoSair->BackColor = System::Drawing::Color::Transparent;
			this->BotaoSair->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoSair.BackgroundImage")));
			this->BotaoSair->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotaoSair->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoSair->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->BotaoSair->FlatAppearance->BorderSize = 0;
			this->BotaoSair->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BotaoSair->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BotaoSair->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoSair->Font = (gcnew System::Drawing::Font(L"Century Gothic", 30));
			this->BotaoSair->Location = System::Drawing::Point(39, 551);
			this->BotaoSair->Margin = System::Windows::Forms::Padding(30, 20, 30, 20);
			this->BotaoSair->Name = L"BotaoSair";
			this->BotaoSair->Size = System::Drawing::Size(246, 64);
			this->BotaoSair->TabIndex = 3;
			this->BotaoSair->Text = L"Sair";
			this->BotaoSair->UseCompatibleTextRendering = true;
			this->BotaoSair->UseVisualStyleBackColor = false;
			this->BotaoSair->Click += gcnew System::EventHandler(this, &TelaMenuPrincipal::BotaoSair_Click);
			this->BotaoSair->MouseLeave += gcnew System::EventHandler(this, &TelaMenuPrincipal::BotaoSair_MouseLeave);
			this->BotaoSair->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaMenuPrincipal::BotaoSair_MouseMove);
			// 
			// BotaoGrafico
			// 
			this->BotaoGrafico->BackColor = System::Drawing::Color::Transparent;
			this->BotaoGrafico->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoGrafico.BackgroundImage")));
			this->BotaoGrafico->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotaoGrafico->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoGrafico->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->BotaoGrafico->FlatAppearance->BorderSize = 0;
			this->BotaoGrafico->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BotaoGrafico->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BotaoGrafico->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoGrafico->Font = (gcnew System::Drawing::Font(L"Century Gothic", 30));
			this->BotaoGrafico->Location = System::Drawing::Point(39, 447);
			this->BotaoGrafico->Margin = System::Windows::Forms::Padding(30, 20, 30, 20);
			this->BotaoGrafico->Name = L"BotaoGrafico";
			this->BotaoGrafico->Size = System::Drawing::Size(246, 64);
			this->BotaoGrafico->TabIndex = 4;
			this->BotaoGrafico->Text = L"Gráfico";
			this->BotaoGrafico->UseCompatibleTextRendering = true;
			this->BotaoGrafico->UseVisualStyleBackColor = false;
			this->BotaoGrafico->Click += gcnew System::EventHandler(this, &TelaMenuPrincipal::BotaoGrafico_Click);
			this->BotaoGrafico->MouseLeave += gcnew System::EventHandler(this, &TelaMenuPrincipal::BotaoGrafico_MouseLeave);
			this->BotaoGrafico->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaMenuPrincipal::BotaoGrafico_MouseMove);
			// 
			// ImagemBotaoVerde
			// 
			this->ImagemBotaoVerde->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoVerde.Image")));
			this->ImagemBotaoVerde->Location = System::Drawing::Point(300, 49);
			this->ImagemBotaoVerde->Name = L"ImagemBotaoVerde";
			this->ImagemBotaoVerde->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoVerde->TabIndex = 5;
			this->ImagemBotaoVerde->TabStop = false;
			this->ImagemBotaoVerde->Visible = false;
			// 
			// ImagemBotaoVermelho
			// 
			this->ImagemBotaoVermelho->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoVermelho.Image")));
			this->ImagemBotaoVermelho->Location = System::Drawing::Point(316, 49);
			this->ImagemBotaoVermelho->Name = L"ImagemBotaoVermelho";
			this->ImagemBotaoVermelho->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoVermelho->TabIndex = 6;
			this->ImagemBotaoVermelho->TabStop = false;
			this->ImagemBotaoVermelho->Visible = false;
			// 
			// ImagemBotaoAzul
			// 
			this->ImagemBotaoAzul->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoAzul.Image")));
			this->ImagemBotaoAzul->Location = System::Drawing::Point(332, 49);
			this->ImagemBotaoAzul->Name = L"ImagemBotaoAzul";
			this->ImagemBotaoAzul->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoAzul->TabIndex = 7;
			this->ImagemBotaoAzul->TabStop = false;
			this->ImagemBotaoAzul->Visible = false;
			// 
			// ImagemBotaoCinza
			// 
			this->ImagemBotaoCinza->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoCinza.Image")));
			this->ImagemBotaoCinza->Location = System::Drawing::Point(348, 49);
			this->ImagemBotaoCinza->Name = L"ImagemBotaoCinza";
			this->ImagemBotaoCinza->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoCinza->TabIndex = 8;
			this->ImagemBotaoCinza->TabStop = false;
			this->ImagemBotaoCinza->Visible = false;
			// 
			// TelaMenuPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1260, 657);
			this->Controls->Add(this->ImagemBotaoCinza);
			this->Controls->Add(this->ImagemBotaoAzul);
			this->Controls->Add(this->ImagemBotaoVermelho);
			this->Controls->Add(this->ImagemBotaoVerde);
			this->Controls->Add(this->BotaoGrafico);
			this->Controls->Add(this->BotaoSair);
			this->Controls->Add(this->BotaoRank);
			this->Controls->Add(this->BotaoExplicacao);
			this->Controls->Add(this->BotaoJogar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"TelaMenuPrincipal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Alg+";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TelaMenuPrincipal::TelaMenuPrincipal_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVerde))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVermelho))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoAzul))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoCinza))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
				 Opcao = 1;
				 Visible = false;
	}
	private: System::Void BotaoExplicacao_Click(System::Object^  sender, System::EventArgs^  e) {
				 Opcao = 2;
				 Visible = false;
	}
private: System::Void BotaoSair_Click(System::Object^  sender, System::EventArgs^  e) {
				 Opcao = -100;
				 Visible = false;
}
private: System::Void BotaoRank_Click(System::Object^  sender, System::EventArgs^  e) {
			 Opcao = 3;
			 Visible = false;
}
private: System::Void TelaMenuPrincipal_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 fecharJogo();

}
private: System::Void BotaoGrafico_Click(System::Object^  sender, System::EventArgs^  e) {
			 Opcao = 4;
			 Visible = false;
}
private: System::Void BotaoJogar_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 BotaoJogar->BackgroundImage = ImagemBotaoVerde->Image;
}
private: System::Void BotaoExplicacao_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 BotaoExplicacao->BackgroundImage = ImagemBotaoAzul->Image;
}
private: System::Void BotaoRank_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 BotaoRank->BackgroundImage = ImagemBotaoAzul->Image;
}
private: System::Void BotaoGrafico_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 BotaoGrafico->BackgroundImage = ImagemBotaoAzul->Image;
}
private: System::Void BotaoSair_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 BotaoSair->BackgroundImage = ImagemBotaoVermelho->Image;
}
private: System::Void BotaoJogar_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 BotaoJogar->BackgroundImage = ImagemBotaoCinza->Image;
}
private: System::Void BotaoExplicacao_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 BotaoExplicacao->BackgroundImage = ImagemBotaoCinza->Image;
}
private: System::Void BotaoRank_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 BotaoRank->BackgroundImage = ImagemBotaoCinza->Image;
}
private: System::Void BotaoGrafico_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 BotaoGrafico->BackgroundImage = ImagemBotaoCinza->Image;
}
private: System::Void BotaoSair_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 BotaoSair->BackgroundImage = ImagemBotaoCinza->Image;
}
};
}
