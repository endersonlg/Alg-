#include "AlteradorPropriedadeBotao.h"
namespace Alg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaAlgoritmo3
	/// </summary>
	public ref class TelaExplicacaoAlgoritmo3 : public System::Windows::Forms::Form
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
		TelaExplicacaoAlgoritmo3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TelaExplicacaoAlgoritmo3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  LetreiroTitulo;
	private: System::Windows::Forms::Label^  LetreiroInformacao;
	private: System::Windows::Forms::Button^  BotaoMenuPrincipal;
	private: System::Windows::Forms::Label^  LetreiroAlgoritmo;
	private: System::Windows::Forms::Button^  BotaoAvancar3;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaExplicacaoAlgoritmo3::typeid));
			this->LetreiroTitulo = (gcnew System::Windows::Forms::Label());
			this->LetreiroInformacao = (gcnew System::Windows::Forms::Label());
			this->BotaoMenuPrincipal = (gcnew System::Windows::Forms::Button());
			this->LetreiroAlgoritmo = (gcnew System::Windows::Forms::Label());
			this->BotaoAvancar3 = (gcnew System::Windows::Forms::Button());
			this->ImagemBotaoCinza = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemBotaoVermelho = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoCinza))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVermelho))->BeginInit();
			this->SuspendLayout();
			// 
			// LetreiroTitulo
			// 
			this->LetreiroTitulo->AutoSize = true;
			this->LetreiroTitulo->BackColor = System::Drawing::Color::Transparent;
			this->LetreiroTitulo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 48));
			this->LetreiroTitulo->Location = System::Drawing::Point(430, 10);
			this->LetreiroTitulo->Name = L"LetreiroTitulo";
			this->LetreiroTitulo->Size = System::Drawing::Size(355, 78);
			this->LetreiroTitulo->TabIndex = 0;
			this->LetreiroTitulo->Text = L"EXEMPLOS";
			// 
			// LetreiroInformacao
			// 
			this->LetreiroInformacao->AutoSize = true;
			this->LetreiroInformacao->BackColor = System::Drawing::Color::Transparent;
			this->LetreiroInformacao->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20));
			this->LetreiroInformacao->Location = System::Drawing::Point(50, 140);
			this->LetreiroInformacao->Name = L"LetreiroInformacao";
			this->LetreiroInformacao->Size = System::Drawing::Size(916, 66);
			this->LetreiroInformacao->TabIndex = 1;
			this->LetreiroInformacao->Text = L"Imagine o trabalho do dia a dia de trocar uma lâmpada queimada.\r\nEsse trabalho em"
				L" algoritmo seria assim:";
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
			this->BotaoMenuPrincipal->Location = System::Drawing::Point(19, 580);
			this->BotaoMenuPrincipal->Margin = System::Windows::Forms::Padding(10);
			this->BotaoMenuPrincipal->Name = L"BotaoMenuPrincipal";
			this->BotaoMenuPrincipal->Size = System::Drawing::Size(350, 62);
			this->BotaoMenuPrincipal->TabIndex = 12;
			this->BotaoMenuPrincipal->Text = L"Menu Principal";
			this->BotaoMenuPrincipal->UseCompatibleTextRendering = true;
			this->BotaoMenuPrincipal->UseVisualStyleBackColor = false;
			this->BotaoMenuPrincipal->Click += gcnew System::EventHandler(this, &TelaExplicacaoAlgoritmo3::BotaoMenuPrincipal_Click);
			this->BotaoMenuPrincipal->MouseLeave += gcnew System::EventHandler(this, &TelaExplicacaoAlgoritmo3::BotaoMenuPrincipal_MouseLeave);
			this->BotaoMenuPrincipal->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaExplicacaoAlgoritmo3::BotaoMenuPrincipal_MouseMove);
			// 
			// LetreiroAlgoritmo
			// 
			this->LetreiroAlgoritmo->AutoSize = true;
			this->LetreiroAlgoritmo->BackColor = System::Drawing::Color::White;
			this->LetreiroAlgoritmo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->LetreiroAlgoritmo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->LetreiroAlgoritmo->Location = System::Drawing::Point(50, 269);
			this->LetreiroAlgoritmo->Name = L"LetreiroAlgoritmo";
			this->LetreiroAlgoritmo->Size = System::Drawing::Size(373, 191);
			this->LetreiroAlgoritmo->TabIndex = 15;
			this->LetreiroAlgoritmo->Text = resources->GetString(L"LetreiroAlgoritmo.Text");
			// 
			// BotaoAvancar3
			// 
			this->BotaoAvancar3->BackColor = System::Drawing::Color::Transparent;
			this->BotaoAvancar3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoAvancar3->FlatAppearance->BorderSize = 0;
			this->BotaoAvancar3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BotaoAvancar3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BotaoAvancar3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoAvancar3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 30));
			this->BotaoAvancar3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoAvancar3.Image")));
			this->BotaoAvancar3->Location = System::Drawing::Point(1189, 616);
			this->BotaoAvancar3->Margin = System::Windows::Forms::Padding(10);
			this->BotaoAvancar3->Name = L"BotaoAvancar3";
			this->BotaoAvancar3->Size = System::Drawing::Size(56, 26);
			this->BotaoAvancar3->TabIndex = 16;
			this->BotaoAvancar3->UseCompatibleTextRendering = true;
			this->BotaoAvancar3->UseVisualStyleBackColor = false;
			this->BotaoAvancar3->Click += gcnew System::EventHandler(this, &TelaExplicacaoAlgoritmo3::BotaoAvancar_Click);
			// 
			// ImagemBotaoCinza
			// 
			this->ImagemBotaoCinza->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoCinza.Image")));
			this->ImagemBotaoCinza->Location = System::Drawing::Point(254, 94);
			this->ImagemBotaoCinza->Name = L"ImagemBotaoCinza";
			this->ImagemBotaoCinza->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoCinza->TabIndex = 73;
			this->ImagemBotaoCinza->TabStop = false;
			this->ImagemBotaoCinza->Visible = false;
			// 
			// ImagemBotaoVermelho
			// 
			this->ImagemBotaoVermelho->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoVermelho.Image")));
			this->ImagemBotaoVermelho->Location = System::Drawing::Point(222, 94);
			this->ImagemBotaoVermelho->Name = L"ImagemBotaoVermelho";
			this->ImagemBotaoVermelho->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoVermelho->TabIndex = 72;
			this->ImagemBotaoVermelho->TabStop = false;
			this->ImagemBotaoVermelho->Visible = false;
			// 
			// TelaExplicacaoAlgoritmo3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(1264, 661);
			this->Controls->Add(this->ImagemBotaoCinza);
			this->Controls->Add(this->ImagemBotaoVermelho);
			this->Controls->Add(this->BotaoAvancar3);
			this->Controls->Add(this->LetreiroAlgoritmo);
			this->Controls->Add(this->BotaoMenuPrincipal);
			this->Controls->Add(this->LetreiroInformacao);
			this->Controls->Add(this->LetreiroTitulo);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"TelaExplicacaoAlgoritmo3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Alg+";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TelaExplicacaoAlgoritmo3::TelaExplicacaoAlgoritmo3_FormClosed);
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
private: System::Void TelaExplicacaoAlgoritmo3_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
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
