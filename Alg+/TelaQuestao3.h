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
	/// Sumário para TelaQuestao3
	/// </summary>
	public ref class TelaQuestao3 : public System::Windows::Forms::Form
	{
	private:int Contador;
			int TempoNaFase;
			int QuantidadeResetou;
			bool OpcaoContinuar;
			String ^ AcrecimoDeUnderlines = "";
	private: System::Windows::Forms::PictureBox^  ImagemBotaoCinza;
	private: System::Windows::Forms::PictureBox^  ImagemBotaoAzul;
	private: System::Windows::Forms::PictureBox^  ImagemBotaoVermelho;
	private: System::Windows::Forms::PictureBox^  ImagemBotaoVerde;
	private: System::Windows::Forms::PictureBox^  ImagemAjuda1;
	private: System::Windows::Forms::PictureBox^  ImagemAjuda2;







	private: System::Windows::Forms::ToolTip^  toolTip1;
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
		void executarAoApertarEnterNaCaixaDeTextoResposta2();
		void executarAoApertarEnterNaCaixaDeTextoResposta4();
		void executarAoClicarNaCaixaDeTextoResposta2();
		void executarAoClicarNaCaixaDeTextoResposta4();

	public:
		void setTempoAnterior(int);
		int getTempoNaFase();
		int getQuantidadeQueResetouAFase();
		int getOpcaoIraContinuar();
		void fecharJogo();
	public:
		TelaQuestao3(void)
		{
			InitializeComponent();
			//
			Contador = 0;
			TempoNaFase = 0;
			QuantidadeResetou = 0;
			RespostaNaoPreenchida = "______";
			AcrecimoDeUnderlines = "";
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~TelaQuestao3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  TempoIntervaloResposta;
	private: System::Windows::Forms::Timer^  TempoContadorTotal;
	private: System::Windows::Forms::Label^  letreiroLinhaTracada;
	protected:
	private: System::Windows::Forms::Label^  letreiroEnunciado;
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
	private: System::Windows::Forms::Button^  BotaoReiniciar;

	private: System::Windows::Forms::Label^  LetreiroResposta1;
	private: System::Windows::Forms::Label^  LetreiroResposta5;

	private: System::Windows::Forms::Label^  letreiroAlgoritmo;
private: System::Windows::Forms::Button^  BotaoMenuPrincipal;

	private: System::Windows::Forms::TextBox^  CaixaDeTextoResposta2;
	private: System::Windows::Forms::TextBox^  CaixaDeTextoResposta4;
	private: System::Windows::Forms::Label^  LetreiroResposta3;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaQuestao3::typeid));
			this->letreiroLinhaTracada = (gcnew System::Windows::Forms::Label());
			this->letreiroEnunciado = (gcnew System::Windows::Forms::Label());
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
			this->BotaoReiniciar = (gcnew System::Windows::Forms::Button());
			this->LetreiroResposta1 = (gcnew System::Windows::Forms::Label());
			this->LetreiroResposta5 = (gcnew System::Windows::Forms::Label());
			this->letreiroAlgoritmo = (gcnew System::Windows::Forms::Label());
			this->BotaoMenuPrincipal = (gcnew System::Windows::Forms::Button());
			this->CaixaDeTextoResposta2 = (gcnew System::Windows::Forms::TextBox());
			this->CaixaDeTextoResposta4 = (gcnew System::Windows::Forms::TextBox());
			this->LetreiroResposta3 = (gcnew System::Windows::Forms::Label());
			this->TempoIntervaloResposta = (gcnew System::Windows::Forms::Timer(this->components));
			this->TempoContadorTotal = (gcnew System::Windows::Forms::Timer(this->components));
			this->ImagemBotaoCinza = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemBotaoAzul = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemBotaoVermelho = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemBotaoVerde = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemAjuda1 = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemAjuda2 = (gcnew System::Windows::Forms::PictureBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemErrado))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemCorreto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoCinza))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoAzul))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVermelho))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVerde))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemAjuda1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemAjuda2))->BeginInit();
			this->SuspendLayout();
			// 
			// letreiroLinhaTracada
			// 
			this->letreiroLinhaTracada->AutoSize = true;
			this->letreiroLinhaTracada->ForeColor = System::Drawing::Color::Black;
			this->letreiroLinhaTracada->Location = System::Drawing::Point(-36, 102);
			this->letreiroLinhaTracada->Name = L"letreiroLinhaTracada";
			this->letreiroLinhaTracada->Size = System::Drawing::Size(1324, 13);
			this->letreiroLinhaTracada->TabIndex = 16;
			this->letreiroLinhaTracada->Text = resources->GetString(L"letreiroLinhaTracada.Text");
			// 
			// letreiroEnunciado
			// 
			this->letreiroEnunciado->AutoSize = true;
			this->letreiroEnunciado->BackColor = System::Drawing::Color::Transparent;
			this->letreiroEnunciado->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->letreiroEnunciado->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18));
			this->letreiroEnunciado->ForeColor = System::Drawing::Color::Black;
			this->letreiroEnunciado->Location = System::Drawing::Point(12, 5);
			this->letreiroEnunciado->Name = L"letreiroEnunciado";
			this->letreiroEnunciado->Size = System::Drawing::Size(1252, 95);
			this->letreiroEnunciado->TabIndex = 15;
			this->letreiroEnunciado->Text = resources->GetString(L"letreiroEnunciado.Text");
			this->letreiroEnunciado->UseCompatibleTextRendering = true;
			// 
			// LetreiroOpcao
			// 
			this->LetreiroOpcao->AutoSize = true;
			this->LetreiroOpcao->Font = (gcnew System::Drawing::Font(L"Century Gothic", 30));
			this->LetreiroOpcao->ForeColor = System::Drawing::Color::Black;
			this->LetreiroOpcao->Location = System::Drawing::Point(863, 137);
			this->LetreiroOpcao->Name = L"LetreiroOpcao";
			this->LetreiroOpcao->Size = System::Drawing::Size(171, 56);
			this->LetreiroOpcao->TabIndex = 22;
			this->LetreiroOpcao->Text = L"Opção:";
			this->LetreiroOpcao->UseCompatibleTextRendering = true;
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
			this->BotaoOpcaoDeResposta5->Location = System::Drawing::Point(1047, 393);
			this->BotaoOpcaoDeResposta5->Margin = System::Windows::Forms::Padding(10);
			this->BotaoOpcaoDeResposta5->Name = L"BotaoOpcaoDeResposta5";
			this->BotaoOpcaoDeResposta5->Size = System::Drawing::Size(188, 40);
			this->BotaoOpcaoDeResposta5->TabIndex = 21;
			this->BotaoOpcaoDeResposta5->Text = L"Inteiro";
			this->BotaoOpcaoDeResposta5->UseCompatibleTextRendering = true;
			this->BotaoOpcaoDeResposta5->UseVisualStyleBackColor = false;
			this->BotaoOpcaoDeResposta5->Click += gcnew System::EventHandler(this, &TelaQuestao3::BotaoOpcaoDeResposta5_Click);
			this->BotaoOpcaoDeResposta5->MouseLeave += gcnew System::EventHandler(this, &TelaQuestao3::BotaoOpcaoDeResposta5_MouseLeave);
			this->BotaoOpcaoDeResposta5->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao3::BotaoOpcaoDeResposta5_MouseMove);
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
			this->BotaoOpcaoDeResposta4->Location = System::Drawing::Point(1047, 333);
			this->BotaoOpcaoDeResposta4->Margin = System::Windows::Forms::Padding(10);
			this->BotaoOpcaoDeResposta4->Name = L"BotaoOpcaoDeResposta4";
			this->BotaoOpcaoDeResposta4->Size = System::Drawing::Size(188, 40);
			this->BotaoOpcaoDeResposta4->TabIndex = 20;
			this->BotaoOpcaoDeResposta4->Text = L"Nome";
			this->BotaoOpcaoDeResposta4->UseCompatibleTextRendering = true;
			this->BotaoOpcaoDeResposta4->UseVisualStyleBackColor = false;
			this->BotaoOpcaoDeResposta4->Click += gcnew System::EventHandler(this, &TelaQuestao3::BotaoOpcaoDeResposta4_Click);
			this->BotaoOpcaoDeResposta4->MouseLeave += gcnew System::EventHandler(this, &TelaQuestao3::BotaoOpcaoDeResposta4_MouseLeave);
			this->BotaoOpcaoDeResposta4->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao3::BotaoOpcaoDeResposta4_MouseMove);
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
			this->BotaoOpcaoDeResposta3->Location = System::Drawing::Point(1047, 273);
			this->BotaoOpcaoDeResposta3->Margin = System::Windows::Forms::Padding(10);
			this->BotaoOpcaoDeResposta3->Name = L"BotaoOpcaoDeResposta3";
			this->BotaoOpcaoDeResposta3->Size = System::Drawing::Size(188, 40);
			this->BotaoOpcaoDeResposta3->TabIndex = 19;
			this->BotaoOpcaoDeResposta3->Text = L"SalarioTotal";
			this->BotaoOpcaoDeResposta3->UseCompatibleTextRendering = true;
			this->BotaoOpcaoDeResposta3->UseVisualStyleBackColor = false;
			this->BotaoOpcaoDeResposta3->Click += gcnew System::EventHandler(this, &TelaQuestao3::BotaoOpcaoDeResposta3_Click);
			this->BotaoOpcaoDeResposta3->MouseLeave += gcnew System::EventHandler(this, &TelaQuestao3::BotaoOpcaoDeResposta3_MouseLeave);
			this->BotaoOpcaoDeResposta3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao3::BotaoOpcaoDeResposta3_MouseMove);
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
			this->BotaoOpcaoDeResposta1->Location = System::Drawing::Point(1047, 153);
			this->BotaoOpcaoDeResposta1->Margin = System::Windows::Forms::Padding(10);
			this->BotaoOpcaoDeResposta1->Name = L"BotaoOpcaoDeResposta1";
			this->BotaoOpcaoDeResposta1->Size = System::Drawing::Size(188, 40);
			this->BotaoOpcaoDeResposta1->TabIndex = 17;
			this->BotaoOpcaoDeResposta1->Text = L"Vendas";
			this->BotaoOpcaoDeResposta1->UseCompatibleTextRendering = true;
			this->BotaoOpcaoDeResposta1->UseVisualStyleBackColor = false;
			this->BotaoOpcaoDeResposta1->Click += gcnew System::EventHandler(this, &TelaQuestao3::BotaoOpcaoDeResposta1_Click);
			this->BotaoOpcaoDeResposta1->MouseLeave += gcnew System::EventHandler(this, &TelaQuestao3::BotaoOpcaoDeResposta1_MouseLeave);
			this->BotaoOpcaoDeResposta1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao3::BotaoOpcaoDeResposta1_MouseMove);
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
			this->BotaoOpcaoDeResposta2->Location = System::Drawing::Point(1047, 213);
			this->BotaoOpcaoDeResposta2->Margin = System::Windows::Forms::Padding(10);
			this->BotaoOpcaoDeResposta2->Name = L"BotaoOpcaoDeResposta2";
			this->BotaoOpcaoDeResposta2->Size = System::Drawing::Size(188, 40);
			this->BotaoOpcaoDeResposta2->TabIndex = 18;
			this->BotaoOpcaoDeResposta2->Text = L"Real";
			this->BotaoOpcaoDeResposta2->UseCompatibleTextRendering = true;
			this->BotaoOpcaoDeResposta2->UseVisualStyleBackColor = false;
			this->BotaoOpcaoDeResposta2->Click += gcnew System::EventHandler(this, &TelaQuestao3::BotaoOpcaoDeResposta2_Click);
			this->BotaoOpcaoDeResposta2->MouseLeave += gcnew System::EventHandler(this, &TelaQuestao3::BotaoOpcaoDeResposta2_MouseLeave);
			this->BotaoOpcaoDeResposta2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao3::BotaoOpcaoDeResposta2_MouseMove);
			// 
			// LetreiroTempoTotal
			// 
			this->LetreiroTempoTotal->AutoSize = true;
			this->LetreiroTempoTotal->BackColor = System::Drawing::Color::Transparent;
			this->LetreiroTempoTotal->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20));
			this->LetreiroTempoTotal->ForeColor = System::Drawing::Color::Black;
			this->LetreiroTempoTotal->Location = System::Drawing::Point(603, 125);
			this->LetreiroTempoTotal->Name = L"LetreiroTempoTotal";
			this->LetreiroTempoTotal->Size = System::Drawing::Size(78, 39);
			this->LetreiroTempoTotal->TabIndex = 23;
			this->LetreiroTempoTotal->Text = L"00:00";
			this->LetreiroTempoTotal->UseCompatibleTextRendering = true;
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
			this->BotaoTestar->Size = System::Drawing::Size(314, 83);
			this->BotaoTestar->TabIndex = 31;
			this->BotaoTestar->Text = L"Testar";
			this->BotaoTestar->UseCompatibleTextRendering = true;
			this->BotaoTestar->UseVisualStyleBackColor = false;
			this->BotaoTestar->Visible = false;
			this->BotaoTestar->Click += gcnew System::EventHandler(this, &TelaQuestao3::BotaoTestar_Click);
			this->BotaoTestar->MouseLeave += gcnew System::EventHandler(this, &TelaQuestao3::BotaoTestar_MouseLeave);
			this->BotaoTestar->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao3::BotaoTestar_MouseMove);
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
			this->BotaoAvancar->Location = System::Drawing::Point(472, 525);
			this->BotaoAvancar->Name = L"BotaoAvancar";
			this->BotaoAvancar->Size = System::Drawing::Size(215, 54);
			this->BotaoAvancar->TabIndex = 30;
			this->BotaoAvancar->Text = L"Avançar";
			this->BotaoAvancar->UseCompatibleTextRendering = true;
			this->BotaoAvancar->UseVisualStyleBackColor = false;
			this->BotaoAvancar->Visible = false;
			this->BotaoAvancar->Click += gcnew System::EventHandler(this, &TelaQuestao3::BotaoAvancar_Click);
			this->BotaoAvancar->MouseLeave += gcnew System::EventHandler(this, &TelaQuestao3::BotaoAvancar_MouseLeave);
			this->BotaoAvancar->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao3::BotaoAvancar_MouseMove);
			// 
			// ImagemErrado
			// 
			this->ImagemErrado->BackColor = System::Drawing::Color::Transparent;
			this->ImagemErrado->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ImagemErrado->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemErrado.Image")));
			this->ImagemErrado->Location = System::Drawing::Point(693, 525);
			this->ImagemErrado->Name = L"ImagemErrado";
			this->ImagemErrado->Size = System::Drawing::Size(81, 62);
			this->ImagemErrado->TabIndex = 29;
			this->ImagemErrado->TabStop = false;
			this->ImagemErrado->Visible = false;
			// 
			// ImagemCorreto
			// 
			this->ImagemCorreto->BackColor = System::Drawing::Color::Transparent;
			this->ImagemCorreto->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemCorreto.BackgroundImage")));
			this->ImagemCorreto->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ImagemCorreto->Location = System::Drawing::Point(693, 525);
			this->ImagemCorreto->Name = L"ImagemCorreto";
			this->ImagemCorreto->Size = System::Drawing::Size(81, 62);
			this->ImagemCorreto->TabIndex = 28;
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
			this->BotaoReiniciar->Location = System::Drawing::Point(472, 525);
			this->BotaoReiniciar->Name = L"BotaoReiniciar";
			this->BotaoReiniciar->Size = System::Drawing::Size(212, 54);
			this->BotaoReiniciar->TabIndex = 27;
			this->BotaoReiniciar->Text = L"Reiniciar";
			this->BotaoReiniciar->UseCompatibleTextRendering = true;
			this->BotaoReiniciar->UseVisualStyleBackColor = false;
			this->BotaoReiniciar->Visible = false;
			this->BotaoReiniciar->Click += gcnew System::EventHandler(this, &TelaQuestao3::BotaoReiniciar_Click);
			this->BotaoReiniciar->MouseLeave += gcnew System::EventHandler(this, &TelaQuestao3::BotaoReiniciar_MouseLeave);
			this->BotaoReiniciar->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao3::BotaoReiniciar_MouseMove);
			// 
			// LetreiroResposta1
			// 
			this->LetreiroResposta1->AutoSize = true;
			this->LetreiroResposta1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->LetreiroResposta1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LetreiroResposta1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->LetreiroResposta1->ForeColor = System::Drawing::Color::Black;
			this->LetreiroResposta1->Location = System::Drawing::Point(26, 180);
			this->LetreiroResposta1->Name = L"LetreiroResposta1";
			this->LetreiroResposta1->Size = System::Drawing::Size(84, 27);
			this->LetreiroResposta1->TabIndex = 26;
			this->LetreiroResposta1->Text = L"______";
			// 
			// LetreiroResposta5
			// 
			this->LetreiroResposta5->AutoSize = true;
			this->LetreiroResposta5->BackColor = System::Drawing::Color::White;
			this->LetreiroResposta5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LetreiroResposta5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->LetreiroResposta5->ForeColor = System::Drawing::Color::Black;
			this->LetreiroResposta5->Location = System::Drawing::Point(26, 371);
			this->LetreiroResposta5->Name = L"LetreiroResposta5";
			this->LetreiroResposta5->Size = System::Drawing::Size(84, 27);
			this->LetreiroResposta5->TabIndex = 25;
			this->LetreiroResposta5->Text = L"______";
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
			this->letreiroAlgoritmo->Location = System::Drawing::Point(12, 125);
			this->letreiroAlgoritmo->Margin = System::Windows::Forms::Padding(10);
			this->letreiroAlgoritmo->Name = L"letreiroAlgoritmo";
			this->letreiroAlgoritmo->Size = System::Drawing::Size(423, 326);
			this->letreiroAlgoritmo->TabIndex = 24;
			this->letreiroAlgoritmo->Text = resources->GetString(L"letreiroAlgoritmo.Text");
			this->letreiroAlgoritmo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			this->BotaoMenuPrincipal->Location = System::Drawing::Point(19, 592);
			this->BotaoMenuPrincipal->Margin = System::Windows::Forms::Padding(10);
			this->BotaoMenuPrincipal->Name = L"BotaoMenuPrincipal";
			this->BotaoMenuPrincipal->Size = System::Drawing::Size(339, 50);
			this->BotaoMenuPrincipal->TabIndex = 32;
			this->BotaoMenuPrincipal->Text = L"Menu Principal";
			this->BotaoMenuPrincipal->UseCompatibleTextRendering = true;
			this->BotaoMenuPrincipal->UseVisualStyleBackColor = false;
			this->BotaoMenuPrincipal->Click += gcnew System::EventHandler(this, &TelaQuestao3::BotaoMenuPrincipal_Click);
			this->BotaoMenuPrincipal->MouseLeave += gcnew System::EventHandler(this, &TelaQuestao3::BotaoMenuPrincipal_MouseLeave);
			this->BotaoMenuPrincipal->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao3::BotaoMenuPrincipal_MouseMove);
			// 
			// CaixaDeTextoResposta2
			// 
			this->CaixaDeTextoResposta2->BackColor = System::Drawing::Color::White;
			this->CaixaDeTextoResposta2->Enabled = false;
			this->CaixaDeTextoResposta2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 17));
			this->CaixaDeTextoResposta2->ForeColor = System::Drawing::Color::Black;
			this->CaixaDeTextoResposta2->Location = System::Drawing::Point(149, 178);
			this->CaixaDeTextoResposta2->MaxLength = 30;
			this->CaixaDeTextoResposta2->Name = L"CaixaDeTextoResposta2";
			this->CaixaDeTextoResposta2->Size = System::Drawing::Size(100, 34);
			this->CaixaDeTextoResposta2->TabIndex = 33;
			this->CaixaDeTextoResposta2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao3::CaixaDeTextoResposta2_MouseClick);
			this->CaixaDeTextoResposta2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &TelaQuestao3::CaixaDeTextoResposta2_KeyPress);
			// 
			// CaixaDeTextoResposta4
			// 
			this->CaixaDeTextoResposta4->BackColor = System::Drawing::Color::White;
			this->CaixaDeTextoResposta4->Enabled = false;
			this->CaixaDeTextoResposta4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 17));
			this->CaixaDeTextoResposta4->ForeColor = System::Drawing::Color::Black;
			this->CaixaDeTextoResposta4->Location = System::Drawing::Point(29, 285);
			this->CaixaDeTextoResposta4->MaxLength = 30;
			this->CaixaDeTextoResposta4->Name = L"CaixaDeTextoResposta4";
			this->CaixaDeTextoResposta4->Size = System::Drawing::Size(157, 34);
			this->CaixaDeTextoResposta4->TabIndex = 34;
			this->CaixaDeTextoResposta4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaQuestao3::CaixaDeTextoResposta4_MouseClick);
			this->CaixaDeTextoResposta4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &TelaQuestao3::CaixaDeTextoResposta4_KeyPress);
			// 
			// LetreiroResposta3
			// 
			this->LetreiroResposta3->AutoSize = true;
			this->LetreiroResposta3->BackColor = System::Drawing::Color::White;
			this->LetreiroResposta3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LetreiroResposta3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->LetreiroResposta3->ForeColor = System::Drawing::Color::Black;
			this->LetreiroResposta3->Location = System::Drawing::Point(223, 235);
			this->LetreiroResposta3->Name = L"LetreiroResposta3";
			this->LetreiroResposta3->Size = System::Drawing::Size(84, 27);
			this->LetreiroResposta3->TabIndex = 35;
			this->LetreiroResposta3->Text = L"______";
			// 
			// TempoIntervaloResposta
			// 
			this->TempoIntervaloResposta->Enabled = true;
			this->TempoIntervaloResposta->Interval = 500;
			this->TempoIntervaloResposta->Tick += gcnew System::EventHandler(this, &TelaQuestao3::TempoIntervaloResposta_Tick);
			// 
			// TempoContadorTotal
			// 
			this->TempoContadorTotal->Enabled = true;
			this->TempoContadorTotal->Interval = 1000;
			this->TempoContadorTotal->Tick += gcnew System::EventHandler(this, &TelaQuestao3::TempoContadorTotal_Tick);
			// 
			// ImagemBotaoCinza
			// 
			this->ImagemBotaoCinza->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoCinza.Image")));
			this->ImagemBotaoCinza->Location = System::Drawing::Point(524, 153);
			this->ImagemBotaoCinza->Name = L"ImagemBotaoCinza";
			this->ImagemBotaoCinza->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoCinza->TabIndex = 39;
			this->ImagemBotaoCinza->TabStop = false;
			this->ImagemBotaoCinza->Visible = false;
			// 
			// ImagemBotaoAzul
			// 
			this->ImagemBotaoAzul->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoAzul.Image")));
			this->ImagemBotaoAzul->Location = System::Drawing::Point(508, 153);
			this->ImagemBotaoAzul->Name = L"ImagemBotaoAzul";
			this->ImagemBotaoAzul->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoAzul->TabIndex = 38;
			this->ImagemBotaoAzul->TabStop = false;
			this->ImagemBotaoAzul->Visible = false;
			// 
			// ImagemBotaoVermelho
			// 
			this->ImagemBotaoVermelho->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoVermelho.Image")));
			this->ImagemBotaoVermelho->Location = System::Drawing::Point(492, 153);
			this->ImagemBotaoVermelho->Name = L"ImagemBotaoVermelho";
			this->ImagemBotaoVermelho->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoVermelho->TabIndex = 37;
			this->ImagemBotaoVermelho->TabStop = false;
			this->ImagemBotaoVermelho->Visible = false;
			// 
			// ImagemBotaoVerde
			// 
			this->ImagemBotaoVerde->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoVerde.Image")));
			this->ImagemBotaoVerde->Location = System::Drawing::Point(476, 153);
			this->ImagemBotaoVerde->Name = L"ImagemBotaoVerde";
			this->ImagemBotaoVerde->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoVerde->TabIndex = 36;
			this->ImagemBotaoVerde->TabStop = false;
			this->ImagemBotaoVerde->Visible = false;
			// 
			// ImagemAjuda1
			// 
			this->ImagemAjuda1->Cursor = System::Windows::Forms::Cursors::Help;
			this->ImagemAjuda1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemAjuda1.Image")));
			this->ImagemAjuda1->Location = System::Drawing::Point(255, 182);
			this->ImagemAjuda1->Name = L"ImagemAjuda1";
			this->ImagemAjuda1->Size = System::Drawing::Size(25, 25);
			this->ImagemAjuda1->TabIndex = 41;
			this->ImagemAjuda1->TabStop = false;
			this->toolTip1->SetToolTip(this->ImagemAjuda1, L"Escreva o tipo de variável que guarda um conjunto de caracteres.");
			// 
			// ImagemAjuda2
			// 
			this->ImagemAjuda2->Cursor = System::Windows::Forms::Cursors::Help;
			this->ImagemAjuda2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemAjuda2.Image")));
			this->ImagemAjuda2->Location = System::Drawing::Point(192, 288);
			this->ImagemAjuda2->Name = L"ImagemAjuda2";
			this->ImagemAjuda2->Size = System::Drawing::Size(25, 25);
			this->ImagemAjuda2->TabIndex = 43;
			this->ImagemAjuda2->TabStop = false;
			this->toolTip1->SetToolTip(this->ImagemAjuda2, L"Escreva o comando que o usuário irá entrar com uma informação.");
			// 
			// TelaQuestao3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(1264, 661);
			this->Controls->Add(this->ImagemAjuda2);
			this->Controls->Add(this->ImagemAjuda1);
			this->Controls->Add(this->ImagemBotaoCinza);
			this->Controls->Add(this->ImagemBotaoAzul);
			this->Controls->Add(this->ImagemBotaoVermelho);
			this->Controls->Add(this->ImagemBotaoVerde);
			this->Controls->Add(this->LetreiroResposta3);
			this->Controls->Add(this->CaixaDeTextoResposta4);
			this->Controls->Add(this->CaixaDeTextoResposta2);
			this->Controls->Add(this->BotaoMenuPrincipal);
			this->Controls->Add(this->LetreiroTempoTotal);
			this->Controls->Add(this->BotaoTestar);
			this->Controls->Add(this->BotaoAvancar);
			this->Controls->Add(this->ImagemErrado);
			this->Controls->Add(this->ImagemCorreto);
			this->Controls->Add(this->BotaoReiniciar);
			this->Controls->Add(this->LetreiroResposta1);
			this->Controls->Add(this->LetreiroResposta5);
			this->Controls->Add(this->letreiroAlgoritmo);
			this->Controls->Add(this->LetreiroOpcao);
			this->Controls->Add(this->BotaoOpcaoDeResposta5);
			this->Controls->Add(this->BotaoOpcaoDeResposta4);
			this->Controls->Add(this->BotaoOpcaoDeResposta3);
			this->Controls->Add(this->BotaoOpcaoDeResposta1);
			this->Controls->Add(this->BotaoOpcaoDeResposta2);
			this->Controls->Add(this->letreiroLinhaTracada);
			this->Controls->Add(this->letreiroEnunciado);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"TelaQuestao3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Alg+";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TelaQuestao3::TelaQuestao3_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemErrado))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemCorreto))->EndInit();
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
private: System::Void TempoIntervaloResposta_Tick(System::Object^  sender, System::EventArgs^  e) {
			 piscarRespostaASerRespondida();
}
private: System::Void TempoContadorTotal_Tick(System::Object^  sender, System::EventArgs^  e) {
			 aumentarTempoTotal();
}
private: System::Void CaixaDeTextoResposta2_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 executarAoClicarNaCaixaDeTextoResposta2();
}
private: System::Void CaixaDeTextoResposta4_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 executarAoClicarNaCaixaDeTextoResposta4();
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
private: System::Void BotaoReiniciar_Click(System::Object^  sender, System::EventArgs^  e) {
			 executarAoClicarBotaoReiniciar();
}
private: System::Void BotaoMenuPrincipal_Click(System::Object^  sender, System::EventArgs^  e) {
			 Visible = false;
			 OpcaoContinuar = false;
}
private: System::Void BotaoTestar_Click(System::Object^  sender, System::EventArgs^  e) {
		 System:Diagnostics::Process::Start("teste\\Questao3.exe");
}
private: System::Void BotaoAvancar_Click(System::Object^  sender, System::EventArgs^  e) {
			 Visible = false;
			 OpcaoContinuar = true;
}
private: System::Void TelaQuestao3_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
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
private: System::Void BotaoMenuPrincipal_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoMenuPrincipal, ImagemBotaoVermelho);
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
private: System::Void BotaoMenuPrincipal_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoMenuPrincipal, ImagemBotaoCinza);
}
};
}
