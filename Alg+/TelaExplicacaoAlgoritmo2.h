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
	/// Sumário para TelaExplicacaoAlgoritmo2
	/// </summary>
	public ref class TelaExplicacaoAlgoritmo2 : public System::Windows::Forms::Form
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
		TelaExplicacaoAlgoritmo2(void)
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
		~TelaExplicacaoAlgoritmo2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  BotaoAvancar;
	private: System::Windows::Forms::Button^  BotaoMenuPrincipal;
	private: System::Windows::Forms::Label^  LetreiroSubtitulo3;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaExplicacaoAlgoritmo2::typeid));
			this->BotaoAvancar = (gcnew System::Windows::Forms::Button());
			this->BotaoMenuPrincipal = (gcnew System::Windows::Forms::Button());
			this->LetreiroSubtitulo3 = (gcnew System::Windows::Forms::Label());
			this->LetreiroSubTitulo2 = (gcnew System::Windows::Forms::Label());
			this->LetreiroSubTitulo1 = (gcnew System::Windows::Forms::Label());
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
			this->BotaoAvancar->Location = System::Drawing::Point(1189, 616);
			this->BotaoAvancar->Margin = System::Windows::Forms::Padding(10);
			this->BotaoAvancar->Name = L"BotaoAvancar";
			this->BotaoAvancar->Size = System::Drawing::Size(56, 26);
			this->BotaoAvancar->TabIndex = 30;
			this->BotaoAvancar->UseCompatibleTextRendering = true;
			this->BotaoAvancar->UseVisualStyleBackColor = false;
			this->BotaoAvancar->Click += gcnew System::EventHandler(this, &TelaExplicacaoAlgoritmo2::BotaoAvancar_Click);
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
			this->BotaoMenuPrincipal->TabIndex = 29;
			this->BotaoMenuPrincipal->Text = L"Menu Principal";
			this->BotaoMenuPrincipal->UseCompatibleTextRendering = true;
			this->BotaoMenuPrincipal->UseVisualStyleBackColor = false;
			this->BotaoMenuPrincipal->Click += gcnew System::EventHandler(this, &TelaExplicacaoAlgoritmo2::BotaoMenuPrincipal_Click);
			this->BotaoMenuPrincipal->MouseLeave += gcnew System::EventHandler(this, &TelaExplicacaoAlgoritmo2::BotaoMenuPrincipal_MouseLeave);
			this->BotaoMenuPrincipal->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaExplicacaoAlgoritmo2::BotaoMenuPrincipal_MouseMove);
			// 
			// LetreiroSubtitulo3
			// 
			this->LetreiroSubtitulo3->AutoSize = true;
			this->LetreiroSubtitulo3->BackColor = System::Drawing::Color::Transparent;
			this->LetreiroSubtitulo3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20));
			this->LetreiroSubtitulo3->Location = System::Drawing::Point(50, 405);
			this->LetreiroSubtitulo3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->LetreiroSubtitulo3->Name = L"LetreiroSubtitulo3";
			this->LetreiroSubtitulo3->Size = System::Drawing::Size(899, 66);
			this->LetreiroSubtitulo3->TabIndex = 28;
			this->LetreiroSubtitulo3->Text = L"» Uma vez concebida uma solução algorítmica para um problema,\r\n   esta pode ser t"
				L"raduzida para qualquer linguagem.\r\n";
			// 
			// LetreiroSubTitulo2
			// 
			this->LetreiroSubTitulo2->AutoSize = true;
			this->LetreiroSubTitulo2->BackColor = System::Drawing::Color::Transparent;
			this->LetreiroSubTitulo2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20));
			this->LetreiroSubTitulo2->Location = System::Drawing::Point(50, 338);
			this->LetreiroSubTitulo2->Margin = System::Windows::Forms::Padding(20);
			this->LetreiroSubTitulo2->Name = L"LetreiroSubTitulo2";
			this->LetreiroSubTitulo2->Size = System::Drawing::Size(564, 33);
			this->LetreiroSubTitulo2->TabIndex = 26;
			this->LetreiroSubTitulo2->Text = L"» Abstração de detalhes computacionais.";
			// 
			// LetreiroSubTitulo1
			// 
			this->LetreiroSubTitulo1->AutoSize = true;
			this->LetreiroSubTitulo1->BackColor = System::Drawing::Color::Transparent;
			this->LetreiroSubTitulo1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20));
			this->LetreiroSubTitulo1->Location = System::Drawing::Point(50, 271);
			this->LetreiroSubTitulo1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->LetreiroSubTitulo1->Name = L"LetreiroSubTitulo1";
			this->LetreiroSubTitulo1->Size = System::Drawing::Size(958, 33);
			this->LetreiroSubTitulo1->TabIndex = 25;
			this->LetreiroSubTitulo1->Text = L"» Representar o raciocínio lógico envolvido na lógica de Programação.";
			// 
			// LetreiroTitulo
			// 
			this->LetreiroTitulo->AutoSize = true;
			this->LetreiroTitulo->BackColor = System::Drawing::Color::Transparent;
			this->LetreiroTitulo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 48));
			this->LetreiroTitulo->Location = System::Drawing::Point(88, 14);
			this->LetreiroTitulo->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->LetreiroTitulo->Name = L"LetreiroTitulo";
			this->LetreiroTitulo->Size = System::Drawing::Size(974, 156);
			this->LetreiroTitulo->TabIndex = 24;
			this->LetreiroTitulo->Text = L"    POR QUE É IMPORTANTE\r\nCONSTRUIR  UM ALGORITMO \?";
			// 
			// ImagemBotaoCinza
			// 
			this->ImagemBotaoCinza->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoCinza.Image")));
			this->ImagemBotaoCinza->Location = System::Drawing::Point(175, 78);
			this->ImagemBotaoCinza->Name = L"ImagemBotaoCinza";
			this->ImagemBotaoCinza->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoCinza->TabIndex = 73;
			this->ImagemBotaoCinza->TabStop = false;
			this->ImagemBotaoCinza->Visible = false;
			// 
			// ImagemBotaoVermelho
			// 
			this->ImagemBotaoVermelho->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoVermelho.Image")));
			this->ImagemBotaoVermelho->Location = System::Drawing::Point(143, 78);
			this->ImagemBotaoVermelho->Name = L"ImagemBotaoVermelho";
			this->ImagemBotaoVermelho->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoVermelho->TabIndex = 72;
			this->ImagemBotaoVermelho->TabStop = false;
			this->ImagemBotaoVermelho->Visible = false;
			// 
			// TelaExplicacaoAlgoritmo2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(1264, 661);
			this->Controls->Add(this->ImagemBotaoCinza);
			this->Controls->Add(this->ImagemBotaoVermelho);
			this->Controls->Add(this->BotaoAvancar);
			this->Controls->Add(this->BotaoMenuPrincipal);
			this->Controls->Add(this->LetreiroSubtitulo3);
			this->Controls->Add(this->LetreiroSubTitulo2);
			this->Controls->Add(this->LetreiroSubTitulo1);
			this->Controls->Add(this->LetreiroTitulo);
			this->ForeColor = System::Drawing::Color::Black;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"TelaExplicacaoAlgoritmo2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Alg+";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TelaExplicacaoAlgoritmo2::TelaExplicacaoAlgoritmo2_FormClosed);
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
private: System::Void TelaExplicacaoAlgoritmo2_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
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
