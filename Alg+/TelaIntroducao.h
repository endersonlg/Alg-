#pragma once
#include"AlteradorPropriedadeLetreiro.h"
#include"AlteradorPropriedadeTempo.h"
#include"AlteradorPropriedadeBotao.h"
#include"AlteradorPropriedadePainel.h"
#include"AlteradorPropriedadeCaixaDeTexto.h"
#include"AlteradorPropriedadeImagem.h"
#include<iostream>


namespace Alg {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Sumário para TelaIntroducao
	/// </summary>
	public ref class TelaIntroducao : public System::Windows::Forms::Form
	{
	private:
		bool OpcaoContinuar;
		int PiscarEnunciado = 0;
		int PiscarRespostaEOpcao = 0;
		int TempoTotal = 0;
		String^ RespostaVazia = "";
		String^ Frase;
	private: System::Windows::Forms::PictureBox^  ImagemBotaoCinza;
	private: System::Windows::Forms::PictureBox^  ImagemBotaoVermelho;
	private: System::Windows::Forms::PictureBox^  ImagemBotaoVerde;
	private: System::Windows::Forms::PictureBox^  ImagemBotaoAzul;
			 bool RegistrarFrase = false;

	private:
		void ativarTempo(Timer^);
		void desativarTempo(Timer^);
		void mudarVisiabilidadeLetreiroParaVerdadeiro(Label^);
		void atribuirTextoParaAExplicacao(Label^, String^);
		void mudarVisiabilidadeDoBotaoParaFalso(Button^);
		void mudarVisiabilidadeDoBotaoParaVisivel(Button^);
		void mudarCorDeFundoDoBotaoParaBranco(Button^);
		void mudarCorDeFundoDoBotaoParaTransparente(Button^);
		void mudarCorDaFonteLetreiroParaPreto(Label^);
		void mudarCorDaFonteLetreiroParaAmarelo(Label^);
		void mudarCorDeFundoLetreiroParaAmarelo(Label^);
		void mudarCorDeFundoLetreiroParaBranco(Label^);
		void mudarCorDeFundoLetreiroParaCinzaEscuro(Label^);
		void mudarCorDeFundoCaixaDeTextoParaBranco(TextBox^);
		void mudarCorDeFundoCaixaDeTextoParaAmarelo(TextBox^);
		void mudarCorDeFundoCaixaDeTextoParaCinzaEscuro(TextBox^);
		void mudarVisiabilidadePainelParaVerdadeiro(Panel^);
		void mudarVisiabilidadePainelParaFalso(Panel^);
		void mudarVisiabilidadeCaixaDeTextoParaVerdadeiro(TextBox^);
		void mudarCorDaBordaDoBotaoParaPreto(Button^);
		void mudarCorDaBordaDoBotaoParaAmarelo(Button^);
		void mudarLarguraDaBordaDoBotao(Button^, int);
		void desativarCaixaDeTexto(TextBox^);
		void mudarBordaCaixaDeTextoParaNenhuma(TextBox^);
		void mudarVisiabilidadeDaImagemParaInvisivel(PictureBox^);
		void mudarVisiabilidadeDaImagemParaVisivel(PictureBox^);
		void piscarCorDoEnunciado();
		void piscarCorDoTempoNaFase();
		void piscarOpcaoResposta3EAresposta1();
		void piscarBotaoResetar();
		void piscarCaixaDeTextoResposta2();
		void piscarBotaoTestarEJogar();
		
		void comecarOuVoltarAPiscarOpcaoDeResposta3EAresposta1();
		bool testarTextoValorDaVariavelEValido();
		void executarAoClicarBotaoResposta3();
		void executarAoClicarBotaoAvancar1();
		void executarAoClicarBotaoAvancar2();
		void executarAoClicarBotaoAvancar3();
		void executarAoClicarBotaoAvancar4();
		void executarAoClicarBotaoAvancar5();
		void executarAoClicarBotaoReiniciar();
		void executarAoClicarBotaoSair();
		void executarAoClicarBotaoJogar();
		void executarAoClicarBotaoTestar();
		void fecharTela();
		
		

	public:
		int getOpcaoIraContinuar();
		bool getRegistrarFraseNoArquivo();
		void fecharJogo();
		String^ getFrase();


	private: System::Windows::Forms::Timer^  TempoNaFase;
	private: System::Windows::Forms::Timer^  TempoTrocaCorResetar;
	private: System::Windows::Forms::TextBox^  CaixaDeTextoResposta2;
	private: System::Windows::Forms::Timer^  TempoTrocaTextoValorDaVariavel;
	private: System::Windows::Forms::Timer^  TempoTrocaDeCorBotaoTestarEJogar;
	private: System::Windows::Forms::Button^  BotaoAvancar2;
	private: System::Windows::Forms::Button^  BotaoAvancar5;
	private: System::Windows::Forms::Button^  BotaoAvancar4;

	public:
		TelaIntroducao(void)
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
		~TelaIntroducao()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  BotaoMenuPrincipal;
	protected:

	protected:
	private: System::Windows::Forms::Button^  BotaoJogar;
	private: System::Windows::Forms::Label^  LetreiroEnunciado;

	private: System::Windows::Forms::Label^  LetreiroLinhaTracada;
	private: System::Windows::Forms::Label^  LetreiroOpcao;


	private: System::Windows::Forms::Button^  BotaoOpcaoDeResposta5;
	private: System::Windows::Forms::Button^  BotaoOpcaoDeResposta4;
	private: System::Windows::Forms::Button^  BotaoOpcaoDeResposta3;
	private: System::Windows::Forms::Button^  BotaoOpcaoDeResposta1;
	private: System::Windows::Forms::Button^  BotaoOpcaoDeResposta2;
	private: System::Windows::Forms::Label^  LetreiroTempoTotal;
	private: System::Windows::Forms::Button^  BotaoTestar;
	private: System::Windows::Forms::Button^  BotaoAvancar;
	private: System::Windows::Forms::PictureBox^  ImagemErrado;
	private: System::Windows::Forms::PictureBox^  ImagemCorreto;
	private: System::Windows::Forms::Button^  BotaoResetar;
	private: System::Windows::Forms::Label^  LetreiroAlgoritmo;

	private: System::Windows::Forms::Panel^  PainelDialogo1;
	private: System::Windows::Forms::Button^  BotaoAvancar1;
	private: System::Windows::Forms::Label^  LetreiroExplicacao1;
	private: System::Windows::Forms::Label^  LetreiroExplicacao2;


	private: System::Windows::Forms::Timer^  TempoParaTrocaDeCorEnunciado;
	private: System::Windows::Forms::Panel^  PainelDialogo2;
	private: System::Windows::Forms::Button^  BotaoAvancar3;




	private: System::Windows::Forms::Timer^  TempoTrocaDeCorOpcaoEResposta;
	private: System::Windows::Forms::Label^  LetreiroResposta1;



	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte do Designer - não modifique
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaIntroducao::typeid));
			this->BotaoMenuPrincipal = (gcnew System::Windows::Forms::Button());
			this->BotaoJogar = (gcnew System::Windows::Forms::Button());
			this->LetreiroEnunciado = (gcnew System::Windows::Forms::Label());
			this->LetreiroLinhaTracada = (gcnew System::Windows::Forms::Label());
			this->LetreiroOpcao = (gcnew System::Windows::Forms::Label());
			this->BotaoOpcaoDeResposta5 = (gcnew System::Windows::Forms::Button());
			this->BotaoOpcaoDeResposta4 = (gcnew System::Windows::Forms::Button());
			this->BotaoOpcaoDeResposta3 = (gcnew System::Windows::Forms::Button());
			this->BotaoOpcaoDeResposta1 = (gcnew System::Windows::Forms::Button());
			this->BotaoOpcaoDeResposta2 = (gcnew System::Windows::Forms::Button());
			this->LetreiroTempoTotal = (gcnew System::Windows::Forms::Label());
			this->BotaoTestar = (gcnew System::Windows::Forms::Button());
			this->BotaoAvancar = (gcnew System::Windows::Forms::Button());
			this->ImagemErrado = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemCorreto = (gcnew System::Windows::Forms::PictureBox());
			this->BotaoResetar = (gcnew System::Windows::Forms::Button());
			this->LetreiroAlgoritmo = (gcnew System::Windows::Forms::Label());
			this->PainelDialogo1 = (gcnew System::Windows::Forms::Panel());
			this->BotaoAvancar2 = (gcnew System::Windows::Forms::Button());
			this->BotaoAvancar1 = (gcnew System::Windows::Forms::Button());
			this->LetreiroExplicacao1 = (gcnew System::Windows::Forms::Label());
			this->LetreiroExplicacao2 = (gcnew System::Windows::Forms::Label());
			this->TempoParaTrocaDeCorEnunciado = (gcnew System::Windows::Forms::Timer(this->components));
			this->PainelDialogo2 = (gcnew System::Windows::Forms::Panel());
			this->BotaoAvancar5 = (gcnew System::Windows::Forms::Button());
			this->BotaoAvancar4 = (gcnew System::Windows::Forms::Button());
			this->BotaoAvancar3 = (gcnew System::Windows::Forms::Button());
			this->TempoTrocaDeCorOpcaoEResposta = (gcnew System::Windows::Forms::Timer(this->components));
			this->LetreiroResposta1 = (gcnew System::Windows::Forms::Label());
			this->TempoNaFase = (gcnew System::Windows::Forms::Timer(this->components));
			this->TempoTrocaCorResetar = (gcnew System::Windows::Forms::Timer(this->components));
			this->CaixaDeTextoResposta2 = (gcnew System::Windows::Forms::TextBox());
			this->TempoTrocaTextoValorDaVariavel = (gcnew System::Windows::Forms::Timer(this->components));
			this->TempoTrocaDeCorBotaoTestarEJogar = (gcnew System::Windows::Forms::Timer(this->components));
			this->ImagemBotaoCinza = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemBotaoVermelho = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemBotaoVerde = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemBotaoAzul = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemErrado))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemCorreto))->BeginInit();
			this->PainelDialogo1->SuspendLayout();
			this->PainelDialogo2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoCinza))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVermelho))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVerde))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoAzul))->BeginInit();
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
			this->BotaoMenuPrincipal->Location = System::Drawing::Point(19, 584);
			this->BotaoMenuPrincipal->Margin = System::Windows::Forms::Padding(10);
			this->BotaoMenuPrincipal->Name = L"BotaoMenuPrincipal";
			this->BotaoMenuPrincipal->Size = System::Drawing::Size(323, 54);
			this->BotaoMenuPrincipal->TabIndex = 0;
			this->BotaoMenuPrincipal->Text = L"MenuPrincipal";
			this->BotaoMenuPrincipal->UseCompatibleTextRendering = true;
			this->BotaoMenuPrincipal->UseVisualStyleBackColor = false;
			this->BotaoMenuPrincipal->Click += gcnew System::EventHandler(this, &TelaIntroducao::BotaoMenuPrincipal_Click);
			this->BotaoMenuPrincipal->MouseLeave += gcnew System::EventHandler(this, &TelaIntroducao::BotaoMenuPrincipal_MouseLeave);
			this->BotaoMenuPrincipal->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaIntroducao::BotaoMenuPrincipal_MouseMove);
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
			this->BotaoJogar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 30));
			this->BotaoJogar->Location = System::Drawing::Point(1091, 573);
			this->BotaoJogar->Margin = System::Windows::Forms::Padding(10);
			this->BotaoJogar->Name = L"BotaoJogar";
			this->BotaoJogar->Size = System::Drawing::Size(150, 65);
			this->BotaoJogar->TabIndex = 1;
			this->BotaoJogar->Text = L"Jogar";
			this->BotaoJogar->UseCompatibleTextRendering = true;
			this->BotaoJogar->UseVisualStyleBackColor = false;
			this->BotaoJogar->Click += gcnew System::EventHandler(this, &TelaIntroducao::BotaoJogar_Click);
			this->BotaoJogar->MouseLeave += gcnew System::EventHandler(this, &TelaIntroducao::BotaoJogar_MouseLeave);
			this->BotaoJogar->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaIntroducao::BotaoJogar_MouseMove);
			// 
			// LetreiroEnunciado
			// 
			this->LetreiroEnunciado->AutoSize = true;
			this->LetreiroEnunciado->BackColor = System::Drawing::Color::Transparent;
			this->LetreiroEnunciado->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LetreiroEnunciado->Font = (gcnew System::Drawing::Font(L"Century Gothic", 17));
			this->LetreiroEnunciado->ForeColor = System::Drawing::Color::Black;
			this->LetreiroEnunciado->Location = System::Drawing::Point(75, 9);
			this->LetreiroEnunciado->Name = L"LetreiroEnunciado";
			this->LetreiroEnunciado->Size = System::Drawing::Size(930, 62);
			this->LetreiroEnunciado->TabIndex = 14;
			this->LetreiroEnunciado->Text = L"Crie uma variável Literal chamada Frase e atribua um valor para ela no código.\r\nE"
				L"screva o valor de Frase na tela.";
			this->LetreiroEnunciado->UseCompatibleTextRendering = true;
			this->LetreiroEnunciado->Visible = false;
			// 
			// LetreiroLinhaTracada
			// 
			this->LetreiroLinhaTracada->AutoSize = true;
			this->LetreiroLinhaTracada->ForeColor = System::Drawing::Color::Black;
			this->LetreiroLinhaTracada->Location = System::Drawing::Point(-7, 106);
			this->LetreiroLinhaTracada->Name = L"LetreiroLinhaTracada";
			this->LetreiroLinhaTracada->Size = System::Drawing::Size(1324, 13);
			this->LetreiroLinhaTracada->TabIndex = 15;
			this->LetreiroLinhaTracada->Text = resources->GetString(L"LetreiroLinhaTracada.Text");
			this->LetreiroLinhaTracada->Visible = false;
			// 
			// LetreiroOpcao
			// 
			this->LetreiroOpcao->AutoSize = true;
			this->LetreiroOpcao->Font = (gcnew System::Drawing::Font(L"Century Gothic", 30));
			this->LetreiroOpcao->ForeColor = System::Drawing::Color::Black;
			this->LetreiroOpcao->Location = System::Drawing::Point(907, 141);
			this->LetreiroOpcao->Name = L"LetreiroOpcao";
			this->LetreiroOpcao->Size = System::Drawing::Size(171, 56);
			this->LetreiroOpcao->TabIndex = 21;
			this->LetreiroOpcao->Text = L"Opção:";
			this->LetreiroOpcao->UseCompatibleTextRendering = true;
			this->LetreiroOpcao->Visible = false;
			// 
			// BotaoOpcaoDeResposta5
			// 
			this->BotaoOpcaoDeResposta5->BackColor = System::Drawing::Color::Transparent;
			this->BotaoOpcaoDeResposta5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoOpcaoDeResposta5.BackgroundImage")));
			this->BotaoOpcaoDeResposta5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotaoOpcaoDeResposta5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoOpcaoDeResposta5->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->BotaoOpcaoDeResposta5->FlatAppearance->BorderSize = 0;
			this->BotaoOpcaoDeResposta5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BotaoOpcaoDeResposta5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BotaoOpcaoDeResposta5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoOpcaoDeResposta5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20));
			this->BotaoOpcaoDeResposta5->ForeColor = System::Drawing::Color::Black;
			this->BotaoOpcaoDeResposta5->Location = System::Drawing::Point(1091, 390);
			this->BotaoOpcaoDeResposta5->Margin = System::Windows::Forms::Padding(10);
			this->BotaoOpcaoDeResposta5->Name = L"BotaoOpcaoDeResposta5";
			this->BotaoOpcaoDeResposta5->Size = System::Drawing::Size(150, 40);
			this->BotaoOpcaoDeResposta5->TabIndex = 20;
			this->BotaoOpcaoDeResposta5->Text = L"Booleano";
			this->BotaoOpcaoDeResposta5->UseCompatibleTextRendering = true;
			this->BotaoOpcaoDeResposta5->UseVisualStyleBackColor = false;
			this->BotaoOpcaoDeResposta5->Visible = false;
			// 
			// BotaoOpcaoDeResposta4
			// 
			this->BotaoOpcaoDeResposta4->BackColor = System::Drawing::Color::Transparent;
			this->BotaoOpcaoDeResposta4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoOpcaoDeResposta4.BackgroundImage")));
			this->BotaoOpcaoDeResposta4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotaoOpcaoDeResposta4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoOpcaoDeResposta4->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->BotaoOpcaoDeResposta4->FlatAppearance->BorderSize = 0;
			this->BotaoOpcaoDeResposta4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BotaoOpcaoDeResposta4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BotaoOpcaoDeResposta4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoOpcaoDeResposta4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20));
			this->BotaoOpcaoDeResposta4->ForeColor = System::Drawing::Color::Black;
			this->BotaoOpcaoDeResposta4->Location = System::Drawing::Point(1091, 330);
			this->BotaoOpcaoDeResposta4->Margin = System::Windows::Forms::Padding(10);
			this->BotaoOpcaoDeResposta4->Name = L"BotaoOpcaoDeResposta4";
			this->BotaoOpcaoDeResposta4->Size = System::Drawing::Size(150, 40);
			this->BotaoOpcaoDeResposta4->TabIndex = 19;
			this->BotaoOpcaoDeResposta4->Text = L"Caracter";
			this->BotaoOpcaoDeResposta4->UseCompatibleTextRendering = true;
			this->BotaoOpcaoDeResposta4->UseVisualStyleBackColor = false;
			this->BotaoOpcaoDeResposta4->Visible = false;
			// 
			// BotaoOpcaoDeResposta3
			// 
			this->BotaoOpcaoDeResposta3->BackColor = System::Drawing::Color::Transparent;
			this->BotaoOpcaoDeResposta3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoOpcaoDeResposta3.BackgroundImage")));
			this->BotaoOpcaoDeResposta3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotaoOpcaoDeResposta3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoOpcaoDeResposta3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->BotaoOpcaoDeResposta3->FlatAppearance->BorderSize = 0;
			this->BotaoOpcaoDeResposta3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BotaoOpcaoDeResposta3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BotaoOpcaoDeResposta3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoOpcaoDeResposta3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20));
			this->BotaoOpcaoDeResposta3->ForeColor = System::Drawing::Color::Black;
			this->BotaoOpcaoDeResposta3->Location = System::Drawing::Point(1091, 270);
			this->BotaoOpcaoDeResposta3->Margin = System::Windows::Forms::Padding(10);
			this->BotaoOpcaoDeResposta3->Name = L"BotaoOpcaoDeResposta3";
			this->BotaoOpcaoDeResposta3->Size = System::Drawing::Size(150, 40);
			this->BotaoOpcaoDeResposta3->TabIndex = 18;
			this->BotaoOpcaoDeResposta3->Text = L"Literal";
			this->BotaoOpcaoDeResposta3->UseCompatibleTextRendering = true;
			this->BotaoOpcaoDeResposta3->UseVisualStyleBackColor = false;
			this->BotaoOpcaoDeResposta3->Visible = false;
			this->BotaoOpcaoDeResposta3->Click += gcnew System::EventHandler(this, &TelaIntroducao::BotaoOpcaoDeResposta3_Click);
			this->BotaoOpcaoDeResposta3->MouseLeave += gcnew System::EventHandler(this, &TelaIntroducao::BotaoOpcaoDeResposta3_MouseLeave);
			this->BotaoOpcaoDeResposta3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaIntroducao::BotaoOpcaoDeResposta3_MouseMove);
			// 
			// BotaoOpcaoDeResposta1
			// 
			this->BotaoOpcaoDeResposta1->BackColor = System::Drawing::Color::Transparent;
			this->BotaoOpcaoDeResposta1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoOpcaoDeResposta1.BackgroundImage")));
			this->BotaoOpcaoDeResposta1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotaoOpcaoDeResposta1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoOpcaoDeResposta1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->BotaoOpcaoDeResposta1->FlatAppearance->BorderSize = 0;
			this->BotaoOpcaoDeResposta1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BotaoOpcaoDeResposta1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BotaoOpcaoDeResposta1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoOpcaoDeResposta1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20));
			this->BotaoOpcaoDeResposta1->ForeColor = System::Drawing::Color::Black;
			this->BotaoOpcaoDeResposta1->Location = System::Drawing::Point(1091, 150);
			this->BotaoOpcaoDeResposta1->Margin = System::Windows::Forms::Padding(10);
			this->BotaoOpcaoDeResposta1->Name = L"BotaoOpcaoDeResposta1";
			this->BotaoOpcaoDeResposta1->Size = System::Drawing::Size(150, 40);
			this->BotaoOpcaoDeResposta1->TabIndex = 16;
			this->BotaoOpcaoDeResposta1->Text = L"Real";
			this->BotaoOpcaoDeResposta1->UseCompatibleTextRendering = true;
			this->BotaoOpcaoDeResposta1->UseVisualStyleBackColor = false;
			this->BotaoOpcaoDeResposta1->Visible = false;
			// 
			// BotaoOpcaoDeResposta2
			// 
			this->BotaoOpcaoDeResposta2->BackColor = System::Drawing::Color::Transparent;
			this->BotaoOpcaoDeResposta2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoOpcaoDeResposta2.BackgroundImage")));
			this->BotaoOpcaoDeResposta2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotaoOpcaoDeResposta2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoOpcaoDeResposta2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->BotaoOpcaoDeResposta2->FlatAppearance->BorderSize = 0;
			this->BotaoOpcaoDeResposta2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BotaoOpcaoDeResposta2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BotaoOpcaoDeResposta2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoOpcaoDeResposta2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20));
			this->BotaoOpcaoDeResposta2->ForeColor = System::Drawing::Color::Black;
			this->BotaoOpcaoDeResposta2->Location = System::Drawing::Point(1091, 210);
			this->BotaoOpcaoDeResposta2->Margin = System::Windows::Forms::Padding(10);
			this->BotaoOpcaoDeResposta2->Name = L"BotaoOpcaoDeResposta2";
			this->BotaoOpcaoDeResposta2->Size = System::Drawing::Size(150, 40);
			this->BotaoOpcaoDeResposta2->TabIndex = 17;
			this->BotaoOpcaoDeResposta2->Text = L"Inteiro";
			this->BotaoOpcaoDeResposta2->UseCompatibleTextRendering = true;
			this->BotaoOpcaoDeResposta2->UseVisualStyleBackColor = false;
			this->BotaoOpcaoDeResposta2->Visible = false;
			// 
			// LetreiroTempoTotal
			// 
			this->LetreiroTempoTotal->AutoSize = true;
			this->LetreiroTempoTotal->BackColor = System::Drawing::Color::Transparent;
			this->LetreiroTempoTotal->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LetreiroTempoTotal->ForeColor = System::Drawing::Color::Black;
			this->LetreiroTempoTotal->Location = System::Drawing::Point(603, 130);
			this->LetreiroTempoTotal->Name = L"LetreiroTempoTotal";
			this->LetreiroTempoTotal->Size = System::Drawing::Size(74, 37);
			this->LetreiroTempoTotal->TabIndex = 22;
			this->LetreiroTempoTotal->Text = L"00:00";
			this->LetreiroTempoTotal->UseCompatibleTextRendering = true;
			// 
			// BotaoTestar
			// 
			this->BotaoTestar->BackColor = System::Drawing::Color::Transparent;
			this->BotaoTestar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoTestar.BackgroundImage")));
			this->BotaoTestar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotaoTestar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoTestar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->BotaoTestar->FlatAppearance->BorderSize = 0;
			this->BotaoTestar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BotaoTestar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BotaoTestar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoTestar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 60));
			this->BotaoTestar->ForeColor = System::Drawing::Color::Red;
			this->BotaoTestar->Location = System::Drawing::Point(483, 290);
			this->BotaoTestar->Name = L"BotaoTestar";
			this->BotaoTestar->Size = System::Drawing::Size(314, 80);
			this->BotaoTestar->TabIndex = 27;
			this->BotaoTestar->Text = L"Testar";
			this->BotaoTestar->UseCompatibleTextRendering = true;
			this->BotaoTestar->UseVisualStyleBackColor = false;
			this->BotaoTestar->Visible = false;
			this->BotaoTestar->Click += gcnew System::EventHandler(this, &TelaIntroducao::BotaoTestar_Click);
			this->BotaoTestar->MouseLeave += gcnew System::EventHandler(this, &TelaIntroducao::BotaoTestar_MouseLeave);
			this->BotaoTestar->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaIntroducao::BotaoTestar_MouseMove);
			// 
			// BotaoAvancar
			// 
			this->BotaoAvancar->BackColor = System::Drawing::Color::Transparent;
			this->BotaoAvancar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoAvancar.BackgroundImage")));
			this->BotaoAvancar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotaoAvancar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoAvancar->FlatAppearance->BorderSize = 0;
			this->BotaoAvancar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BotaoAvancar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BotaoAvancar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoAvancar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 30));
			this->BotaoAvancar->ForeColor = System::Drawing::Color::Black;
			this->BotaoAvancar->Location = System::Drawing::Point(473, 525);
			this->BotaoAvancar->Name = L"BotaoAvancar";
			this->BotaoAvancar->Size = System::Drawing::Size(215, 54);
			this->BotaoAvancar->TabIndex = 26;
			this->BotaoAvancar->Text = L"Avançar";
			this->BotaoAvancar->UseCompatibleTextRendering = true;
			this->BotaoAvancar->UseVisualStyleBackColor = false;
			this->BotaoAvancar->Visible = false;
			this->BotaoAvancar->Click += gcnew System::EventHandler(this, &TelaIntroducao::BotaoAvancar_Click);
			this->BotaoAvancar->MouseLeave += gcnew System::EventHandler(this, &TelaIntroducao::BotaoAvancar_MouseLeave);
			this->BotaoAvancar->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaIntroducao::BotaoAvancar_MouseMove);
			// 
			// ImagemErrado
			// 
			this->ImagemErrado->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemErrado.BackgroundImage")));
			this->ImagemErrado->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ImagemErrado->Location = System::Drawing::Point(694, 517);
			this->ImagemErrado->Name = L"ImagemErrado";
			this->ImagemErrado->Size = System::Drawing::Size(81, 62);
			this->ImagemErrado->TabIndex = 25;
			this->ImagemErrado->TabStop = false;
			this->ImagemErrado->Visible = false;
			// 
			// ImagemCorreto
			// 
			this->ImagemCorreto->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemCorreto.BackgroundImage")));
			this->ImagemCorreto->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ImagemCorreto->Location = System::Drawing::Point(694, 517);
			this->ImagemCorreto->Name = L"ImagemCorreto";
			this->ImagemCorreto->Size = System::Drawing::Size(81, 62);
			this->ImagemCorreto->TabIndex = 24;
			this->ImagemCorreto->TabStop = false;
			this->ImagemCorreto->Visible = false;
			// 
			// BotaoResetar
			// 
			this->BotaoResetar->BackColor = System::Drawing::Color::Transparent;
			this->BotaoResetar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoResetar.BackgroundImage")));
			this->BotaoResetar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotaoResetar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoResetar->FlatAppearance->BorderSize = 0;
			this->BotaoResetar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BotaoResetar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BotaoResetar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoResetar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 30));
			this->BotaoResetar->ForeColor = System::Drawing::Color::Black;
			this->BotaoResetar->Location = System::Drawing::Point(473, 525);
			this->BotaoResetar->Name = L"BotaoResetar";
			this->BotaoResetar->Size = System::Drawing::Size(215, 54);
			this->BotaoResetar->TabIndex = 23;
			this->BotaoResetar->Text = L"Reiniciar";
			this->BotaoResetar->UseCompatibleTextRendering = true;
			this->BotaoResetar->UseVisualStyleBackColor = false;
			this->BotaoResetar->Visible = false;
			this->BotaoResetar->Click += gcnew System::EventHandler(this, &TelaIntroducao::BotaoReiniciar_Click);
			this->BotaoResetar->MouseLeave += gcnew System::EventHandler(this, &TelaIntroducao::BotaoResetar_MouseLeave);
			this->BotaoResetar->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaIntroducao::BotaoResetar_MouseMove);
			// 
			// LetreiroAlgoritmo
			// 
			this->LetreiroAlgoritmo->AutoEllipsis = true;
			this->LetreiroAlgoritmo->AutoSize = true;
			this->LetreiroAlgoritmo->BackColor = System::Drawing::Color::Gray;
			this->LetreiroAlgoritmo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->LetreiroAlgoritmo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LetreiroAlgoritmo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->LetreiroAlgoritmo->ForeColor = System::Drawing::Color::Black;
			this->LetreiroAlgoritmo->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->LetreiroAlgoritmo->Location = System::Drawing::Point(19, 120);
			this->LetreiroAlgoritmo->Margin = System::Windows::Forms::Padding(10);
			this->LetreiroAlgoritmo->Name = L"LetreiroAlgoritmo";
			this->LetreiroAlgoritmo->Size = System::Drawing::Size(204, 191);
			this->LetreiroAlgoritmo->TabIndex = 28;
			this->LetreiroAlgoritmo->Text = L"   [inicio]\r\n[Tipos de Variaveis]\r\n  Frase:\r\n[Processamento]  \r\n  Frase<-\r\n  Escr"
				L"eva(Frase)\r\n  [fim]";
			this->LetreiroAlgoritmo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->LetreiroAlgoritmo->Visible = false;
			// 
			// PainelDialogo1
			// 
			this->PainelDialogo1->BackColor = System::Drawing::Color::LightGray;
			this->PainelDialogo1->Controls->Add(this->BotaoAvancar2);
			this->PainelDialogo1->Controls->Add(this->BotaoAvancar1);
			this->PainelDialogo1->Controls->Add(this->LetreiroExplicacao1);
			this->PainelDialogo1->Location = System::Drawing::Point(236, 129);
			this->PainelDialogo1->Margin = System::Windows::Forms::Padding(10);
			this->PainelDialogo1->Name = L"PainelDialogo1";
			this->PainelDialogo1->Size = System::Drawing::Size(721, 182);
			this->PainelDialogo1->TabIndex = 29;
			// 
			// BotaoAvancar2
			// 
			this->BotaoAvancar2->BackColor = System::Drawing::Color::LightGray;
			this->BotaoAvancar2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoAvancar2.BackgroundImage")));
			this->BotaoAvancar2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotaoAvancar2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoAvancar2->FlatAppearance->BorderSize = 0;
			this->BotaoAvancar2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoAvancar2->Location = System::Drawing::Point(661, 147);
			this->BotaoAvancar2->Margin = System::Windows::Forms::Padding(10);
			this->BotaoAvancar2->Name = L"BotaoAvancar2";
			this->BotaoAvancar2->Size = System::Drawing::Size(50, 25);
			this->BotaoAvancar2->TabIndex = 2;
			this->BotaoAvancar2->UseVisualStyleBackColor = false;
			this->BotaoAvancar2->Visible = false;
			this->BotaoAvancar2->Click += gcnew System::EventHandler(this, &TelaIntroducao::button1_Click_1);
			// 
			// BotaoAvancar1
			// 
			this->BotaoAvancar1->BackColor = System::Drawing::Color::LightGray;
			this->BotaoAvancar1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoAvancar1.BackgroundImage")));
			this->BotaoAvancar1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotaoAvancar1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoAvancar1->FlatAppearance->BorderSize = 0;
			this->BotaoAvancar1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoAvancar1->Location = System::Drawing::Point(661, 147);
			this->BotaoAvancar1->Margin = System::Windows::Forms::Padding(10);
			this->BotaoAvancar1->Name = L"BotaoAvancar1";
			this->BotaoAvancar1->Size = System::Drawing::Size(50, 25);
			this->BotaoAvancar1->TabIndex = 1;
			this->BotaoAvancar1->UseVisualStyleBackColor = false;
			this->BotaoAvancar1->Click += gcnew System::EventHandler(this, &TelaIntroducao::button1_Click);
			// 
			// LetreiroExplicacao1
			// 
			this->LetreiroExplicacao1->AutoSize = true;
			this->LetreiroExplicacao1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20));
			this->LetreiroExplicacao1->ForeColor = System::Drawing::Color::Black;
			this->LetreiroExplicacao1->Location = System::Drawing::Point(0, 1);
			this->LetreiroExplicacao1->Name = L"LetreiroExplicacao1";
			this->LetreiroExplicacao1->Size = System::Drawing::Size(714, 99);
			this->LetreiroExplicacao1->TabIndex = 0;
			this->LetreiroExplicacao1->Text = L"Ao lado direito ficará as opções para poder\r\ncompletar o algoritmo, sempre haverá"
				L" uma\r\nopção correta para que o algoritmo possa funcionar.";
			// 
			// LetreiroExplicacao2
			// 
			this->LetreiroExplicacao2->AutoSize = true;
			this->LetreiroExplicacao2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20));
			this->LetreiroExplicacao2->Location = System::Drawing::Point(3, -3);
			this->LetreiroExplicacao2->Name = L"LetreiroExplicacao2";
			this->LetreiroExplicacao2->Size = System::Drawing::Size(1022, 66);
			this->LetreiroExplicacao2->TabIndex = 0;
			this->LetreiroExplicacao2->Text = L"Fique atento ao tempo, pois ele começará a contar! no final sua pontuação\r\nserá r"
				L"elativa ao tempo e quantidade de tentativas.";
			// 
			// TempoParaTrocaDeCorEnunciado
			// 
			this->TempoParaTrocaDeCorEnunciado->Interval = 500;
			this->TempoParaTrocaDeCorEnunciado->Tick += gcnew System::EventHandler(this, &TelaIntroducao::TempoParaTrocaDeCorEnunciado_Tick);
			// 
			// PainelDialogo2
			// 
			this->PainelDialogo2->BackColor = System::Drawing::Color::LightGray;
			this->PainelDialogo2->Controls->Add(this->BotaoAvancar5);
			this->PainelDialogo2->Controls->Add(this->BotaoAvancar4);
			this->PainelDialogo2->Controls->Add(this->BotaoAvancar3);
			this->PainelDialogo2->Controls->Add(this->LetreiroExplicacao2);
			this->PainelDialogo2->Location = System::Drawing::Point(67, -1);
			this->PainelDialogo2->Margin = System::Windows::Forms::Padding(10);
			this->PainelDialogo2->Name = L"PainelDialogo2";
			this->PainelDialogo2->Size = System::Drawing::Size(1072, 111);
			this->PainelDialogo2->TabIndex = 30;
			this->PainelDialogo2->Visible = false;
			// 
			// BotaoAvancar5
			// 
			this->BotaoAvancar5->BackColor = System::Drawing::Color::LightGray;
			this->BotaoAvancar5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoAvancar5.BackgroundImage")));
			this->BotaoAvancar5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotaoAvancar5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoAvancar5->FlatAppearance->BorderSize = 0;
			this->BotaoAvancar5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoAvancar5->Location = System::Drawing::Point(1012, 76);
			this->BotaoAvancar5->Margin = System::Windows::Forms::Padding(10);
			this->BotaoAvancar5->Name = L"BotaoAvancar5";
			this->BotaoAvancar5->Size = System::Drawing::Size(50, 25);
			this->BotaoAvancar5->TabIndex = 3;
			this->BotaoAvancar5->UseVisualStyleBackColor = false;
			this->BotaoAvancar5->Visible = false;
			this->BotaoAvancar5->Click += gcnew System::EventHandler(this, &TelaIntroducao::BotaoAvancar5_Click);
			// 
			// BotaoAvancar4
			// 
			this->BotaoAvancar4->BackColor = System::Drawing::Color::LightGray;
			this->BotaoAvancar4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoAvancar4.BackgroundImage")));
			this->BotaoAvancar4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotaoAvancar4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoAvancar4->FlatAppearance->BorderSize = 0;
			this->BotaoAvancar4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoAvancar4->Location = System::Drawing::Point(1012, 76);
			this->BotaoAvancar4->Margin = System::Windows::Forms::Padding(10);
			this->BotaoAvancar4->Name = L"BotaoAvancar4";
			this->BotaoAvancar4->Size = System::Drawing::Size(50, 25);
			this->BotaoAvancar4->TabIndex = 2;
			this->BotaoAvancar4->UseVisualStyleBackColor = false;
			this->BotaoAvancar4->Visible = false;
			this->BotaoAvancar4->Click += gcnew System::EventHandler(this, &TelaIntroducao::BotaoAvancar4_Click);
			// 
			// BotaoAvancar3
			// 
			this->BotaoAvancar3->BackColor = System::Drawing::Color::LightGray;
			this->BotaoAvancar3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoAvancar3.BackgroundImage")));
			this->BotaoAvancar3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotaoAvancar3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoAvancar3->FlatAppearance->BorderSize = 0;
			this->BotaoAvancar3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoAvancar3->Location = System::Drawing::Point(1012, 76);
			this->BotaoAvancar3->Margin = System::Windows::Forms::Padding(10);
			this->BotaoAvancar3->Name = L"BotaoAvancar3";
			this->BotaoAvancar3->Size = System::Drawing::Size(50, 25);
			this->BotaoAvancar3->TabIndex = 1;
			this->BotaoAvancar3->UseVisualStyleBackColor = false;
			this->BotaoAvancar3->Click += gcnew System::EventHandler(this, &TelaIntroducao::button2_Click);
			// 
			// TempoTrocaDeCorOpcaoEResposta
			// 
			this->TempoTrocaDeCorOpcaoEResposta->Interval = 500;
			this->TempoTrocaDeCorOpcaoEResposta->Tick += gcnew System::EventHandler(this, &TelaIntroducao::TempoTrocaDeCorOpcaoEResposta_Tick);
			// 
			// LetreiroResposta1
			// 
			this->LetreiroResposta1->AutoSize = true;
			this->LetreiroResposta1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->LetreiroResposta1->Location = System::Drawing::Point(98, 177);
			this->LetreiroResposta1->Name = L"LetreiroResposta1";
			this->LetreiroResposta1->Size = System::Drawing::Size(0, 27);
			this->LetreiroResposta1->TabIndex = 31;
			// 
			// TempoNaFase
			// 
			this->TempoNaFase->Interval = 1000;
			this->TempoNaFase->Tick += gcnew System::EventHandler(this, &TelaIntroducao::TempoTotal_Tick);
			// 
			// TempoTrocaCorResetar
			// 
			this->TempoTrocaCorResetar->Interval = 500;
			this->TempoTrocaCorResetar->Tick += gcnew System::EventHandler(this, &TelaIntroducao::TimerTrocaCorResetar_Tick);
			// 
			// CaixaDeTextoResposta2
			// 
			this->CaixaDeTextoResposta2->AccessibleDescription = L"";
			this->CaixaDeTextoResposta2->AccessibleName = L"";
			this->CaixaDeTextoResposta2->BackColor = System::Drawing::Color::White;
			this->CaixaDeTextoResposta2->CausesValidation = false;
			this->CaixaDeTextoResposta2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->CaixaDeTextoResposta2->Location = System::Drawing::Point(112, 227);
			this->CaixaDeTextoResposta2->Name = L"CaixaDeTextoResposta2";
			this->CaixaDeTextoResposta2->Size = System::Drawing::Size(101, 35);
			this->CaixaDeTextoResposta2->TabIndex = 32;
			this->CaixaDeTextoResposta2->Visible = false;
			this->CaixaDeTextoResposta2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &TelaIntroducao::TextValorParaVariavel_KeyPress);
			// 
			// TempoTrocaTextoValorDaVariavel
			// 
			this->TempoTrocaTextoValorDaVariavel->Interval = 500;
			this->TempoTrocaTextoValorDaVariavel->Tick += gcnew System::EventHandler(this, &TelaIntroducao::TimerTrocaTextValorDaVariavel_Tick);
			// 
			// TempoTrocaDeCorBotaoTestarEJogar
			// 
			this->TempoTrocaDeCorBotaoTestarEJogar->Interval = 500;
			this->TempoTrocaDeCorBotaoTestarEJogar->Tick += gcnew System::EventHandler(this, &TelaIntroducao::TimeTrocaDeCorBotaoTestarEJogar_Tick);
			// 
			// ImagemBotaoCinza
			// 
			this->ImagemBotaoCinza->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoCinza.Image")));
			this->ImagemBotaoCinza->Location = System::Drawing::Point(151, 330);
			this->ImagemBotaoCinza->Name = L"ImagemBotaoCinza";
			this->ImagemBotaoCinza->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoCinza->TabIndex = 35;
			this->ImagemBotaoCinza->TabStop = false;
			this->ImagemBotaoCinza->Visible = false;
			// 
			// ImagemBotaoVermelho
			// 
			this->ImagemBotaoVermelho->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoVermelho.Image")));
			this->ImagemBotaoVermelho->Location = System::Drawing::Point(119, 330);
			this->ImagemBotaoVermelho->Name = L"ImagemBotaoVermelho";
			this->ImagemBotaoVermelho->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoVermelho->TabIndex = 34;
			this->ImagemBotaoVermelho->TabStop = false;
			this->ImagemBotaoVermelho->Visible = false;
			// 
			// ImagemBotaoVerde
			// 
			this->ImagemBotaoVerde->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoVerde.Image")));
			this->ImagemBotaoVerde->Location = System::Drawing::Point(103, 330);
			this->ImagemBotaoVerde->Name = L"ImagemBotaoVerde";
			this->ImagemBotaoVerde->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoVerde->TabIndex = 33;
			this->ImagemBotaoVerde->TabStop = false;
			this->ImagemBotaoVerde->Visible = false;
			// 
			// ImagemBotaoAzul
			// 
			this->ImagemBotaoAzul->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoAzul.Image")));
			this->ImagemBotaoAzul->Location = System::Drawing::Point(135, 330);
			this->ImagemBotaoAzul->Name = L"ImagemBotaoAzul";
			this->ImagemBotaoAzul->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoAzul->TabIndex = 36;
			this->ImagemBotaoAzul->TabStop = false;
			this->ImagemBotaoAzul->Visible = false;
			// 
			// TelaIntroducao
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(1260, 657);
			this->Controls->Add(this->ImagemBotaoAzul);
			this->Controls->Add(this->ImagemBotaoCinza);
			this->Controls->Add(this->ImagemBotaoVermelho);
			this->Controls->Add(this->ImagemBotaoVerde);
			this->Controls->Add(this->CaixaDeTextoResposta2);
			this->Controls->Add(this->LetreiroResposta1);
			this->Controls->Add(this->PainelDialogo2);
			this->Controls->Add(this->PainelDialogo1);
			this->Controls->Add(this->LetreiroAlgoritmo);
			this->Controls->Add(this->LetreiroTempoTotal);
			this->Controls->Add(this->BotaoTestar);
			this->Controls->Add(this->BotaoAvancar);
			this->Controls->Add(this->ImagemErrado);
			this->Controls->Add(this->ImagemCorreto);
			this->Controls->Add(this->BotaoResetar);
			this->Controls->Add(this->LetreiroOpcao);
			this->Controls->Add(this->BotaoOpcaoDeResposta5);
			this->Controls->Add(this->BotaoOpcaoDeResposta4);
			this->Controls->Add(this->BotaoOpcaoDeResposta3);
			this->Controls->Add(this->BotaoOpcaoDeResposta1);
			this->Controls->Add(this->BotaoOpcaoDeResposta2);
			this->Controls->Add(this->LetreiroLinhaTracada);
			this->Controls->Add(this->LetreiroEnunciado);
			this->Controls->Add(this->BotaoJogar);
			this->Controls->Add(this->BotaoMenuPrincipal);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"TelaIntroducao";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Alg+";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TelaIntroducao::TelaIntroducao_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemErrado))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemCorreto))->EndInit();
			this->PainelDialogo1->ResumeLayout(false);
			this->PainelDialogo1->PerformLayout();
			this->PainelDialogo2->ResumeLayout(false);
			this->PainelDialogo2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoCinza))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVermelho))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVerde))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoAzul))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BotaoMenuPrincipal_Click(System::Object^  sender, System::EventArgs^  e) {
				 executarAoClicarBotaoSair();
	}
	private: System::Void BotaoJogar_Click(System::Object^  sender, System::EventArgs^  e) {
				 executarAoClicarBotaoJogar();
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 executarAoClicarBotaoAvancar1();
}
private: System::Void TempoParaTrocaDeCorEnunciado_Tick(System::Object^  sender, System::EventArgs^  e) 
{
			 piscarCorDoEnunciado();
}
private: System::Void TempoTrocaDeCorOpcaoEResposta_Tick(System::Object^  sender, System::EventArgs^  e) {
			 piscarOpcaoResposta3EAresposta1();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 executarAoClicarBotaoAvancar3();
}
private: System::Void TempoTotal_Tick(System::Object^  sender, System::EventArgs^  e) 
{
			 piscarCorDoTempoNaFase();
}
private: System::Void BotaoOpcaoDeResposta3_Click(System::Object^  sender, System::EventArgs^  e) 
{
			 executarAoClicarBotaoResposta3();
}
private: System::Void TimerTrocaCorResetar_Tick(System::Object^  sender, System::EventArgs^  e) {
			 piscarBotaoResetar();
}
private: System::Void BotaoReiniciar_Click(System::Object^  sender, System::EventArgs^  e) {
			 executarAoClicarBotaoReiniciar();
}
private: System::Void TimerTrocaTextValorDaVariavel_Tick(System::Object^  sender, System::EventArgs^  e) {
			 piscarCaixaDeTextoResposta2();
}
private: System::Void TimeTrocaDeCorBotaoTestarEJogar_Tick(System::Object^  sender, System::EventArgs^  e) {
			 piscarBotaoTestarEJogar();
}
private: System::Void TextValorParaVariavel_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (e->KeyChar == 13)
			 {
					 executarAoClicarBotaoAvancar5();
			 }
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 executarAoClicarBotaoAvancar2();
}
private: System::Void BotaoAvancar4_Click(System::Object^  sender, System::EventArgs^  e) {

			 executarAoClicarBotaoAvancar4();
}
private: System::Void BotaoAvancar5_Click(System::Object^  sender, System::EventArgs^  e) {
			 executarAoClicarBotaoAvancar5();
}
private: System::Void BotaoAvancar_Click(System::Object^  sender, System::EventArgs^  e) {
			 OpcaoContinuar = true;
			 Visible = false;
}
private: System::Void TelaIntroducao_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 fecharJogo();
}
private: System::Void BotaoTestar_Click(System::Object^  sender, System::EventArgs^  e) {
			 executarAoClicarBotaoTestar();
}
private: System::Void BotaoOpcaoDeResposta3_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoOpcaoDeResposta3, ImagemBotaoVerde);
}
private: System::Void BotaoOpcaoDeResposta3_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoOpcaoDeResposta3, ImagemBotaoCinza);
}
private: System::Void BotaoTestar_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoTestar, ImagemBotaoAzul);
}
private: System::Void BotaoTestar_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoTestar, ImagemBotaoCinza);
}
private: System::Void BotaoAvancar_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoAvancar, ImagemBotaoVerde);
}
private: System::Void BotaoAvancar_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoAvancar, ImagemBotaoCinza);
}
private: System::Void BotaoResetar_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoResetar, ImagemBotaoVermelho);
}
private: System::Void BotaoResetar_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoResetar, ImagemBotaoCinza);
}
private: System::Void BotaoJogar_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoJogar, ImagemBotaoVerde);
}
private: System::Void BotaoJogar_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoJogar, ImagemBotaoCinza);
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
