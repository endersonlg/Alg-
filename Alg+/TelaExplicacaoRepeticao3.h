#pragma once
#include "AlteradorPropriedadeBotao.h"
#include "para.h"
namespace Alg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para TelaExplicacaoRepeticao3
	/// </summary>
	public ref class TelaExplicacaoRepeticao3 : public System::Windows::Forms::Form
	{
	public:
		int getOpcaoContinuar();
		void fecharJogo();
	private: System::Windows::Forms::PictureBox^  ImagemBotaoCinza;
	public:
	private: System::Windows::Forms::PictureBox^  ImagemBotaoVerde;
	private: System::Windows::Forms::Button^  button;


	private:
		bool OpcaoContinuar;		
		void executarAoClicarBotaoAvancar();
		void executarAoClicarBotaoMenuPrincipal();
	public:
		TelaExplicacaoRepeticao3(void)
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
		~TelaExplicacaoRepeticao3()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^  BotaoMenuPrincipal;

	private: System::Windows::Forms::Label^  LetreiroAlgoritmo;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaExplicacaoRepeticao3::typeid));
			this->BotaoMenuPrincipal = (gcnew System::Windows::Forms::Button());
			this->LetreiroAlgoritmo = (gcnew System::Windows::Forms::Label());
			this->LetreiroInformacao = (gcnew System::Windows::Forms::Label());
			this->LetreiroTitulo = (gcnew System::Windows::Forms::Label());
			this->ImagemBotaoCinza = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemBotaoVerde = (gcnew System::Windows::Forms::PictureBox());
			this->button = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoCinza))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVerde))->BeginInit();
			this->SuspendLayout();
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
			this->BotaoMenuPrincipal->Location = System::Drawing::Point(895, 580);
			this->BotaoMenuPrincipal->Margin = System::Windows::Forms::Padding(10);
			this->BotaoMenuPrincipal->Name = L"BotaoMenuPrincipal";
			this->BotaoMenuPrincipal->Size = System::Drawing::Size(350, 62);
			this->BotaoMenuPrincipal->TabIndex = 22;
			this->BotaoMenuPrincipal->Text = L"Menu Principal";
			this->BotaoMenuPrincipal->UseCompatibleTextRendering = true;
			this->BotaoMenuPrincipal->UseVisualStyleBackColor = false;
			this->BotaoMenuPrincipal->Click += gcnew System::EventHandler(this, &TelaExplicacaoRepeticao3::BotaoMenuPrincipal_Click);
			this->BotaoMenuPrincipal->MouseLeave += gcnew System::EventHandler(this, &TelaExplicacaoRepeticao3::BotaoMenuPrincipal_MouseLeave);
			this->BotaoMenuPrincipal->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaExplicacaoRepeticao3::BotaoMenuPrincipal_MouseMove);
			// 
			// LetreiroAlgoritmo
			// 
			this->LetreiroAlgoritmo->AutoSize = true;
			this->LetreiroAlgoritmo->BackColor = System::Drawing::Color::White;
			this->LetreiroAlgoritmo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->LetreiroAlgoritmo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LetreiroAlgoritmo->ForeColor = System::Drawing::Color::Black;
			this->LetreiroAlgoritmo->Location = System::Drawing::Point(55, 261);
			this->LetreiroAlgoritmo->Name = L"LetreiroAlgoritmo";
			this->LetreiroAlgoritmo->Size = System::Drawing::Size(353, 218);
			this->LetreiroAlgoritmo->TabIndex = 20;
			this->LetreiroAlgoritmo->Text = L"          [Início]\r\n[Tipos De Variáveis]\r\n   Contador : inteiro\r\n[Procedimento]\r\n"
				L"   Para ( Contador de 1 até 10) faca\r\n      Escreva ( Contador )\r\n   Fim-para\r\n "
				L"        [Fim]";
			// 
			// LetreiroInformacao
			// 
			this->LetreiroInformacao->AutoSize = true;
			this->LetreiroInformacao->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18));
			this->LetreiroInformacao->Location = System::Drawing::Point(50, 144);
			this->LetreiroInformacao->Name = L"LetreiroInformacao";
			this->LetreiroInformacao->Size = System::Drawing::Size(1210, 90);
			this->LetreiroInformacao->TabIndex = 19;
			this->LetreiroInformacao->Text = resources->GetString(L"LetreiroInformacao.Text");
			// 
			// LetreiroTitulo
			// 
			this->LetreiroTitulo->AutoSize = true;
			this->LetreiroTitulo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 48));
			this->LetreiroTitulo->Location = System::Drawing::Point(538, 9);
			this->LetreiroTitulo->Name = L"LetreiroTitulo";
			this->LetreiroTitulo->Size = System::Drawing::Size(178, 78);
			this->LetreiroTitulo->TabIndex = 18;
			this->LetreiroTitulo->Text = L"Para";
			// 
			// ImagemBotaoCinza
			// 
			this->ImagemBotaoCinza->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoCinza.Image")));
			this->ImagemBotaoCinza->Location = System::Drawing::Point(266, 65);
			this->ImagemBotaoCinza->Name = L"ImagemBotaoCinza";
			this->ImagemBotaoCinza->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoCinza->TabIndex = 73;
			this->ImagemBotaoCinza->TabStop = false;
			this->ImagemBotaoCinza->Visible = false;
			// 
			// ImagemBotaoVerde
			// 
			this->ImagemBotaoVerde->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoVerde.Image")));
			this->ImagemBotaoVerde->Location = System::Drawing::Point(218, 65);
			this->ImagemBotaoVerde->Name = L"ImagemBotaoVerde";
			this->ImagemBotaoVerde->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoVerde->TabIndex = 72;
			this->ImagemBotaoVerde->TabStop = false;
			this->ImagemBotaoVerde->Visible = false;
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
			this->button->Location = System::Drawing::Point(526, 319);
			this->button->Margin = System::Windows::Forms::Padding(10);
			this->button->Name = L"button";
			this->button->Size = System::Drawing::Size(255, 62);
			this->button->TabIndex = 75;
			this->button->Text = L"Linguagem C";
			this->button->UseCompatibleTextRendering = true;
			this->button->UseVisualStyleBackColor = false;
			this->button->Click += gcnew System::EventHandler(this, &TelaExplicacaoRepeticao3::button_Click);
			// 
			// TelaExplicacaoRepeticao3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(1264, 661);
			this->Controls->Add(this->button);
			this->Controls->Add(this->ImagemBotaoCinza);
			this->Controls->Add(this->ImagemBotaoVerde);
			this->Controls->Add(this->BotaoMenuPrincipal);
			this->Controls->Add(this->LetreiroAlgoritmo);
			this->Controls->Add(this->LetreiroInformacao);
			this->Controls->Add(this->LetreiroTitulo);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"TelaExplicacaoRepeticao3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Alg+";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TelaExplicacaoRepeticao3::TelaExplicacaoRepeticao3_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoCinza))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVerde))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BotaoMenuPrincipal_Click(System::Object^  sender, System::EventArgs^  e) {
				 executarAoClicarBotaoMenuPrincipal();
	}
private: System::Void TelaExplicacaoRepeticao3_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 fecharJogo();
}
private: System::Void BotaoMenuPrincipal_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoMenuPrincipal, ImagemBotaoVerde);
}
private: System::Void BotaoMenuPrincipal_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoMenuPrincipal, ImagemBotaoCinza);
}
private: System::Void button_Click(System::Object^  sender, System::EventArgs^  e) {

			 para Para;
			 Para.ShowDialog();
}
};
}
