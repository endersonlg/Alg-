#pragma once
#include "AlteradorPropriedadeBotao.h"
#include "AlteradorPropriedadeImagem.h"
#include "AlteradorPropriedadeLetreiro.h"
#include "AlteradorPropriedadeTempo.h"
using namespace std;


namespace Alg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Sumário para TelaJogar1
	/// </summary>
	public ref class TelaQuestao1 : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Label^  letreiroEnunciado;
	private: System::Windows::Forms::Label^  letreiroLinhaTracada;
	private: System::Windows::Forms::Button^  BotaoSair;
	private: System::Windows::Forms::PictureBox^  ImagemCorreto;
	private: System::Windows::Forms::PictureBox^  ImagemErrado;
	private: System::Windows::Forms::Button^  BotaoAvancar;
	private: System::Windows::Forms::Button^  BotaoTestar;
	private: System::Windows::Forms::Label^  LetreiroTempoTotal;
	private: System::Windows::Forms::Timer^  TempoContadorTotal;



	private:
			int Contador;
			int TempoNaFase;
			int QuantidadeResetou;
			bool OpcaoContinuar;
			String ^ AcrecimoDeUnderlines = "";
	private: System::Windows::Forms::PictureBox^  ImagemBotaoCinza;
	private: System::Windows::Forms::PictureBox^  ImagemBotaoAzul;
	private: System::Windows::Forms::PictureBox^  ImagemBotaoVermelho;
	private: System::Windows::Forms::PictureBox^  ImagemBotaoVerde;

	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::PictureBox^  ImagemAjuda1;
	private: System::Windows::Forms::PictureBox^  ImagemAjuda2;





			 String ^ RespostaNaoPreenchida = "______";


			void atribuirRespostaNaoPreenchidaParaAResposta(Label^);
			void atribuirAcrecimoDeUnderline(Label^);
			void atribuirTextoParaAResposta(Label^, String^);
			void mudarCorDeFundoLetreiroParaBranco(Label^);
			void mudarCorDeFundoLetreiroParaAmarelo(Label^);
			void mudarVisiabilidadeDaImagemParaInvisivel(PictureBox^);
			void mudarVisiabilidadeDaImagemParaVisivel(PictureBox^);
			void mudarVisiabilidadeDoBotaoParaInvisivel(Button^);
			void mudarVisiabilidadeDoBotaoParaVisivel(Button^);
			void ativarTempo(Timer^);
			void desativarTempo(Timer^);
			void adicionarUnderlineEGerenciala();
			void piscarRespostaASerRespondida();
			void aumentarTempoTotal();
			void bloquearOpcoesDeRespostas();
			void desbloquearOpcoesDeRespostas();
			void verificarSeAsRespostasEstaoCorretas();
			void mudarVisiablidadeDeTodosBotoesOpcoesDeRespostasParaVerdadeiro();
			void executarAoClicarBotaoResposta1();
			void executarAoClicarBotaoResposta2();
			void executarAoClicarBotaoResposta3();
			void executarAoClicarBotaoResposta4();
			void executarAoClicarBotaoResposta5();
			void executarAoClicarBotaoReiniciar();
			void executarAoClicarBotaoTestar();
			void executarAoClicarBotaoSair();
			void executarAoClicarBotaoAvancar();
			void executarAoCarregarATela();
		
	public:
		int getTempoNaFase();
		int getQuantidadeQueResetouAFase();
		int getOpcaoIraContinuar();
		void fecharJogo();

	public:

		TelaQuestao1(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			Contador = 0;
			TempoNaFase = 0;
			QuantidadeResetou = 0;
			RespostaNaoPreenchida = "______";
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~TelaQuestao1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  BotaoOpcaoDeResposta1;
	private: System::Windows::Forms::Button^  BotaoOpcaoDeResposta2;
	private: System::Windows::Forms::Button^  BotaoOpcaoDeResposta3;
	private: System::Windows::Forms::Button^  BotaoOpcaoDeResposta4;
	private: System::Windows::Forms::Button^  BotaoOpcaoDeResposta5;
	private: System::Windows::Forms::Timer^	TempoIntervaloResposta;
	private: System::Windows::Forms::Label^  letreiroAlgoritmo;
	private: System::Windows::Forms::Label^  LetreiroResposta2;
	private: System::Windows::Forms::Label^  LetreiroOpcao;
	private: System::Windows::Forms::Label^  LetreiroResposta1;
	private: System::Windows::Forms::Button^  BotaoReiniciar;


	private: System::ComponentModel::IContainer^  components;

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaQuestao1::typeid));
			this->BotaoOpcaoDeResposta2 = (gcnew System::Windows::Forms::Button());
			this->BotaoOpcaoDeResposta3 = (gcnew System::Windows::Forms::Button());
			this->BotaoOpcaoDeResposta4 = (gcnew System::Windows::Forms::Button());
			this->TempoIntervaloResposta = (gcnew System::Windows::Forms::Timer(this->components));
			this->BotaoOpcaoDeResposta5 = (gcnew System::Windows::Forms::Button());
			this->BotaoOpcaoDeResposta1 = (gcnew System::Windows::Forms::Button());
			this->letreiroAlgoritmo = (gcnew System::Windows::Forms::Label());
			this->LetreiroResposta2 = (gcnew System::Windows::Forms::Label());
			this->LetreiroOpcao = (gcnew System::Windows::Forms::Label());
			this->LetreiroResposta1 = (gcnew System::Windows::Forms::Label());
			this->BotaoReiniciar = (gcnew System::Windows::Forms::Button());
			this->letreiroEnunciado = (gcnew System::Windows::Forms::Label());
			this->letreiroLinhaTracada = (gcnew System::Windows::Forms::Label());
			this->BotaoSair = (gcnew System::Windows::Forms::Button());
			this->ImagemCorreto = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemErrado = (gcnew System::Windows::Forms::PictureBox());
			this->BotaoAvancar = (gcnew System::Windows::Forms::Button());
			this->BotaoTestar = (gcnew System::Windows::Forms::Button());
			this->LetreiroTempoTotal = (gcnew System::Windows::Forms::Label());
			this->TempoContadorTotal = (gcnew System::Windows::Forms::Timer(this->components));
			this->ImagemBotaoCinza = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemBotaoAzul = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemBotaoVermelho = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemBotaoVerde = (gcnew System::Windows::Forms::PictureBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->ImagemAjuda1 = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemAjuda2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemCorreto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemErrado))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoCinza))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoAzul))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVermelho))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVerde))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemAjuda1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemAjuda2))->BeginInit();
			this->SuspendLayout();
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
			this->BotaoOpcaoDeResposta2->TabIndex = 1;
			this->BotaoOpcaoDeResposta2->Text = L"Caracter";
			this->BotaoOpcaoDeResposta2->UseCompatibleTextRendering = true;
			this->BotaoOpcaoDeResposta2->UseVisualStyleBackColor = false;
			this->BotaoOpcaoDeResposta2->Click += gcnew System::EventHandler(this, &TelaQuestao1::BotaoOpcaoDeResposta2_Click);
			this->BotaoOpcaoDeResposta2->MouseLeave += gcnew System::EventHandler(this, &TelaQuestao1::BotaoOpcaoDeResposta2_MouseLeave);
			this->BotaoOpcaoDeResposta2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao1::BotaoOpcaoDeResposta2_MouseMove);
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
			this->BotaoOpcaoDeResposta3->TabIndex = 3;
			this->BotaoOpcaoDeResposta3->Text = L"leia(b)";
			this->BotaoOpcaoDeResposta3->UseCompatibleTextRendering = true;
			this->BotaoOpcaoDeResposta3->UseVisualStyleBackColor = false;
			this->BotaoOpcaoDeResposta3->Click += gcnew System::EventHandler(this, &TelaQuestao1::BotaoOpcaoDeResposta3_Click);
			this->BotaoOpcaoDeResposta3->MouseLeave += gcnew System::EventHandler(this, &TelaQuestao1::BotaoOpcaoDeResposta3_MouseLeave);
			this->BotaoOpcaoDeResposta3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao1::BotaoOpcaoDeResposta3_MouseMove);
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
			this->BotaoOpcaoDeResposta4->TabIndex = 4;
			this->BotaoOpcaoDeResposta4->Text = L"leia(x)";
			this->BotaoOpcaoDeResposta4->UseCompatibleTextRendering = true;
			this->BotaoOpcaoDeResposta4->UseVisualStyleBackColor = false;
			this->BotaoOpcaoDeResposta4->Click += gcnew System::EventHandler(this, &TelaQuestao1::BotaoOpcaoDeResposta4_Click);
			this->BotaoOpcaoDeResposta4->MouseLeave += gcnew System::EventHandler(this, &TelaQuestao1::BotaoOpcaoDeResposta4_MouseLeave);
			this->BotaoOpcaoDeResposta4->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao1::BotaoOpcaoDeResposta4_MouseMove);
			// 
			// TempoIntervaloResposta
			// 
			this->TempoIntervaloResposta->Enabled = true;
			this->TempoIntervaloResposta->Interval = 500;
			this->TempoIntervaloResposta->Tick += gcnew System::EventHandler(this, &TelaQuestao1::TimerIntervaloResposta_Tick);
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
			this->BotaoOpcaoDeResposta5->TabIndex = 5;
			this->BotaoOpcaoDeResposta5->Text = L"Literal";
			this->BotaoOpcaoDeResposta5->UseCompatibleTextRendering = true;
			this->BotaoOpcaoDeResposta5->UseVisualStyleBackColor = false;
			this->BotaoOpcaoDeResposta5->Click += gcnew System::EventHandler(this, &TelaQuestao1::BotaoOpcaoDeResposta5_Click);
			this->BotaoOpcaoDeResposta5->MouseLeave += gcnew System::EventHandler(this, &TelaQuestao1::BotaoOpcaoDeResposta5_MouseLeave);
			this->BotaoOpcaoDeResposta5->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao1::BotaoOpcaoDeResposta5_MouseMove);
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
			this->BotaoOpcaoDeResposta1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F));
			this->BotaoOpcaoDeResposta1->ForeColor = System::Drawing::Color::Black;
			this->BotaoOpcaoDeResposta1->Location = System::Drawing::Point(1091, 150);
			this->BotaoOpcaoDeResposta1->Margin = System::Windows::Forms::Padding(10);
			this->BotaoOpcaoDeResposta1->Name = L"BotaoOpcaoDeResposta1";
			this->BotaoOpcaoDeResposta1->Size = System::Drawing::Size(150, 40);
			this->BotaoOpcaoDeResposta1->TabIndex = 1;
			this->BotaoOpcaoDeResposta1->Text = L"Inteiros";
			this->BotaoOpcaoDeResposta1->UseCompatibleTextRendering = true;
			this->BotaoOpcaoDeResposta1->UseVisualStyleBackColor = false;
			this->BotaoOpcaoDeResposta1->Click += gcnew System::EventHandler(this, &TelaQuestao1::BotaoOpcaoDeResposta1_Click);
			this->BotaoOpcaoDeResposta1->MouseLeave += gcnew System::EventHandler(this, &TelaQuestao1::BotaoOpcaoDeResposta1_MouseLeave);
			this->BotaoOpcaoDeResposta1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao1::BotaoOpcaoDeResposta1_MouseMove);
			// 
			// letreiroAlgoritmo
			// 
			this->letreiroAlgoritmo->AutoEllipsis = true;
			this->letreiroAlgoritmo->AutoSize = true;
			this->letreiroAlgoritmo->BackColor = System::Drawing::Color::White;
			this->letreiroAlgoritmo->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->letreiroAlgoritmo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->letreiroAlgoritmo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->letreiroAlgoritmo->ForeColor = System::Drawing::Color::Black;
			this->letreiroAlgoritmo->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->letreiroAlgoritmo->Location = System::Drawing::Point(19, 120);
			this->letreiroAlgoritmo->Margin = System::Windows::Forms::Padding(10);
			this->letreiroAlgoritmo->Name = L"letreiroAlgoritmo";
			this->letreiroAlgoritmo->Size = System::Drawing::Size(241, 245);
			this->letreiroAlgoritmo->TabIndex = 7;
			this->letreiroAlgoritmo->Text = L"   [início]\r\n[Tipos de Variáveis]\r\n  a,b,x:                           \r\n[Processa"
				L"mento]  \r\n  leia(a)\r\n\r\n  x<-a+b\r\n  escreva(x)\r\n  [fim]";
			this->letreiroAlgoritmo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// LetreiroResposta2
			// 
			this->LetreiroResposta2->AutoSize = true;
			this->LetreiroResposta2->BackColor = System::Drawing::Color::White;
			this->LetreiroResposta2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LetreiroResposta2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->LetreiroResposta2->ForeColor = System::Drawing::Color::Black;
			this->LetreiroResposta2->Location = System::Drawing::Point(32, 258);
			this->LetreiroResposta2->Name = L"LetreiroResposta2";
			this->LetreiroResposta2->Size = System::Drawing::Size(84, 27);
			this->LetreiroResposta2->TabIndex = 9;
			this->LetreiroResposta2->Text = L"______";
			// 
			// LetreiroOpcao
			// 
			this->LetreiroOpcao->AutoSize = true;
			this->LetreiroOpcao->Font = (gcnew System::Drawing::Font(L"Century Gothic", 30));
			this->LetreiroOpcao->ForeColor = System::Drawing::Color::Black;
			this->LetreiroOpcao->Location = System::Drawing::Point(907, 134);
			this->LetreiroOpcao->Name = L"LetreiroOpcao";
			this->LetreiroOpcao->Size = System::Drawing::Size(171, 56);
			this->LetreiroOpcao->TabIndex = 10;
			this->LetreiroOpcao->Text = L"Opção:";
			this->LetreiroOpcao->UseCompatibleTextRendering = true;
			// 
			// LetreiroResposta1
			// 
			this->LetreiroResposta1->AutoSize = true;
			this->LetreiroResposta1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->LetreiroResposta1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LetreiroResposta1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->LetreiroResposta1->ForeColor = System::Drawing::Color::Black;
			this->LetreiroResposta1->Location = System::Drawing::Point(90, 176);
			this->LetreiroResposta1->Name = L"LetreiroResposta1";
			this->LetreiroResposta1->Size = System::Drawing::Size(84, 27);
			this->LetreiroResposta1->TabIndex = 11;
			this->LetreiroResposta1->Text = L"______";
			// 
			// BotaoReiniciar
			// 
			this->BotaoReiniciar->BackColor = System::Drawing::Color::Transparent;
			this->BotaoReiniciar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoReiniciar.BackgroundImage")));
			this->BotaoReiniciar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotaoReiniciar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoReiniciar->FlatAppearance->BorderSize = 0;
			this->BotaoReiniciar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BotaoReiniciar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BotaoReiniciar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoReiniciar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 30));
			this->BotaoReiniciar->ForeColor = System::Drawing::Color::Black;
			this->BotaoReiniciar->Location = System::Drawing::Point(472, 524);
			this->BotaoReiniciar->Name = L"BotaoReiniciar";
			this->BotaoReiniciar->Size = System::Drawing::Size(205, 54);
			this->BotaoReiniciar->TabIndex = 12;
			this->BotaoReiniciar->Text = L"Reiniciar";
			this->BotaoReiniciar->UseCompatibleTextRendering = true;
			this->BotaoReiniciar->UseVisualStyleBackColor = false;
			this->BotaoReiniciar->Visible = false;
			this->BotaoReiniciar->Click += gcnew System::EventHandler(this, &TelaQuestao1::BotaoReiniciar_Click);
			this->BotaoReiniciar->MouseLeave += gcnew System::EventHandler(this, &TelaQuestao1::BotaoReiniciar_MouseLeave);
			this->BotaoReiniciar->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao1::BotaoReiniciar_MouseMove);
			// 
			// letreiroEnunciado
			// 
			this->letreiroEnunciado->AutoSize = true;
			this->letreiroEnunciado->BackColor = System::Drawing::Color::Transparent;
			this->letreiroEnunciado->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->letreiroEnunciado->Font = (gcnew System::Drawing::Font(L"Century Gothic", 17));
			this->letreiroEnunciado->ForeColor = System::Drawing::Color::Black;
			this->letreiroEnunciado->Location = System::Drawing::Point(12, 9);
			this->letreiroEnunciado->Name = L"letreiroEnunciado";
			this->letreiroEnunciado->Size = System::Drawing::Size(869, 62);
			this->letreiroEnunciado->TabIndex = 13;
			this->letreiroEnunciado->Text = L"Leia 2 valores inteiros e armazene-os nas variáveis A e B. \r\nEfetue a soma de A e"
				L" B atribuindo o seu resultado na variável X. Escreva X \r\n";
			this->letreiroEnunciado->UseCompatibleTextRendering = true;
			// 
			// letreiroLinhaTracada
			// 
			this->letreiroLinhaTracada->AutoSize = true;
			this->letreiroLinhaTracada->ForeColor = System::Drawing::Color::Black;
			this->letreiroLinhaTracada->Location = System::Drawing::Point(-18, 97);
			this->letreiroLinhaTracada->Name = L"letreiroLinhaTracada";
			this->letreiroLinhaTracada->Size = System::Drawing::Size(1763, 13);
			this->letreiroLinhaTracada->TabIndex = 14;
			this->letreiroLinhaTracada->Text = resources->GetString(L"letreiroLinhaTracada.Text");
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
			this->BotaoSair->ForeColor = System::Drawing::Color::Black;
			this->BotaoSair->Location = System::Drawing::Point(19, 588);
			this->BotaoSair->Margin = System::Windows::Forms::Padding(10);
			this->BotaoSair->Name = L"BotaoSair";
			this->BotaoSair->Size = System::Drawing::Size(339, 50);
			this->BotaoSair->TabIndex = 15;
			this->BotaoSair->Text = L"Menu Principal";
			this->BotaoSair->UseCompatibleTextRendering = true;
			this->BotaoSair->UseVisualStyleBackColor = false;
			this->BotaoSair->Click += gcnew System::EventHandler(this, &TelaQuestao1::BotaoSair_Click);
			this->BotaoSair->MouseLeave += gcnew System::EventHandler(this, &TelaQuestao1::BotaoSair_MouseLeave);
			this->BotaoSair->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao1::BotaoSair_MouseMove);
			// 
			// ImagemCorreto
			// 
			this->ImagemCorreto->BackColor = System::Drawing::Color::Transparent;
			this->ImagemCorreto->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemCorreto.BackgroundImage")));
			this->ImagemCorreto->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ImagemCorreto->Location = System::Drawing::Point(683, 525);
			this->ImagemCorreto->Name = L"ImagemCorreto";
			this->ImagemCorreto->Size = System::Drawing::Size(81, 62);
			this->ImagemCorreto->TabIndex = 16;
			this->ImagemCorreto->TabStop = false;
			this->ImagemCorreto->Visible = false;
			// 
			// ImagemErrado
			// 
			this->ImagemErrado->BackColor = System::Drawing::Color::Transparent;
			this->ImagemErrado->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ImagemErrado->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemErrado.Image")));
			this->ImagemErrado->Location = System::Drawing::Point(683, 525);
			this->ImagemErrado->Name = L"ImagemErrado";
			this->ImagemErrado->Size = System::Drawing::Size(81, 62);
			this->ImagemErrado->TabIndex = 17;
			this->ImagemErrado->TabStop = false;
			this->ImagemErrado->Visible = false;
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
			this->BotaoAvancar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 27.5F));
			this->BotaoAvancar->ForeColor = System::Drawing::Color::Black;
			this->BotaoAvancar->Location = System::Drawing::Point(472, 524);
			this->BotaoAvancar->Name = L"BotaoAvancar";
			this->BotaoAvancar->Size = System::Drawing::Size(205, 54);
			this->BotaoAvancar->TabIndex = 18;
			this->BotaoAvancar->Text = L"Avançar";
			this->BotaoAvancar->UseCompatibleTextRendering = true;
			this->BotaoAvancar->UseVisualStyleBackColor = false;
			this->BotaoAvancar->Visible = false;
			this->BotaoAvancar->Click += gcnew System::EventHandler(this, &TelaQuestao1::BotaoAvancar_Click);
			this->BotaoAvancar->MouseLeave += gcnew System::EventHandler(this, &TelaQuestao1::BotaoAvancar_MouseLeave);
			this->BotaoAvancar->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao1::BotaoAvancar_MouseMove);
			// 
			// BotaoTestar
			// 
			this->BotaoTestar->BackColor = System::Drawing::Color::Transparent;
			this->BotaoTestar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoTestar.BackgroundImage")));
			this->BotaoTestar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->BotaoTestar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoTestar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->BotaoTestar->FlatAppearance->BorderSize = 0;
			this->BotaoTestar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BotaoTestar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BotaoTestar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoTestar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 60.5F));
			this->BotaoTestar->ForeColor = System::Drawing::Color::Black;
			this->BotaoTestar->Location = System::Drawing::Point(483, 290);
			this->BotaoTestar->Name = L"BotaoTestar";
			this->BotaoTestar->Size = System::Drawing::Size(314, 80);
			this->BotaoTestar->TabIndex = 19;
			this->BotaoTestar->Text = L"Testar";
			this->BotaoTestar->UseCompatibleTextRendering = true;
			this->BotaoTestar->UseVisualStyleBackColor = false;
			this->BotaoTestar->Visible = false;
			this->BotaoTestar->Click += gcnew System::EventHandler(this, &TelaQuestao1::botaoTestar_Click_1);
			this->BotaoTestar->MouseLeave += gcnew System::EventHandler(this, &TelaQuestao1::BotaoTestar_MouseLeave);
			this->BotaoTestar->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao1::BotaoTestar_MouseMove);
			// 
			// LetreiroTempoTotal
			// 
			this->LetreiroTempoTotal->AutoSize = true;
			this->LetreiroTempoTotal->BackColor = System::Drawing::Color::Transparent;
			this->LetreiroTempoTotal->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20));
			this->LetreiroTempoTotal->ForeColor = System::Drawing::Color::Black;
			this->LetreiroTempoTotal->Location = System::Drawing::Point(603, 130);
			this->LetreiroTempoTotal->Name = L"LetreiroTempoTotal";
			this->LetreiroTempoTotal->Size = System::Drawing::Size(78, 39);
			this->LetreiroTempoTotal->TabIndex = 0;
			this->LetreiroTempoTotal->Text = L"00:00";
			this->LetreiroTempoTotal->UseCompatibleTextRendering = true;
			// 
			// TempoContadorTotal
			// 
			this->TempoContadorTotal->Interval = 1000;
			this->TempoContadorTotal->Tick += gcnew System::EventHandler(this, &TelaQuestao1::TempoContadorTotal_Tick);
			// 
			// ImagemBotaoCinza
			// 
			this->ImagemBotaoCinza->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoCinza.Image")));
			this->ImagemBotaoCinza->Location = System::Drawing::Point(425, 140);
			this->ImagemBotaoCinza->Name = L"ImagemBotaoCinza";
			this->ImagemBotaoCinza->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoCinza->TabIndex = 23;
			this->ImagemBotaoCinza->TabStop = false;
			this->ImagemBotaoCinza->Visible = false;
			// 
			// ImagemBotaoAzul
			// 
			this->ImagemBotaoAzul->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoAzul.Image")));
			this->ImagemBotaoAzul->Location = System::Drawing::Point(409, 140);
			this->ImagemBotaoAzul->Name = L"ImagemBotaoAzul";
			this->ImagemBotaoAzul->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoAzul->TabIndex = 22;
			this->ImagemBotaoAzul->TabStop = false;
			this->ImagemBotaoAzul->Visible = false;
			// 
			// ImagemBotaoVermelho
			// 
			this->ImagemBotaoVermelho->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoVermelho.Image")));
			this->ImagemBotaoVermelho->Location = System::Drawing::Point(393, 140);
			this->ImagemBotaoVermelho->Name = L"ImagemBotaoVermelho";
			this->ImagemBotaoVermelho->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoVermelho->TabIndex = 21;
			this->ImagemBotaoVermelho->TabStop = false;
			this->ImagemBotaoVermelho->Visible = false;
			// 
			// ImagemBotaoVerde
			// 
			this->ImagemBotaoVerde->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoVerde.Image")));
			this->ImagemBotaoVerde->Location = System::Drawing::Point(377, 140);
			this->ImagemBotaoVerde->Name = L"ImagemBotaoVerde";
			this->ImagemBotaoVerde->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoVerde->TabIndex = 20;
			this->ImagemBotaoVerde->TabStop = false;
			this->ImagemBotaoVerde->Visible = false;
			// 
			// ImagemAjuda1
			// 
			this->ImagemAjuda1->Cursor = System::Windows::Forms::Cursors::Help;
			this->ImagemAjuda1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemAjuda1.Image")));
			this->ImagemAjuda1->Location = System::Drawing::Point(201, 178);
			this->ImagemAjuda1->Name = L"ImagemAjuda1";
			this->ImagemAjuda1->Size = System::Drawing::Size(25, 25);
			this->ImagemAjuda1->TabIndex = 24;
			this->ImagemAjuda1->TabStop = false;
			this->toolTip1->SetToolTip(this->ImagemAjuda1, L"Escolha a opção ao lado que representa o tipo de variável que o enunciado descrev"
				L"e.");
			// 
			// ImagemAjuda2
			// 
			this->ImagemAjuda2->Cursor = System::Windows::Forms::Cursors::Help;
			this->ImagemAjuda2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemAjuda2.Image")));
			this->ImagemAjuda2->Location = System::Drawing::Point(137, 260);
			this->ImagemAjuda2->Name = L"ImagemAjuda2";
			this->ImagemAjuda2->Size = System::Drawing::Size(25, 25);
			this->ImagemAjuda2->TabIndex = 25;
			this->ImagemAjuda2->TabStop = false;
			this->toolTip1->SetToolTip(this->ImagemAjuda2, L"Escolha a opção ao lado que representa o comando de entrada que falta.");
			// 
			// TelaQuestao1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1260, 657);
			this->Controls->Add(this->ImagemAjuda2);
			this->Controls->Add(this->ImagemAjuda1);
			this->Controls->Add(this->ImagemBotaoCinza);
			this->Controls->Add(this->ImagemBotaoAzul);
			this->Controls->Add(this->ImagemBotaoVermelho);
			this->Controls->Add(this->ImagemBotaoVerde);
			this->Controls->Add(this->LetreiroTempoTotal);
			this->Controls->Add(this->BotaoTestar);
			this->Controls->Add(this->BotaoAvancar);
			this->Controls->Add(this->ImagemErrado);
			this->Controls->Add(this->ImagemCorreto);
			this->Controls->Add(this->BotaoSair);
			this->Controls->Add(this->letreiroLinhaTracada);
			this->Controls->Add(this->letreiroEnunciado);
			this->Controls->Add(this->BotaoReiniciar);
			this->Controls->Add(this->LetreiroResposta1);
			this->Controls->Add(this->LetreiroOpcao);
			this->Controls->Add(this->LetreiroResposta2);
			this->Controls->Add(this->letreiroAlgoritmo);
			this->Controls->Add(this->BotaoOpcaoDeResposta5);
			this->Controls->Add(this->BotaoOpcaoDeResposta4);
			this->Controls->Add(this->BotaoOpcaoDeResposta3);
			this->Controls->Add(this->BotaoOpcaoDeResposta1);
			this->Controls->Add(this->BotaoOpcaoDeResposta2);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"TelaQuestao1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Alg+";
			this->TransparencyKey = System::Drawing::Color::DarkRed;
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TelaQuestao1::TelaQuestao1_FormClosed);
			this->Load += gcnew System::EventHandler(this, &TelaQuestao1::TelaQuestao1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemCorreto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemErrado))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoCinza))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoAzul))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVermelho))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVerde))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemAjuda1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemAjuda2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	
	private: System::Void BotaoOpcaoDeResposta1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		executarAoClicarBotaoResposta1();
	}

