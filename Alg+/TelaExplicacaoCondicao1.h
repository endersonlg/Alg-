#pragma once
#include "AlteradorPropriedadeBotao.h"
#include "SeSenao.h"
namespace Alg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para TelaExplicacaoCondicao1
	/// </summary>
	public ref class TelaExplicacaoCondicao1 : public System::Windows::Forms::Form
	{
	public:
		int getOpcaoContinuar();
		void fecharJogo();
	private: System::Windows::Forms::PictureBox^  ImagemBotaoCinza;
	public:
	private: System::Windows::Forms::PictureBox^  ImagemBotaoVermelho;
	private: System::Windows::Forms::Button^  button;



	private:
		bool OpcaoContinuar;		
		void executarAoClicarBotaoAvancar();
		void executarAoClicarBotaoMenuPrincipal();
	public:
		TelaExplicacaoCondicao1(void)
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
		~TelaExplicacaoCondicao1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  BotaoAvancar;
	protected:
	private: System::Windows::Forms::Button^  BotaoMenuPrincipal;
	private: System::Windows::Forms::Label^  LetreiroAlgoritmo;
	private: System::Windows::Forms::Label^  LetreiroInformacao;
	private: System::Windows::Forms::Label^  LetreiroTitulo;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaExplicacaoCondicao1::typeid));
			this->BotaoAvancar = (gcnew System::Windows::Forms::Button());
			this->BotaoMenuPrincipal = (gcnew System::Windows::Forms::Button());
			this->LetreiroAlgoritmo = (gcnew System::Windows::Forms::Label());
			this->LetreiroInformacao = (gcnew System::Windows::Forms::Label());
			this->LetreiroTitulo = (gcnew System::Windows::Forms::Label());
			this->ImagemBotaoCinza = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemBotaoVermelho = (gcnew System::Windows::Forms::PictureBox());
			this->button = (gcnew System::Windows::Forms::Button());
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
			this->BotaoAvancar->TabIndex = 28;
			this->BotaoAvancar->UseCompatibleTextRendering = true;
			this->BotaoAvancar->UseVisualStyleBackColor = false;
			this->BotaoAvancar->Click += gcnew System::EventHandler(this, &TelaExplicacaoCondicao1::BotaoAvancar_Click);
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
			this->BotaoMenuPrincipal->Click += gcnew System::EventHandler(this, &TelaExplicacaoCondicao1::BotaoMenuPrincipal_Click);
			this->BotaoMenuPrincipal->MouseLeave += gcnew System::EventHandler(this, &TelaExplicacaoCondicao1::BotaoMenuPrincipal_MouseLeave);
			this->BotaoMenuPrincipal->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaExplicacaoCondicao1::BotaoMenuPrincipal_MouseMove);
			// 
			// LetreiroAlgoritmo
			// 
			this->LetreiroAlgoritmo->AutoSize = true;
			this->LetreiroAlgoritmo->BackColor = System::Drawing::Color::White;
			this->LetreiroAlgoritmo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->LetreiroAlgoritmo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->LetreiroAlgoritmo->ForeColor = System::Drawing::Color::Black;
			this->LetreiroAlgoritmo->Location = System::Drawing::Point(55, 275);
			this->LetreiroAlgoritmo->Name = L"LetreiroAlgoritmo";
			this->LetreiroAlgoritmo->Size = System::Drawing::Size(401, 299);
			this->LetreiroAlgoritmo->TabIndex = 26;
			this->LetreiroAlgoritmo->Text = resources->GetString(L"LetreiroAlgoritmo.Text");
			// 
			// LetreiroInformacao
			// 
			this->LetreiroInformacao->AutoSize = true;
			this->LetreiroInformacao->BackColor = System::Drawing::Color::Transparent;
			this->LetreiroInformacao->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18));
			this->LetreiroInformacao->ForeColor = System::Drawing::Color::Black;
			this->LetreiroInformacao->Location = System::Drawing::Point(50, 144);
			this->LetreiroInformacao->Name = L"LetreiroInformacao";
			this->LetreiroInformacao->Size = System::Drawing::Size(1218, 120);
			this->LetreiroInformacao->TabIndex = 25;
			this->LetreiroInformacao->Text = resources->GetString(L"LetreiroInformacao.Text");
			// 
			// LetreiroTitulo
			// 
			this->LetreiroTitulo->AutoSize = true;
			this->LetreiroTitulo->BackColor = System::Drawing::Color::Transparent;
			this->LetreiroTitulo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 48));
			this->LetreiroTitulo->ForeColor = System::Drawing::Color::Black;
			this->LetreiroTitulo->Location = System::Drawing::Point(429, 9);
			this->LetreiroTitulo->Name = L"LetreiroTitulo";
			this->LetreiroTitulo->Size = System::Drawing::Size(363, 78);
			this->LetreiroTitulo->TabIndex = 24;
			this->LetreiroTitulo->Text = L"Se - Senão";
			// 
			// ImagemBotaoCinza
			// 
			this->ImagemBotaoCinza->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoCinza.Image")));
			this->ImagemBotaoCinza->Location = System::Drawing::Point(184, 75);
			this->ImagemBotaoCinza->Name = L"ImagemBotaoCinza";
			this->ImagemBotaoCinza->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoCinza->TabIndex = 73;
			this->ImagemBotaoCinza->TabStop = false;
			this->ImagemBotaoCinza->Visible = false;
			// 
			// ImagemBotaoVermelho
			// 
			this->ImagemBotaoVermelho->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoVermelho.Image")));
			this->ImagemBotaoVermelho->Location = System::Drawing::Point(152, 75);
			this->ImagemBotaoVermelho->Name = L"ImagemBotaoVermelho";
			this->ImagemBotaoVermelho->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoVermelho->TabIndex = 72;
			this->ImagemBotaoVermelho->TabStop = false;
			this->ImagemBotaoVermelho->Visible = false;
			// 
			// button
			// 
			this->button->BackColor = System::Drawing::Color::Transparent;
			this->button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button.BackgroundImage")));
			this->button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button->FlatAppearance->BorderSize = 0;
			this->button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20));
			this->button->Location = System::Drawing::Point(581, 381);
			this->button->Margin = System::Windows::Forms::Padding(10);
			this->button->Name = L"button";
			this->button->Size = System::Drawing::Size(255, 62);
			this->button->TabIndex = 74;
			this->button->Text = L"Linguagem C";
			this->button->UseCompatibleTextRendering = true;
			this->button->UseVisualStyleBackColor = false;
			this->button->Click += gcnew System::EventHandler(this, &TelaExplicacaoCondicao1::button1_Click);
			// 
			// TelaExplicacaoCondicao1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(1264, 661);
			this->Controls->Add(this->button);
			this->Controls->Add(this->ImagemBotaoCinza);
			this->Controls->Add(this->ImagemBotaoVermelho);
			this->Controls->Add(this->BotaoAvancar);
			this->Controls->Add(this->BotaoMenuPrincipal);
			this->Controls->Add(this->LetreiroAlgoritmo);
			this->Controls->Add(this->LetreiroInformacao);
			this->Controls->Add(this->LetreiroTitulo);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"TelaExplicacaoCondicao1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Alg+";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TelaExplicacaoCondicao1::TelaExplicacaoCondicao1_FormClosed);
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
private: System::Void TelaExplicacaoCondicao1_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
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
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 SeSenao sesenao;
			 sesenao.ShowDialog();
}
};
}
