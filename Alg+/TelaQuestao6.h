#pragma once
#include "AlteradorPropriedadeBotao.h"
#include "AlteradorPropriedadeImagem.h"
#include "AlteradorPropriedadeLetreiro.h"
#include "AlteradorPropriedadeTempo.h"
#include "AlteradorPropriedadeCaixaDeTexto.h"
namespace Alg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para TelaQuestao6
	/// </summary>
	public ref class TelaQuestao6 : public System::Windows::Forms::Form
	{
	private:int Contador;
			int TempoNaFase;
			int QuantidadeResetou;
			bool OpcaoContinuar;
			String ^ AcrecimoDeUnderlines = "";
	private: System::Windows::Forms::Timer^  TempoIntervaloResposta;
	private: System::Windows::Forms::Timer^  TempoContadorTotal;
	private: System::Windows::Forms::Label^  LetreiroCompletar2;
	private: System::Windows::Forms::TextBox^  CaixaDeTextoResposta9;
	private: System::Windows::Forms::PictureBox^  ImagemBotaoCinza;
	private: System::Windows::Forms::PictureBox^  ImagemBotaoAzul;
	private: System::Windows::Forms::PictureBox^  ImagemBotaoVermelho;
	private: System::Windows::Forms::PictureBox^  ImagemBotaoVerde;
	private: System::Windows::Forms::Button^  BotaoMenuPrincipal;

			String ^ RespostaNaoPreenchida = "______";

	private:
		void atribuirRespostaNaoPreenchidaParaAResposta(Label^);
		void atribuirRespostaVaziaACaixaDeTexto(TextBox^);
		void atribuirAcrecimoDeUnderline(Label^);
		void atribuirTextoParaAResposta(Label^, String^);
		void mudarVisiabilidadeDaImagemParaInvisivel(PictureBox^);
		void mudarVisiabilidadeDaImagemParaVisivel(PictureBox^);
		void mudarVisiabilidadeDoBotaoParaInvisivel(Button^);
		void mudarVisiabilidadeDoBotaoParaVisivel(Button^);
		void alterarTextoDoBotao(Button^, String^);
		void ativarTempo(Timer^);
		void desativarTempo(Timer^);
		void ativarCaixaDeTexto(TextBox^);
		void desativarCaixaDeTexto(TextBox^);
		void adicionarUnderlineEGerenciala();
		void mudarCorDeFundoCaixaDeTextoParaAmarelo(TextBox^);
		void mudarCorDeFundoCaixaDeTextoParaBranco(TextBox^);
		void ficarAlternandoCorDeFundoCaixaDeTexto(TextBox^);
		void mudarBordaCaixaDeTextoParaNenhuma(TextBox^);
		void mudarBordaCaixaDeTextoParaFixada3d(TextBox^);
		void mudarCorDeFundoLetreiroParaBranco(Label^);
		void mudarCorDeFundoLetreiroParaAmarelo(Label^);
		void mudarCursorCaixaDeTextoParaMao(TextBox^);
		void mudarCursorCaixaDeTextoParaNao(TextBox^);
		void mudarLocalizacaoCaixaDeTexto(TextBox^, int, int);
		void bloquearOpcoesDeRespostas();
		void desbloquearOpcoesDeRespostas();
		void verificarSeAsRespostasEstaoCorretas();
		void mudarVisiablidadeDeTodosBotoesOpcoesDeRespostasParaVerdadeiro();
		void piscarRespostaASerRespondida();
		void aumentarTempoTotal();
		void executarAoClicarBotaoResposta1();
		void executarAoClicarBotaoResposta2();
		void executarAoClicarBotaoResposta3();
		void executarAoClicarBotaoResposta4();
		void executarAoClicarBotaoResposta5();
		void executarAoClicarBotaoReiniciar();
		void executarAoApertarEnterNaCaixaDeTextoResposta1();
		void executarAoApertarEnterNaCaixaDeTextoResposta2();
		void executarAoApertarEnterNaCaixaDeTextoResposta4();
		void executarAoApertarEnterNaCaixaDeTextoResposta7();
		void executarAoApertarEnterNaCaixaDeTextoResposta9();
		void executarAoApertarEnterNaCaixaDeTextoResposta10();
		void executarAoClicarNaCaixaDeTextoResposta1();
		void executarAoClicarNaCaixaDeTextoResposta2();
		void executarAoClicarNaCaixaDeTextoResposta4();
		void executarAoClicarNaCaixaDeTextoResposta7();
		void executarAoClicarNaCaixaDeTextoResposta9();
		void executarAoClicarNaCaixaDeTextoResposta10();

	public:
		void setTempoAnterior(int);
		int getTempoNaFase();
		int getQuantidadeQueResetouAFase();
		int getOpcaoIraContinuar();
		void fecharJogo();
	public:
		TelaQuestao6(void)
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
		~TelaQuestao6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  letreiroAlgoritmo;
	protected:
	private: System::Windows::Forms::Label^  letreiroLinhaTracada;
	private: System::Windows::Forms::Label^  letreiroEnunciado;
	private: System::Windows::Forms::TextBox^  CaixaDeTextoResposta1;
	private: System::Windows::Forms::TextBox^  CaixaDeTextoResposta2;
	private: System::Windows::Forms::TextBox^  CaixaDeTextoResposta4;



	private: System::Windows::Forms::Label^  LetreiroResposta3;
	private: System::Windows::Forms::Label^  LetreiroResposta6;



	private: System::Windows::Forms::Label^  LetreiroResposta5;
	private: System::Windows::Forms::Label^  LetreiroCompletar1;

private: System::Windows::Forms::Label^  LetreiroResposta52;







private: System::Windows::Forms::Label^  LetreiroResposta62;




	private: System::Windows::Forms::Label^  LetreiroResposta8;

	private: System::Windows::Forms::TextBox^  CaixaDeTextoResposta7;
	private: System::Windows::Forms::TextBox^  CaixaDeTextoResposta10;


	private: System::Windows::Forms::Button^  BotaoTestar;
	private: System::Windows::Forms::Button^  BotaoAvancar;
	private: System::Windows::Forms::PictureBox^  ImagemErrado;
	private: System::Windows::Forms::PictureBox^  ImagemCorreto;
	private: System::Windows::Forms::Button^  BotaoReiniciar;
	private: System::Windows::Forms::Button^  BotaoOpcaoDeResposta5;
	private: System::Windows::Forms::Button^  BotaoOpcaoDeResposta4;
	private: System::Windows::Forms::Button^  BotaoOpcaoDeResposta3;
	private: System::Windows::Forms::Button^  BotaoOpcaoDeResposta2;
	private: System::Windows::Forms::Label^  LetreiroOpcao;
	private: System::Windows::Forms::Button^  BotaoOpcaoDeResposta1;
	private: System::Windows::Forms::Label^  LetreiroTempoTotal;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaQuestao6::typeid));
			this->letreiroAlgoritmo = (gcnew System::Windows::Forms::Label());
			this->letreiroLinhaTracada = (gcnew System::Windows::Forms::Label());
			this->letreiroEnunciado = (gcnew System::Windows::Forms::Label());
			this->CaixaDeTextoResposta1 = (gcnew System::Windows::Forms::TextBox());
			this->CaixaDeTextoResposta2 = (gcnew System::Windows::Forms::TextBox());
			this->CaixaDeTextoResposta4 = (gcnew System::Windows::Forms::TextBox());
			this->LetreiroResposta3 = (gcnew System::Windows::Forms::Label());
			this->LetreiroResposta6 = (gcnew System::Windows::Forms::Label());
			this->LetreiroResposta5 = (gcnew System::Windows::Forms::Label());
			this->LetreiroCompletar1 = (gcnew System::Windows::Forms::Label());
			this->LetreiroResposta52 = (gcnew System::Windows::Forms::Label());
			this->LetreiroResposta62 = (gcnew System::Windows::Forms::Label());
			this->LetreiroResposta8 = (gcnew System::Windows::Forms::Label());
			this->CaixaDeTextoResposta7 = (gcnew System::Windows::Forms::TextBox());
			this->CaixaDeTextoResposta10 = (gcnew System::Windows::Forms::TextBox());
			this->BotaoTestar = (gcnew System::Windows::Forms::Button());
			this->BotaoAvancar = (gcnew System::Windows::Forms::Button());
			this->ImagemErrado = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemCorreto = (gcnew System::Windows::Forms::PictureBox());
			this->BotaoReiniciar = (gcnew System::Windows::Forms::Button());
			this->BotaoOpcaoDeResposta5 = (gcnew System::Windows::Forms::Button());
			this->BotaoOpcaoDeResposta4 = (gcnew System::Windows::Forms::Button());
			this->BotaoOpcaoDeResposta3 = (gcnew System::Windows::Forms::Button());
			this->BotaoOpcaoDeResposta2 = (gcnew System::Windows::Forms::Button());
			this->LetreiroOpcao = (gcnew System::Windows::Forms::Label());
			this->BotaoOpcaoDeResposta1 = (gcnew System::Windows::Forms::Button());
			this->LetreiroTempoTotal = (gcnew System::Windows::Forms::Label());
			this->TempoIntervaloResposta = (gcnew System::Windows::Forms::Timer(this->components));
			this->TempoContadorTotal = (gcnew System::Windows::Forms::Timer(this->components));
			this->LetreiroCompletar2 = (gcnew System::Windows::Forms::Label());
			this->CaixaDeTextoResposta9 = (gcnew System::Windows::Forms::TextBox());
			this->ImagemBotaoCinza = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemBotaoAzul = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemBotaoVermelho = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemBotaoVerde = (gcnew System::Windows::Forms::PictureBox());
			this->BotaoMenuPrincipal = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemErrado))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemCorreto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoCinza))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoAzul))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVermelho))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVerde))->BeginInit();
			this->SuspendLayout();
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
			this->letreiroAlgoritmo->Location = System::Drawing::Point(12, 138);
			this->letreiroAlgoritmo->Margin = System::Windows::Forms::Padding(10);
			this->letreiroAlgoritmo->Name = L"letreiroAlgoritmo";
			this->letreiroAlgoritmo->Size = System::Drawing::Size(425, 461);
			this->letreiroAlgoritmo->TabIndex = 44;
			this->letreiroAlgoritmo->Text = resources->GetString(L"letreiroAlgoritmo.Text");
			this->letreiroAlgoritmo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// letreiroLinhaTracada
			// 
			this->letreiroLinhaTracada->AutoSize = true;
			this->letreiroLinhaTracada->ForeColor = System::Drawing::Color::Black;
			this->letreiroLinhaTracada->Location = System::Drawing::Point(-29, 115);
			this->letreiroLinhaTracada->Name = L"letreiroLinhaTracada";
			this->letreiroLinhaTracada->Size = System::Drawing::Size(1324, 13);
			this->letreiroLinhaTracada->TabIndex = 43;
			this->letreiroLinhaTracada->Text = resources->GetString(L"letreiroLinhaTracada.Text");
			// 
			// letreiroEnunciado
			// 
			this->letreiroEnunciado->AutoSize = true;
			this->letreiroEnunciado->BackColor = System::Drawing::Color::Transparent;
			this->letreiroEnunciado->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->letreiroEnunciado->Font = (gcnew System::Drawing::Font(L"Century Gothic", 23));
			this->letreiroEnunciado->ForeColor = System::Drawing::Color::Black;
			this->letreiroEnunciado->Location = System::Drawing::Point(12, -5);
			this->letreiroEnunciado->Name = L"letreiroEnunciado";
			this->letreiroEnunciado->Size = System::Drawing::Size(1205, 120);
			this->letreiroEnunciado->TabIndex = 42;
			this->letreiroEnunciado->Text = L"Complete o algoritmo a seguir que dentre os numeros digitados apresente o\r\nmaior "
				L"deles.  A quantidade de numeros será indefinida,até que digite um\r\nnumero negati"
				L"vo.";
			this->letreiroEnunciado->UseCompatibleTextRendering = true;
			// 
			// CaixaDeTextoResposta1
			// 
			this->CaixaDeTextoResposta1->BackColor = System::Drawing::Color::White;
			this->CaixaDeTextoResposta1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 17));
			this->CaixaDeTextoResposta1->ForeColor = System::Drawing::Color::Black;
			this->CaixaDeTextoResposta1->Location = System::Drawing::Point(29, 190);
			this->CaixaDeTextoResposta1->MaxLength = 12;
			this->CaixaDeTextoResposta1->Name = L"CaixaDeTextoResposta1";
			this->CaixaDeTextoResposta1->Size = System::Drawing::Size(130, 34);
			this->CaixaDeTextoResposta1->TabIndex = 72;
			this->CaixaDeTextoResposta1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao6::CaixaDeTextoResposta1_MouseClick);
			this->CaixaDeTextoResposta1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &TelaQuestao6::CaixaDeTextoResposta1_KeyPress);
			// 
			// CaixaDeTextoResposta2
			// 
			this->CaixaDeTextoResposta2->BackColor = System::Drawing::Color::White;
			this->CaixaDeTextoResposta2->Enabled = false;
			this->CaixaDeTextoResposta2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 17));
			this->CaixaDeTextoResposta2->ForeColor = System::Drawing::Color::Black;
			this->CaixaDeTextoResposta2->Location = System::Drawing::Point(171, 190);
			this->CaixaDeTextoResposta2->MaxLength = 12;
			this->CaixaDeTextoResposta2->Name = L"CaixaDeTextoResposta2";
			this->CaixaDeTextoResposta2->Size = System::Drawing::Size(130, 34);
			this->CaixaDeTextoResposta2->TabIndex = 72;
			this->CaixaDeTextoResposta2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao6::CaixaDeTextoResposta2_MouseClick);
			this->CaixaDeTextoResposta2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &TelaQuestao6::CaixaDeTextoResposta2_KeyPress);
			// 
			// CaixaDeTextoResposta4
			// 
			this->CaixaDeTextoResposta4->BackColor = System::Drawing::Color::White;
			this->CaixaDeTextoResposta4->Enabled = false;
			this->CaixaDeTextoResposta4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 17));
			this->CaixaDeTextoResposta4->ForeColor = System::Drawing::Color::Black;
			this->CaixaDeTextoResposta4->Location = System::Drawing::Point(29, 317);
			this->CaixaDeTextoResposta4->MaxLength = 12;
			this->CaixaDeTextoResposta4->Name = L"CaixaDeTextoResposta4";
			this->CaixaDeTextoResposta4->Size = System::Drawing::Size(182, 34);
			this->CaixaDeTextoResposta4->TabIndex = 74;
			this->CaixaDeTextoResposta4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao6::CaixaDeTextoResposta4_MouseClick);
			this->CaixaDeTextoResposta4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &TelaQuestao6::CaixaDeTextoResposta4_KeyPress);
			// 
			// LetreiroResposta3
			// 
			this->LetreiroResposta3->AutoSize = true;
			this->LetreiroResposta3->BackColor = System::Drawing::Color::White;
			this->LetreiroResposta3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LetreiroResposta3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->LetreiroResposta3->ForeColor = System::Drawing::Color::Black;
			this->LetreiroResposta3->Location = System::Drawing::Point(29, 274);
			this->LetreiroResposta3->Name = L"LetreiroResposta3";
			this->LetreiroResposta3->Size = System::Drawing::Size(84, 27);
			this->LetreiroResposta3->TabIndex = 72;
			this->LetreiroResposta3->Text = L"______";
			this->LetreiroResposta3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// LetreiroResposta6
			// 
			this->LetreiroResposta6->AutoSize = true;
			this->LetreiroResposta6->BackColor = System::Drawing::Color::White;
			this->LetreiroResposta6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LetreiroResposta6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->LetreiroResposta6->ForeColor = System::Drawing::Color::Black;
			this->LetreiroResposta6->Location = System::Drawing::Point(75, 383);
			this->LetreiroResposta6->Name = L"LetreiroResposta6";
			this->LetreiroResposta6->Size = System::Drawing::Size(84, 27);
			this->LetreiroResposta6->TabIndex = 75;
			this->LetreiroResposta6->Text = L"______";
			this->LetreiroResposta6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// LetreiroResposta5
			// 
			this->LetreiroResposta5->AutoSize = true;
			this->LetreiroResposta5->BackColor = System::Drawing::Color::White;
			this->LetreiroResposta5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LetreiroResposta5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->LetreiroResposta5->ForeColor = System::Drawing::Color::Black;
			this->LetreiroResposta5->Location = System::Drawing::Point(29, 354);
			this->LetreiroResposta5->Name = L"LetreiroResposta5";
			this->LetreiroResposta5->Size = System::Drawing::Size(84, 27);
			this->LetreiroResposta5->TabIndex = 76;
			this->LetreiroResposta5->Text = L"______";
			this->LetreiroResposta5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// LetreiroCompletar1
			// 
			this->LetreiroCompletar1->AutoSize = true;
			this->LetreiroCompletar1->BackColor = System::Drawing::Color::White;
			this->LetreiroCompletar1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LetreiroCompletar1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->LetreiroCompletar1->ForeColor = System::Drawing::Color::Black;
			this->LetreiroCompletar1->Location = System::Drawing::Point(152, 354);
			this->LetreiroCompletar1->Name = L"LetreiroCompletar1";
			this->LetreiroCompletar1->Size = System::Drawing::Size(84, 27);
			this->LetreiroCompletar1->TabIndex = 77;
			this->LetreiroCompletar1->Text = L"______";
			this->LetreiroCompletar1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// LetreiroResposta52
			// 
			this->LetreiroResposta52->AutoSize = true;
			this->LetreiroResposta52->BackColor = System::Drawing::Color::White;
			this->LetreiroResposta52->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LetreiroResposta52->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->LetreiroResposta52->ForeColor = System::Drawing::Color::Black;
			this->LetreiroResposta52->Location = System::Drawing::Point(118, 517);
			this->LetreiroResposta52->Name = L"LetreiroResposta52";
			this->LetreiroResposta52->Size = System::Drawing::Size(84, 27);
			this->LetreiroResposta52->TabIndex = 79;
			this->LetreiroResposta52->Text = L"______";
			this->LetreiroResposta52->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// LetreiroResposta62
			// 
			this->LetreiroResposta62->AutoSize = true;
			this->LetreiroResposta62->BackColor = System::Drawing::Color::White;
			this->LetreiroResposta62->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LetreiroResposta62->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->LetreiroResposta62->ForeColor = System::Drawing::Color::Black;
			this->LetreiroResposta62->Location = System::Drawing::Point(180, 463);
			this->LetreiroResposta62->Name = L"LetreiroResposta62";
			this->LetreiroResposta62->Size = System::Drawing::Size(84, 27);
			this->LetreiroResposta62->TabIndex = 82;
			this->LetreiroResposta62->Text = L"______";
			this->LetreiroResposta62->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// LetreiroResposta8
			// 
			this->LetreiroResposta8->AutoSize = true;
			this->LetreiroResposta8->BackColor = System::Drawing::Color::White;
			this->LetreiroResposta8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LetreiroResposta8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->LetreiroResposta8->ForeColor = System::Drawing::Color::Black;
			this->LetreiroResposta8->Location = System::Drawing::Point(323, 386);
			this->LetreiroResposta8->Name = L"LetreiroResposta8";
			this->LetreiroResposta8->Size = System::Drawing::Size(84, 27);
			this->LetreiroResposta8->TabIndex = 84;
			this->LetreiroResposta8->Text = L"______";
			this->LetreiroResposta8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// CaixaDeTextoResposta7
			// 
			this->CaixaDeTextoResposta7->BackColor = System::Drawing::Color::White;
			this->CaixaDeTextoResposta7->Enabled = false;
			this->CaixaDeTextoResposta7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 17));
			this->CaixaDeTextoResposta7->ForeColor = System::Drawing::Color::Black;
			this->CaixaDeTextoResposta7->Location = System::Drawing::Point(185, 382);
			this->CaixaDeTextoResposta7->MaxLength = 12;
			this->CaixaDeTextoResposta7->Name = L"CaixaDeTextoResposta7";
			this->CaixaDeTextoResposta7->Size = System::Drawing::Size(120, 34);
			this->CaixaDeTextoResposta7->TabIndex = 85;
			this->CaixaDeTextoResposta7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao6::CaixaDeTextoResposta7_MouseClick);
			this->CaixaDeTextoResposta7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &TelaQuestao6::CaixaDeTextoResposta7_KeyPress);
			// 
			// CaixaDeTextoResposta10
			// 
			this->CaixaDeTextoResposta10->BackColor = System::Drawing::Color::White;
			this->CaixaDeTextoResposta10->Enabled = false;
			this->CaixaDeTextoResposta10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 17));
			this->CaixaDeTextoResposta10->ForeColor = System::Drawing::Color::Black;
			this->CaixaDeTextoResposta10->Location = System::Drawing::Point(287, 432);
			this->CaixaDeTextoResposta10->MaxLength = 12;
			this->CaixaDeTextoResposta10->Name = L"CaixaDeTextoResposta10";
			this->CaixaDeTextoResposta10->Size = System::Drawing::Size(130, 34);
			this->CaixaDeTextoResposta10->TabIndex = 86;
			this->CaixaDeTextoResposta10->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao6::CaixaDeTextoResposta10_MouseClick);
			this->CaixaDeTextoResposta10->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &TelaQuestao6::CaixaDeTextoResposta10_KeyPress);
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
			this->BotaoTestar->Location = System::Drawing::Point(545, 284);
			this->BotaoTestar->Name = L"BotaoTestar";
			this->BotaoTestar->Size = System::Drawing::Size(314, 83);
			this->BotaoTestar->TabIndex = 98;
			this->BotaoTestar->Text = L"Testar";
			this->BotaoTestar->UseCompatibleTextRendering = true;
			this->BotaoTestar->UseVisualStyleBackColor = false;
			this->BotaoTestar->Visible = false;
			this->BotaoTestar->Click += gcnew System::EventHandler(this, &TelaQuestao6::BotaoTestar_Click);
			this->BotaoTestar->MouseLeave += gcnew System::EventHandler(this, &TelaQuestao6::BotaoTestar_MouseLeave);
			this->BotaoTestar->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao6::BotaoTestar_MouseMove);
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
			this->BotaoAvancar->Location = System::Drawing::Point(542, 524);
			this->BotaoAvancar->Name = L"BotaoAvancar";
			this->BotaoAvancar->Size = System::Drawing::Size(215, 54);
			this->BotaoAvancar->TabIndex = 97;
			this->BotaoAvancar->Text = L"Avançar";
			this->BotaoAvancar->UseCompatibleTextRendering = true;
			this->BotaoAvancar->UseVisualStyleBackColor = false;
			this->BotaoAvancar->Visible = false;
			this->BotaoAvancar->Click += gcnew System::EventHandler(this, &TelaQuestao6::BotaoAvancar_Click);
			this->BotaoAvancar->MouseLeave += gcnew System::EventHandler(this, &TelaQuestao6::BotaoAvancar_MouseLeave);
			this->BotaoAvancar->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao6::BotaoAvancar_MouseMove);
			// 
			// ImagemErrado
			// 
			this->ImagemErrado->BackColor = System::Drawing::Color::Transparent;
			this->ImagemErrado->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ImagemErrado->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemErrado.Image")));
			this->ImagemErrado->Location = System::Drawing::Point(766, 524);
			this->ImagemErrado->Name = L"ImagemErrado";
			this->ImagemErrado->Size = System::Drawing::Size(81, 62);
			this->ImagemErrado->TabIndex = 96;
			this->ImagemErrado->TabStop = false;
			this->ImagemErrado->Visible = false;
			// 
			// ImagemCorreto
			// 
			this->ImagemCorreto->BackColor = System::Drawing::Color::Transparent;
			this->ImagemCorreto->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemCorreto.BackgroundImage")));
			this->ImagemCorreto->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ImagemCorreto->Location = System::Drawing::Point(766, 524);
			this->ImagemCorreto->Name = L"ImagemCorreto";
			this->ImagemCorreto->Size = System::Drawing::Size(81, 62);
			this->ImagemCorreto->TabIndex = 95;
			this->ImagemCorreto->TabStop = false;
			this->ImagemCorreto->Visible = false;
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
			this->BotaoReiniciar->Location = System::Drawing::Point(545, 525);
			this->BotaoReiniciar->Name = L"BotaoReiniciar";
			this->BotaoReiniciar->Size = System::Drawing::Size(212, 54);
			this->BotaoReiniciar->TabIndex = 94;
			this->BotaoReiniciar->Text = L"Reiniciar";
			this->BotaoReiniciar->UseCompatibleTextRendering = true;
			this->BotaoReiniciar->UseVisualStyleBackColor = false;
			this->BotaoReiniciar->Visible = false;
			this->BotaoReiniciar->Click += gcnew System::EventHandler(this, &TelaQuestao6::BotaoReiniciar_Click);
			this->BotaoReiniciar->MouseLeave += gcnew System::EventHandler(this, &TelaQuestao6::BotaoReiniciar_MouseLeave);
			this->BotaoReiniciar->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao6::BotaoReiniciar_MouseMove);
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
			this->BotaoOpcaoDeResposta5->Location = System::Drawing::Point(1008, 387);
			this->BotaoOpcaoDeResposta5->Margin = System::Windows::Forms::Padding(10);
			this->BotaoOpcaoDeResposta5->Name = L"BotaoOpcaoDeResposta5";
			this->BotaoOpcaoDeResposta5->Size = System::Drawing::Size(222, 40);
			this->BotaoOpcaoDeResposta5->TabIndex = 93;
			this->BotaoOpcaoDeResposta5->Text = L"Para";
			this->BotaoOpcaoDeResposta5->UseCompatibleTextRendering = true;
			this->BotaoOpcaoDeResposta5->UseVisualStyleBackColor = false;
			this->BotaoOpcaoDeResposta5->Click += gcnew System::EventHandler(this, &TelaQuestao6::BotaoOpcaoDeResposta5_Click);
			this->BotaoOpcaoDeResposta5->MouseLeave += gcnew System::EventHandler(this, &TelaQuestao6::BotaoOpcaoDeResposta5_MouseLeave);
			this->BotaoOpcaoDeResposta5->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao6::BotaoOpcaoDeResposta5_MouseMove);
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
			this->BotaoOpcaoDeResposta4->Location = System::Drawing::Point(1008, 327);
			this->BotaoOpcaoDeResposta4->Margin = System::Windows::Forms::Padding(10);
			this->BotaoOpcaoDeResposta4->Name = L"BotaoOpcaoDeResposta4";
			this->BotaoOpcaoDeResposta4->Size = System::Drawing::Size(222, 40);
			this->BotaoOpcaoDeResposta4->TabIndex = 92;
			this->BotaoOpcaoDeResposta4->Text = L"Repita";
			this->BotaoOpcaoDeResposta4->UseCompatibleTextRendering = true;
			this->BotaoOpcaoDeResposta4->UseVisualStyleBackColor = false;
			this->BotaoOpcaoDeResposta4->Click += gcnew System::EventHandler(this, &TelaQuestao6::BotaoOpcaoDeResposta4_Click);
			this->BotaoOpcaoDeResposta4->MouseLeave += gcnew System::EventHandler(this, &TelaQuestao6::BotaoOpcaoDeResposta4_MouseLeave);
			this->BotaoOpcaoDeResposta4->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao6::BotaoOpcaoDeResposta4_MouseMove);
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
			this->BotaoOpcaoDeResposta3->Location = System::Drawing::Point(1008, 267);
			this->BotaoOpcaoDeResposta3->Margin = System::Windows::Forms::Padding(10);
			this->BotaoOpcaoDeResposta3->Name = L"BotaoOpcaoDeResposta3";
			this->BotaoOpcaoDeResposta3->Size = System::Drawing::Size(222, 40);
			this->BotaoOpcaoDeResposta3->TabIndex = 91;
			this->BotaoOpcaoDeResposta3->Text = L"Enquanto";
			this->BotaoOpcaoDeResposta3->UseCompatibleTextRendering = true;
			this->BotaoOpcaoDeResposta3->UseVisualStyleBackColor = false;
			this->BotaoOpcaoDeResposta3->Click += gcnew System::EventHandler(this, &TelaQuestao6::BotaoOpcaoDeResposta3_Click);
			this->BotaoOpcaoDeResposta3->MouseLeave += gcnew System::EventHandler(this, &TelaQuestao6::BotaoOpcaoDeResposta3_MouseLeave);
			this->BotaoOpcaoDeResposta3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao6::BotaoOpcaoDeResposta3_MouseMove);
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
			this->BotaoOpcaoDeResposta2->Location = System::Drawing::Point(1008, 207);
			this->BotaoOpcaoDeResposta2->Margin = System::Windows::Forms::Padding(10);
			this->BotaoOpcaoDeResposta2->Name = L"BotaoOpcaoDeResposta2";
			this->BotaoOpcaoDeResposta2->Size = System::Drawing::Size(222, 40);
			this->BotaoOpcaoDeResposta2->TabIndex = 90;
			this->BotaoOpcaoDeResposta2->Text = L"Se";
			this->BotaoOpcaoDeResposta2->UseCompatibleTextRendering = true;
			this->BotaoOpcaoDeResposta2->UseVisualStyleBackColor = false;
			this->BotaoOpcaoDeResposta2->Click += gcnew System::EventHandler(this, &TelaQuestao6::BotaoOpcaoDeResposta2_Click);
			this->BotaoOpcaoDeResposta2->MouseLeave += gcnew System::EventHandler(this, &TelaQuestao6::BotaoOpcaoDeResposta2_MouseLeave);
			this->BotaoOpcaoDeResposta2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao6::BotaoOpcaoDeResposta2_MouseMove);
			// 
			// LetreiroOpcao
			// 
			this->LetreiroOpcao->AutoSize = true;
			this->LetreiroOpcao->Font = (gcnew System::Drawing::Font(L"Century Gothic", 30));
			this->LetreiroOpcao->ForeColor = System::Drawing::Color::Black;
			this->LetreiroOpcao->Location = System::Drawing::Point(824, 138);
			this->LetreiroOpcao->Name = L"LetreiroOpcao";
			this->LetreiroOpcao->Size = System::Drawing::Size(171, 56);
			this->LetreiroOpcao->TabIndex = 89;
			this->LetreiroOpcao->Text = L"Opção:";
			this->LetreiroOpcao->UseCompatibleTextRendering = true;
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
			this->BotaoOpcaoDeResposta1->Location = System::Drawing::Point(1008, 147);
			this->BotaoOpcaoDeResposta1->Margin = System::Windows::Forms::Padding(10);
			this->BotaoOpcaoDeResposta1->Name = L"BotaoOpcaoDeResposta1";
			this->BotaoOpcaoDeResposta1->Size = System::Drawing::Size(222, 40);
			this->BotaoOpcaoDeResposta1->TabIndex = 88;
			this->BotaoOpcaoDeResposta1->Text = L"maior";
			this->BotaoOpcaoDeResposta1->UseCompatibleTextRendering = true;
			this->BotaoOpcaoDeResposta1->UseVisualStyleBackColor = false;
			this->BotaoOpcaoDeResposta1->Click += gcnew System::EventHandler(this, &TelaQuestao6::BotaoOpcaoDeResposta1_Click);
			this->BotaoOpcaoDeResposta1->MouseLeave += gcnew System::EventHandler(this, &TelaQuestao6::BotaoOpcaoDeResposta1_MouseLeave);
			this->BotaoOpcaoDeResposta1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao6::BotaoOpcaoDeResposta1_MouseMove);
			// 
			// LetreiroTempoTotal
			// 
			this->LetreiroTempoTotal->AutoSize = true;
			this->LetreiroTempoTotal->BackColor = System::Drawing::Color::Transparent;
			this->LetreiroTempoTotal->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20));
			this->LetreiroTempoTotal->ForeColor = System::Drawing::Color::Black;
			this->LetreiroTempoTotal->Location = System::Drawing::Point(598, 132);
			this->LetreiroTempoTotal->Name = L"LetreiroTempoTotal";
			this->LetreiroTempoTotal->Size = System::Drawing::Size(78, 39);
			this->LetreiroTempoTotal->TabIndex = 87;
			this->LetreiroTempoTotal->Text = L"00:00";
			this->LetreiroTempoTotal->UseCompatibleTextRendering = true;
			// 
			// TempoIntervaloResposta
			// 
			this->TempoIntervaloResposta->Enabled = true;
			this->TempoIntervaloResposta->Interval = 500;
			this->TempoIntervaloResposta->Tick += gcnew System::EventHandler(this, &TelaQuestao6::TempoIntervaloResposta_Tick);
			// 
			// TempoContadorTotal
			// 
			this->TempoContadorTotal->Enabled = true;
			this->TempoContadorTotal->Interval = 1000;
			this->TempoContadorTotal->Tick += gcnew System::EventHandler(this, &TelaQuestao6::TempoContadorTotal_Tick);
			// 
			// LetreiroCompletar2
			// 
			this->LetreiroCompletar2->AutoSize = true;
			this->LetreiroCompletar2->BackColor = System::Drawing::Color::White;
			this->LetreiroCompletar2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LetreiroCompletar2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->LetreiroCompletar2->ForeColor = System::Drawing::Color::Black;
			this->LetreiroCompletar2->Location = System::Drawing::Point(198, 490);
			this->LetreiroCompletar2->Name = L"LetreiroCompletar2";
			this->LetreiroCompletar2->Size = System::Drawing::Size(84, 27);
			this->LetreiroCompletar2->TabIndex = 101;
			this->LetreiroCompletar2->Text = L"______";
			this->LetreiroCompletar2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// CaixaDeTextoResposta9
			// 
			this->CaixaDeTextoResposta9->BackColor = System::Drawing::Color::White;
			this->CaixaDeTextoResposta9->Enabled = false;
			this->CaixaDeTextoResposta9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 17));
			this->CaixaDeTextoResposta9->ForeColor = System::Drawing::Color::Black;
			this->CaixaDeTextoResposta9->Location = System::Drawing::Point(145, 432);
			this->CaixaDeTextoResposta9->MaxLength = 12;
			this->CaixaDeTextoResposta9->Name = L"CaixaDeTextoResposta9";
			this->CaixaDeTextoResposta9->Size = System::Drawing::Size(116, 34);
			this->CaixaDeTextoResposta9->TabIndex = 102;
			this->CaixaDeTextoResposta9->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao6::CaixaDeTextoResposta9_MouseClick);
			this->CaixaDeTextoResposta9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &TelaQuestao6::CaixaDeTextoResposta9_KeyPress);
			// 
			// ImagemBotaoCinza
			// 
			this->ImagemBotaoCinza->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoCinza.Image")));
			this->ImagemBotaoCinza->Location = System::Drawing::Point(631, 207);
			this->ImagemBotaoCinza->Name = L"ImagemBotaoCinza";
			this->ImagemBotaoCinza->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoCinza->TabIndex = 106;
			this->ImagemBotaoCinza->TabStop = false;
			this->ImagemBotaoCinza->Visible = false;
			// 
			// ImagemBotaoAzul
			// 
			this->ImagemBotaoAzul->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoAzul.Image")));
			this->ImagemBotaoAzul->Location = System::Drawing::Point(615, 207);
			this->ImagemBotaoAzul->Name = L"ImagemBotaoAzul";
			this->ImagemBotaoAzul->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoAzul->TabIndex = 105;
			this->ImagemBotaoAzul->TabStop = false;
			this->ImagemBotaoAzul->Visible = false;
			// 
			// ImagemBotaoVermelho
			// 
			this->ImagemBotaoVermelho->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoVermelho.Image")));
			this->ImagemBotaoVermelho->Location = System::Drawing::Point(599, 207);
			this->ImagemBotaoVermelho->Name = L"ImagemBotaoVermelho";
			this->ImagemBotaoVermelho->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoVermelho->TabIndex = 104;
			this->ImagemBotaoVermelho->TabStop = false;
			this->ImagemBotaoVermelho->Visible = false;
			// 
			// ImagemBotaoVerde
			// 
			this->ImagemBotaoVerde->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoVerde.Image")));
			this->ImagemBotaoVerde->Location = System::Drawing::Point(583, 207);
			this->ImagemBotaoVerde->Name = L"ImagemBotaoVerde";
			this->ImagemBotaoVerde->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoVerde->TabIndex = 103;
			this->ImagemBotaoVerde->TabStop = false;
			this->ImagemBotaoVerde->Visible = false;
			// 
			// BotaoMenuPrincipal
			// 
			this->BotaoMenuPrincipal->BackColor = System::Drawing::Color::Transparent;
			this->BotaoMenuPrincipal->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BotaoMenuPrincipal.BackgroundImage")));
			this->BotaoMenuPrincipal->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BotaoMenuPrincipal->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BotaoMenuPrincipal->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->BotaoMenuPrincipal->FlatAppearance->BorderSize = 0;
			this->BotaoMenuPrincipal->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->BotaoMenuPrincipal->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->BotaoMenuPrincipal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotaoMenuPrincipal->Font = (gcnew System::Drawing::Font(L"Century Gothic", 30));
			this->BotaoMenuPrincipal->ForeColor = System::Drawing::Color::Black;
			this->BotaoMenuPrincipal->Location = System::Drawing::Point(12, 606);
			this->BotaoMenuPrincipal->Margin = System::Windows::Forms::Padding(10);
			this->BotaoMenuPrincipal->Name = L"BotaoMenuPrincipal";
			this->BotaoMenuPrincipal->Size = System::Drawing::Size(339, 50);
			this->BotaoMenuPrincipal->TabIndex = 107;
			this->BotaoMenuPrincipal->Text = L"Menu Principal";
			this->BotaoMenuPrincipal->UseCompatibleTextRendering = true;
			this->BotaoMenuPrincipal->UseVisualStyleBackColor = false;
			this->BotaoMenuPrincipal->Click += gcnew System::EventHandler(this, &TelaQuestao6::BotaoMenuPrincipal_Click);
			this->BotaoMenuPrincipal->MouseLeave += gcnew System::EventHandler(this, &TelaQuestao6::BotaoMenuPrincipal_MouseLeave);
			this->BotaoMenuPrincipal->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao6::BotaoMenuPrincipal_MouseMove);
			// 
			// TelaQuestao6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(1264, 661);
			this->Controls->Add(this->BotaoMenuPrincipal);
			this->Controls->Add(this->ImagemBotaoCinza);
			this->Controls->Add(this->ImagemBotaoAzul);
			this->Controls->Add(this->ImagemBotaoVermelho);
			this->Controls->Add(this->ImagemBotaoVerde);
			this->Controls->Add(this->CaixaDeTextoResposta9);
			this->Controls->Add(this->LetreiroCompletar2);
			this->Controls->Add(this->BotaoTestar);
			this->Controls->Add(this->BotaoAvancar);
			this->Controls->Add(this->ImagemErrado);
			this->Controls->Add(this->ImagemCorreto);
			this->Controls->Add(this->BotaoReiniciar);
			this->Controls->Add(this->BotaoOpcaoDeResposta5);
			this->Controls->Add(this->BotaoOpcaoDeResposta4);
			this->Controls->Add(this->BotaoOpcaoDeResposta3);
			this->Controls->Add(this->BotaoOpcaoDeResposta2);
			this->Controls->Add(this->LetreiroOpcao);
			this->Controls->Add(this->BotaoOpcaoDeResposta1);
			this->Controls->Add(this->LetreiroTempoTotal);
			this->Controls->Add(this->CaixaDeTextoResposta10);
			this->Controls->Add(this->CaixaDeTextoResposta7);
			this->Controls->Add(this->LetreiroResposta8);
			this->Controls->Add(this->LetreiroResposta62);
			this->Controls->Add(this->LetreiroResposta52);
			this->Controls->Add(this->LetreiroCompletar1);
			this->Controls->Add(this->LetreiroResposta5);
			this->Controls->Add(this->LetreiroResposta6);
			this->Controls->Add(this->LetreiroResposta3);
			this->Controls->Add(this->CaixaDeTextoResposta4);
			this->Controls->Add(this->CaixaDeTextoResposta2);
			this->Controls->Add(this->CaixaDeTextoResposta1);
			this->Controls->Add(this->letreiroAlgoritmo);
			this->Controls->Add(this->letreiroLinhaTracada);
			this->Controls->Add(this->letreiroEnunciado);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimizeBox = false;
			this->Name = L"TelaQuestao6";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Alg+";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TelaQuestao6::TelaQuestao6_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemErrado))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemCorreto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoCinza))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoAzul))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVermelho))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVerde))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void TempoIntervaloResposta_Tick(System::Object^  sender, System::EventArgs^  e) {
			 piscarRespostaASerRespondida();
}
private: System::Void TempoContadorTotal_Tick(System::Object^  sender, System::EventArgs^  e) {
			 aumentarTempoTotal();
}
private: System::Void BotaoOpcaoDeResposta1_Click(System::Object^  sender, System::EventArgs^  e) {
			 executarAoClicarBotaoResposta1();
}
private: System::Void BotaoOpcaoDeResposta2_Click(System::Object^  sender, System::EventArgs^  e) {
			 executarAoClicarBotaoResposta2();
}
private: System::Void BotaoOpcaoDeResposta3_Click(System::Object^  sender, System::EventArgs^  e) {
			 executarAoClicarBotaoResposta3();
}
private: System::Void BotaoOpcaoDeResposta4_Click(System::Object^  sender, System::EventArgs^  e) {
			 executarAoClicarBotaoResposta4();
}
private: System::Void BotaoOpcaoDeResposta5_Click(System::Object^  sender, System::EventArgs^  e) {
			 executarAoClicarBotaoResposta5();
}
private: System::Void BotaoTestar_Click(System::Object^  sender, System::EventArgs^  e) {
		 System:Diagnostics::Process::Start("teste\\Questao6.exe");
}
private: System::Void BotaoAvancar_Click(System::Object^  sender, System::EventArgs^  e) {
			 OpcaoContinuar = true;
			 Visible = false;
}
private: System::Void BotaoReiniciar_Click(System::Object^  sender, System::EventArgs^  e) {
			 executarAoClicarBotaoReiniciar();
}
private: System::Void CaixaDeTextoResposta1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (e->KeyChar == 13)
			 {
				 if (CaixaDeTextoResposta1->Text == "")
				 {
					 MessageBox::Show("Preencha o Campo Da Variavel");
				 }
				 else
				 {
					 e->Handled = true;
					 executarAoApertarEnterNaCaixaDeTextoResposta1();
				 }
			 }
}
private: System::Void CaixaDeTextoResposta2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (e->KeyChar == 13)
			 {
				 if (CaixaDeTextoResposta2->Text == "")
				 {
					 MessageBox::Show("Preencha o Campo Da Variavel");
				 }
				 else
				 {
					 e->Handled = true;
					 executarAoApertarEnterNaCaixaDeTextoResposta2();
				 }
			 }
}
private: System::Void CaixaDeTextoResposta4_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (e->KeyChar == 13)
			 {
				 if (CaixaDeTextoResposta4->Text == "")
				 {
					 MessageBox::Show("Preencha o Campo Da Variavel");
				 }
				 else
				 {
					 e->Handled = true;
					 executarAoApertarEnterNaCaixaDeTextoResposta4();
				 }
			 }
}
private: System::Void CaixaDeTextoResposta7_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (e->KeyChar == 13)
			 {
				 if (CaixaDeTextoResposta7->Text == "")
				 {
					 MessageBox::Show("Preencha o Campo Da Variavel");
				 }
				 else
				 {
					 e->Handled = true;
					 executarAoApertarEnterNaCaixaDeTextoResposta7();
				 }
			 }
}
private: System::Void CaixaDeTextoResposta10_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (e->KeyChar == 13)
			 {
				 if (CaixaDeTextoResposta10->Text == "")
				 {
					 MessageBox::Show("Preencha o Campo Da Variavel");
				 }
				 else
				 {
					 e->Handled = true;
					 executarAoApertarEnterNaCaixaDeTextoResposta10();
				 }
			 }
}
private: System::Void CaixaDeTextoResposta1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 executarAoClicarNaCaixaDeTextoResposta1();
}
private: System::Void CaixaDeTextoResposta2_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 executarAoClicarNaCaixaDeTextoResposta2();
}
private: System::Void CaixaDeTextoResposta4_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 executarAoClicarNaCaixaDeTextoResposta4();
}
private: System::Void CaixaDeTextoResposta7_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 executarAoClicarNaCaixaDeTextoResposta7();
}
private: System::Void CaixaDeTextoResposta10_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 executarAoClicarNaCaixaDeTextoResposta10();
}
private: System::Void CaixaDeTextoResposta9_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 executarAoClicarNaCaixaDeTextoResposta10();
}
private: System::Void CaixaDeTextoResposta9_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if (e->KeyChar == 13)
			 {
				 if (CaixaDeTextoResposta9->Text == "")
				 {
					 MessageBox::Show("Preencha o Campo Da Variavel");
				 }
				 else
				 {
					 e->Handled = true;
					 executarAoApertarEnterNaCaixaDeTextoResposta9();
				 }
			 }
}
private: System::Void BotaoOpcaoDeResposta1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoOpcaoDeResposta1, ImagemBotaoVerde);
}
private: System::Void BotaoOpcaoDeResposta2_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoOpcaoDeResposta2, ImagemBotaoVerde);
}
private: System::Void BotaoOpcaoDeResposta3_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoOpcaoDeResposta3, ImagemBotaoVerde);
}
private: System::Void BotaoOpcaoDeResposta4_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoOpcaoDeResposta4, ImagemBotaoVerde);
}
private: System::Void BotaoOpcaoDeResposta5_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoOpcaoDeResposta5, ImagemBotaoVerde);
}
private: System::Void BotaoTestar_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoTestar, ImagemBotaoAzul);
}
private: System::Void BotaoAvancar_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoAvancar, ImagemBotaoVerde);
}
private: System::Void BotaoReiniciar_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoReiniciar, ImagemBotaoVermelho);
}
private: System::Void BotaoMenuPrincipal_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoMenuPrincipal, ImagemBotaoVermelho);
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
private: System::Void BotaoTestar_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoTestar, ImagemBotaoCinza);
}
private: System::Void BotaoAvancar_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoAvancar, ImagemBotaoCinza);
}
private: System::Void BotaoReiniciar_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoReiniciar, ImagemBotaoCinza);
}
private: System::Void BotaoMenuPrincipal_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoMenuPrincipal, ImagemBotaoCinza);
}
private: System::Void BotaoMenuPrincipal_Click(System::Object^  sender, System::EventArgs^  e) {
			 OpcaoContinuar = false;
			 Visible = false;
}
private: System::Void TelaQuestao6_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 fecharJogo();
}
};
}