private: System::Void BotaoOpcaoDeResposta2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		executarAoClicarBotaoResposta2();
	}
private: System::Void BotaoOpcaoDeResposta3_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		executarAoClicarBotaoResposta3();
	}
private: System::Void BotaoOpcaoDeResposta4_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		executarAoClicarBotaoResposta4();
	}
private: System::Void BotaoOpcaoDeResposta5_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		executarAoClicarBotaoResposta5();
	}
private: System::Void botaoTestar_Click_1(System::Object^  sender, System::EventArgs^  e) 
	{			
		executarAoClicarBotaoTestar();
	}

private: System::Void BotaoReiniciar_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		 executarAoClicarBotaoReiniciar();
	}
 private: System::Void TimerIntervaloResposta_Tick(System::Object^  sender, System::EventArgs^  e)
	{
		piscarRespostaASerRespondida();
	}
private: System::Void BotaoSair_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		 executarAoClicarBotaoSair();
	}

private: System::Void BotaoAvancar_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		 executarAoClicarBotaoAvancar();
	}
private: System::Void TempoContadorTotal_Tick(System::Object^  sender, System::EventArgs^  e) 
	{
		 aumentarTempoTotal();
	}
private: System::Void TelaQuestao1_Load(System::Object^  sender, System::EventArgs^  e) {
		 executarAoCarregarATela();
}
private: System::Void TelaQuestao1_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 fecharJogo();
}
private: System::Void BotaoOpcaoDeResposta1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoOpcaoDeResposta1, ImagemBotaoAzul);
}
private: System::Void BotaoOpcaoDeResposta2_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoOpcaoDeResposta2, ImagemBotaoAzul);
}
private: System::Void BotaoOpcaoDeResposta3_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoOpcaoDeResposta3, ImagemBotaoAzul);
}
private: System::Void BotaoOpcaoDeResposta4_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoOpcaoDeResposta4, ImagemBotaoAzul);
}
private: System::Void BotaoOpcaoDeResposta5_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoOpcaoDeResposta5, ImagemBotaoAzul);
}
private: System::Void BotaoSair_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoSair, ImagemBotaoVermelho);
}
private: System::Void BotaoAvancar_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoAvancar, ImagemBotaoVerde);
}
private: System::Void BotaoReiniciar_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoReiniciar, ImagemBotaoVermelho);
}
private: System::Void BotaoTestar_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoTestar, ImagemBotaoAzul);
}
private: System::Void BotaoOpcaoDeResposta1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoOpcaoDeResposta1, ImagemBotaoCinza);
}
private: System::Void BotaoOpcaoDeResposta2_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoOpcaoDeResposta2, ImagemBotaoCinza);
}
private: System::Void BotaoOpcaoDeResposta3_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoOpcaoDeResposta3, ImagemBotaoCinza);
}
private: System::Void BotaoOpcaoDeResposta4_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoOpcaoDeResposta4, ImagemBotaoCinza);
}
private: System::Void BotaoOpcaoDeResposta5_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoOpcaoDeResposta5, ImagemBotaoCinza);
}
private: System::Void BotaoReiniciar_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoReiniciar, ImagemBotaoCinza);
}
private: System::Void BotaoAvancar_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoAvancar, ImagemBotaoCinza);
}
private: System::Void BotaoTestar_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoTestar, ImagemBotaoCinza);
}
private: System::Void BotaoSair_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoSair, ImagemBotaoCinza);
}
};
}
