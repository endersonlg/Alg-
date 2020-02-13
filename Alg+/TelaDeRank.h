#pragma once
#include<iostream>
#include"ConversorDeString.h"
#include"ConversorDeTipos.h"
#include"AlteradorPropriedadeLetreiro.h"
#include"AlteradorPropriedadeBotao.h"

namespace Alg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Sumário para TelaDeRank
	/// </summary>
	public ref class TelaDeRank : public System::Windows::Forms::Form
	{
	public:
		void setMelhoresJogadores(string[10], int[10], int[10], double[10]);
		void setInformacaoJogadorAtual(String^,int, int, double);
		void mudarVisiabilidadeLetreiroParaVisivel(Label^);
		void mudarVisiabilidadeLetreiroJogadorAtual();
		void mudarVisibilidadeBotaoVoltarEGrafico();
		void executarAoClicarBotaoGrafico();
		int getOpcaoContinuar();
		void fecharJogo();

	private:
		String^ NomeJogador1;int IdadeJogador1; int TempoJogador1; double PontuacaoJogador1;
		String^ NomeJogador2;int IdadeJogador2; int TempoJogador2; double PontuacaoJogador2;
		String^ NomeJogador3;int IdadeJogador3; int TempoJogador3; double PontuacaoJogador3;
		String^ NomeJogador4;int IdadeJogador4; int TempoJogador4; double PontuacaoJogador4;
		String^ NomeJogador5;int IdadeJogador5; int TempoJogador5; double PontuacaoJogador5;
		String^ NomeJogador6;int IdadeJogador6; int TempoJogador6; double PontuacaoJogador6;
		String^ NomeJogador7;int IdadeJogador7; int TempoJogador7; double PontuacaoJogador7;
		String^ NomeJogador8;int IdadeJogador8; int TempoJogador8; double PontuacaoJogador8;
		String^ NomeJogador9;int IdadeJogador9; int TempoJogador9; double PontuacaoJogador9;
		String^ NomeJogador10;;int IdadeJogador10; int TempoJogador10; double PontuacaoJogador10;

	private: System::Windows::Forms::Label^  LetreiroIndice1;
	private: System::Windows::Forms::Label^  LetreiroIndice10;
	private: System::Windows::Forms::Label^  LetreiroIndice9;
	private: System::Windows::Forms::Label^  LetreiroIndice8;
	private: System::Windows::Forms::Label^  LetreiroIndice7;
	private: System::Windows::Forms::Label^  LetreiroIndice6;
	private: System::Windows::Forms::Label^  LetreiroIndice5;
	private: System::Windows::Forms::Label^  LetreiroIndice4;
	private: System::Windows::Forms::Label^  LetreiroIndice3;
	private: System::Windows::Forms::Label^  LetreiroIndice2;
	private: System::Windows::Forms::Label^  LetreiroRanking;
	private: System::Windows::Forms::Label^  LetreiroNomeJogadorAtual;
	private: System::Windows::Forms::Label^  LetreiroIdadeJogadorAtual;
	private: System::Windows::Forms::Label^  LetreiroTempoJogadorAtual;
	private: System::Windows::Forms::Label^  LetreiroNome;
	private: System::Windows::Forms::Label^  LetreiroIdade;
	private: System::Windows::Forms::Label^  LetreiroPontuacao;
	private: System::Windows::Forms::Label^  LetreiroTempo;
	private: System::Windows::Forms::Button^  BotaoGrafico;
	private: System::Windows::Forms::PictureBox^  ImagemBotaoCinza;
	private: System::Windows::Forms::PictureBox^  ImagemBotaoVerde;
	private: System::Windows::Forms::Button^  BotaoVoltar;

	private: System::Windows::Forms::Label^  LetreiroPontuacaoJogadorAtual;

		void atribuirValoresAosLetreiros();
	public:	
		TelaDeRank(void)
		{
			InitializeComponent();
			//

			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~TelaDeRank()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  LetreiroNomeJogador1;
	private: System::Windows::Forms::Label^  LetreiroNomeJogador2;
	private: System::Windows::Forms::Label^  LetreiroNomeJogador3;
	private: System::Windows::Forms::Label^  LetreiroNomeJogador4;
	private: System::Windows::Forms::Label^  LetreiroNomeJogador5;
	private: System::Windows::Forms::Label^  LetreiroNomeJogador6;
	private: System::Windows::Forms::Label^  LetreiroNomeJogador7;
	private: System::Windows::Forms::Label^  LetreiroNomeJogador8;
	private: System::Windows::Forms::Label^  LetreiroNomeJogador9;
	private: System::Windows::Forms::Label^  LetreiroNomeJogador10;
	private: System::Windows::Forms::Label^  LetreiroIdadeJogador10;
	private: System::Windows::Forms::Label^  LetreiroIdadeJogador9;
	private: System::Windows::Forms::Label^  LetreiroIdadeJogador8;
	private: System::Windows::Forms::Label^  LetreiroIdadeJogador7;
	private: System::Windows::Forms::Label^  LetreiroIdadeJogador6;
	private: System::Windows::Forms::Label^  LetreiroIdadeJogador5;
	private: System::Windows::Forms::Label^  LetreiroIdadeJogador4;
	private: System::Windows::Forms::Label^  LetreiroIdadeJogador3;
	private: System::Windows::Forms::Label^  LetreiroIdadeJogador2;
	private: System::Windows::Forms::Label^  LetreiroIdadeJogador1;
	private: System::Windows::Forms::Label^  LetreiroPontuacaoJogador10;
	private: System::Windows::Forms::Label^  LetreiroPontuacaoJogador9;
	private: System::Windows::Forms::Label^  LetreiroPontuacaoJogador8;
	private: System::Windows::Forms::Label^  LetreiroPontuacaoJogador7;
	private: System::Windows::Forms::Label^  LetreiroPontuacaoJogador6;
	private: System::Windows::Forms::Label^  LetreiroPontuacaoJogador5;
	private: System::Windows::Forms::Label^  LetreiroPontuacaoJogador4;
	private: System::Windows::Forms::Label^  LetreiroPontuacaoJogador3;
	private: System::Windows::Forms::Label^  LetreiroPontuacaoJogador2;
	private: System::Windows::Forms::Label^  LetreiroPontuacaoJogador1;
	private: System::Windows::Forms::Label^  LetreiroTempoJogador10;
	private: System::Windows::Forms::Label^  LetreiroTempoJogador9;
	private: System::Windows::Forms::Label^  LetreiroTempoJogador8;
	private: System::Windows::Forms::Label^  LetreiroTempoJogador7;
	private: System::Windows::Forms::Label^  LetreiroTempoJogador6;
	private: System::Windows::Forms::Label^  LetreiroTempoJogador5;
	private: System::Windows::Forms::Label^  LetreiroTempoJogador4;
	private: System::Windows::Forms::Label^  LetreiroTempoJogador3;
	private: System::Windows::Forms::Label^  LetreiroTempoJogador2;
	private: System::Windows::Forms::Label^  LetreiroTempoJogador1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaDeRank::typeid));
			this->LetreiroNomeJogador1 = (gcnew System::Windows::Forms::Label());
			this->LetreiroNomeJogador2 = (gcnew System::Windows::Forms::Label());
			this->LetreiroNomeJogador3 = (gcnew System::Windows::Forms::Label());
			this->LetreiroNomeJogador4 = (gcnew System::Windows::Forms::Label());
			this->LetreiroNomeJogador5 = (gcnew System::Windows::Forms::Label());
			this->LetreiroNomeJogador6 = (gcnew System::Windows::Forms::Label());
			this->LetreiroNomeJogador7 = (gcnew System::Windows::Forms::Label());
			this->LetreiroNomeJogador8 = (gcnew System::Windows::Forms::Label());
			this->LetreiroNomeJogador9 = (gcnew System::Windows::Forms::Label());
			this->LetreiroNomeJogador10 = (gcnew System::Windows::Forms::Label());
			this->LetreiroIdadeJogador10 = (gcnew System::Windows::Forms::Label());
			this->LetreiroIdadeJogador9 = (gcnew System::Windows::Forms::Label());
			this->LetreiroIdadeJogador8 = (gcnew System::Windows::Forms::Label());
			this->LetreiroIdadeJogador7 = (gcnew System::Windows::Forms::Label());
			this->LetreiroIdadeJogador6 = (gcnew System::Windows::Forms::Label());
			this->LetreiroIdadeJogador5 = (gcnew System::Windows::Forms::Label());
			this->LetreiroIdadeJogador4 = (gcnew System::Windows::Forms::Label());
			this->LetreiroIdadeJogador3 = (gcnew System::Windows::Forms::Label());
			this->LetreiroIdadeJogador2 = (gcnew System::Windows::Forms::Label());
			this->LetreiroIdadeJogador1 = (gcnew System::Windows::Forms::Label());
			this->LetreiroPontuacaoJogador10 = (gcnew System::Windows::Forms::Label());
			this->LetreiroPontuacaoJogador9 = (gcnew System::Windows::Forms::Label());
			this->LetreiroPontuacaoJogador8 = (gcnew System::Windows::Forms::Label());
			this->LetreiroPontuacaoJogador7 = (gcnew System::Windows::Forms::Label());
			this->LetreiroPontuacaoJogador6 = (gcnew System::Windows::Forms::Label());
			this->LetreiroPontuacaoJogador5 = (gcnew System::Windows::Forms::Label());
			this->LetreiroPontuacaoJogador4 = (gcnew System::Windows::Forms::Label());
			this->LetreiroPontuacaoJogador3 = (gcnew System::Windows::Forms::Label());
			this->LetreiroPontuacaoJogador2 = (gcnew System::Windows::Forms::Label());
			this->LetreiroPontuacaoJogador1 = (gcnew System::Windows::Forms::Label());
			this->LetreiroTempoJogador10 = (gcnew System::Windows::Forms::Label());
			this->LetreiroTempoJogador9 = (gcnew System::Windows::Forms::Label());
			this->LetreiroTempoJogador8 = (gcnew System::Windows::Forms::Label());
			this->LetreiroTempoJogador7 = (gcnew System::Windows::Forms::Label());
			this->LetreiroTempoJogador6 = (gcnew System::Windows::Forms::Label());
			this->LetreiroTempoJogador5 = (gcnew System::Windows::Forms::Label());
			this->LetreiroTempoJogador4 = (gcnew System::Windows::Forms::Label());
			this->LetreiroTempoJogador3 = (gcnew System::Windows::Forms::Label());
			this->LetreiroTempoJogador2 = (gcnew System::Windows::Forms::Label());
			this->LetreiroTempoJogador1 = (gcnew System::Windows::Forms::Label());
			this->LetreiroIndice1 = (gcnew System::Windows::Forms::Label());
			this->LetreiroIndice10 = (gcnew System::Windows::Forms::Label());
			this->LetreiroIndice9 = (gcnew System::Windows::Forms::Label());
			this->LetreiroIndice8 = (gcnew System::Windows::Forms::Label());
			this->LetreiroIndice7 = (gcnew System::Windows::Forms::Label());
			this->LetreiroIndice6 = (gcnew System::Windows::Forms::Label());
			this->LetreiroIndice5 = (gcnew System::Windows::Forms::Label());
			this->LetreiroIndice4 = (gcnew System::Windows::Forms::Label());
			this->LetreiroIndice3 = (gcnew System::Windows::Forms::Label());
			this->LetreiroIndice2 = (gcnew System::Windows::Forms::Label());
			this->LetreiroRanking = (gcnew System::Windows::Forms::Label());
			this->LetreiroNomeJogadorAtual = (gcnew System::Windows::Forms::Label());
			this->LetreiroIdadeJogadorAtual = (gcnew System::Windows::Forms::Label());
			this->LetreiroTempoJogadorAtual = (gcnew System::Windows::Forms::Label());
			this->LetreiroPontuacaoJogadorAtual = (gcnew System::Windows::Forms::Label());
			this->LetreiroNome = (gcnew System::Windows::Forms::Label());
			this->LetreiroIdade = (gcnew System::Windows::Forms::Label());
			this->LetreiroPontuacao = (gcnew System::Windows::Forms::Label());
			this->LetreiroTempo = (gcnew System::Windows::Forms::Label());
			this->BotaoGrafico = (gcnew System::Windows::Forms::Button());
			this->ImagemBotaoCinza = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemBotaoVerde = (gcnew System::Windows::Forms::PictureBox());
			this->BotaoVoltar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoCinza))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVerde))->BeginInit();
			this->SuspendLayout();
			// 
			// LetreiroNomeJogador1
			// 
			this->LetreiroNomeJogador1->AutoEllipsis = true;
			this->LetreiroNomeJogador1->BackColor = System::Drawing::Color::Lime;
			this->LetreiroNomeJogador1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LetreiroNomeJogador1->Location = System::Drawing::Point(249, 140);
			this->LetreiroNomeJogador1->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroNomeJogador1->Name = L"LetreiroNomeJogador1";
			this->LetreiroNomeJogador1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->LetreiroNomeJogador1->Size = System::Drawing::Size(248, 30);
			this->LetreiroNomeJogador1->TabIndex = 0;
			this->LetreiroNomeJogador1->Text = L"Nome";
			this->LetreiroNomeJogador1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LetreiroNomeJogador1->UseCompatibleTextRendering = true;
			// 
			// LetreiroNomeJogador2
			// 
			this->LetreiroNomeJogador2->AutoEllipsis = true;
			this->LetreiroNomeJogador2->BackColor = System::Drawing::Color::LimeGreen;
			this->LetreiroNomeJogador2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroNomeJogador2->Location = System::Drawing::Point(249, 180);
			this->LetreiroNomeJogador2->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroNomeJogador2->Name = L"LetreiroNomeJogador2";
			this->LetreiroNomeJogador2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->LetreiroNomeJogador2->Size = System::Drawing::Size(248, 30);
			this->LetreiroNomeJogador2->TabIndex = 1;
			this->LetreiroNomeJogador2->Text = L"Nome";
			this->LetreiroNomeJogador2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LetreiroNomeJogador2->UseCompatibleTextRendering = true;
			// 
			// LetreiroNomeJogador3
			// 
			this->LetreiroNomeJogador3->AutoEllipsis = true;
			this->LetreiroNomeJogador3->BackColor = System::Drawing::Color::LimeGreen;
			this->LetreiroNomeJogador3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroNomeJogador3->Location = System::Drawing::Point(249, 220);
			this->LetreiroNomeJogador3->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroNomeJogador3->Name = L"LetreiroNomeJogador3";
			this->LetreiroNomeJogador3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->LetreiroNomeJogador3->Size = System::Drawing::Size(248, 30);
			this->LetreiroNomeJogador3->TabIndex = 2;
			this->LetreiroNomeJogador3->Text = L"Nome";
			this->LetreiroNomeJogador3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LetreiroNomeJogador3->UseCompatibleTextRendering = true;
			// 
			// LetreiroNomeJogador4
			// 
			this->LetreiroNomeJogador4->AutoEllipsis = true;
			this->LetreiroNomeJogador4->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroNomeJogador4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroNomeJogador4->Location = System::Drawing::Point(249, 260);
			this->LetreiroNomeJogador4->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroNomeJogador4->Name = L"LetreiroNomeJogador4";
			this->LetreiroNomeJogador4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->LetreiroNomeJogador4->Size = System::Drawing::Size(248, 30);
			this->LetreiroNomeJogador4->TabIndex = 3;
			this->LetreiroNomeJogador4->Text = L"Nome";
			this->LetreiroNomeJogador4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LetreiroNomeJogador4->UseCompatibleTextRendering = true;
			// 
			// LetreiroNomeJogador5
			// 
			this->LetreiroNomeJogador5->AutoEllipsis = true;
			this->LetreiroNomeJogador5->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroNomeJogador5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroNomeJogador5->Location = System::Drawing::Point(249, 300);
			this->LetreiroNomeJogador5->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroNomeJogador5->Name = L"LetreiroNomeJogador5";
			this->LetreiroNomeJogador5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->LetreiroNomeJogador5->Size = System::Drawing::Size(248, 30);
			this->LetreiroNomeJogador5->TabIndex = 4;
			this->LetreiroNomeJogador5->Text = L"Nome";
			this->LetreiroNomeJogador5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LetreiroNomeJogador5->UseCompatibleTextRendering = true;
			// 
			// LetreiroNomeJogador6
			// 
			this->LetreiroNomeJogador6->AutoEllipsis = true;
			this->LetreiroNomeJogador6->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroNomeJogador6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroNomeJogador6->Location = System::Drawing::Point(249, 340);
			this->LetreiroNomeJogador6->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroNomeJogador6->Name = L"LetreiroNomeJogador6";
			this->LetreiroNomeJogador6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->LetreiroNomeJogador6->Size = System::Drawing::Size(248, 30);
			this->LetreiroNomeJogador6->TabIndex = 5;
			this->LetreiroNomeJogador6->Text = L"Nome";
			this->LetreiroNomeJogador6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LetreiroNomeJogador6->UseCompatibleTextRendering = true;
			// 
			// LetreiroNomeJogador7
			// 
			this->LetreiroNomeJogador7->AutoEllipsis = true;
			this->LetreiroNomeJogador7->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroNomeJogador7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroNomeJogador7->Location = System::Drawing::Point(249, 380);
			this->LetreiroNomeJogador7->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroNomeJogador7->Name = L"LetreiroNomeJogador7";
			this->LetreiroNomeJogador7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->LetreiroNomeJogador7->Size = System::Drawing::Size(248, 30);
			this->LetreiroNomeJogador7->TabIndex = 6;
			this->LetreiroNomeJogador7->Text = L"Nome";
			this->LetreiroNomeJogador7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LetreiroNomeJogador7->UseCompatibleTextRendering = true;
			// 
			// LetreiroNomeJogador8
			// 
			this->LetreiroNomeJogador8->AutoEllipsis = true;
			this->LetreiroNomeJogador8->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroNomeJogador8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroNomeJogador8->Location = System::Drawing::Point(249, 420);
			this->LetreiroNomeJogador8->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroNomeJogador8->Name = L"LetreiroNomeJogador8";
			this->LetreiroNomeJogador8->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->LetreiroNomeJogador8->Size = System::Drawing::Size(248, 30);
			this->LetreiroNomeJogador8->TabIndex = 7;
			this->LetreiroNomeJogador8->Text = L"Nome";
			this->LetreiroNomeJogador8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LetreiroNomeJogador8->UseCompatibleTextRendering = true;
			// 
			// LetreiroNomeJogador9
			// 
			this->LetreiroNomeJogador9->AutoEllipsis = true;
			this->LetreiroNomeJogador9->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroNomeJogador9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroNomeJogador9->Location = System::Drawing::Point(249, 460);
			this->LetreiroNomeJogador9->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroNomeJogador9->Name = L"LetreiroNomeJogador9";
			this->LetreiroNomeJogador9->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->LetreiroNomeJogador9->Size = System::Drawing::Size(248, 30);
			this->LetreiroNomeJogador9->TabIndex = 8;
			this->LetreiroNomeJogador9->Text = L"Nome";
			this->LetreiroNomeJogador9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LetreiroNomeJogador9->UseCompatibleTextRendering = true;
			// 
			// LetreiroNomeJogador10
			// 
			this->LetreiroNomeJogador10->AutoEllipsis = true;
			this->LetreiroNomeJogador10->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroNomeJogador10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroNomeJogador10->Location = System::Drawing::Point(249, 500);
			this->LetreiroNomeJogador10->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroNomeJogador10->Name = L"LetreiroNomeJogador10";
			this->LetreiroNomeJogador10->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->LetreiroNomeJogador10->Size = System::Drawing::Size(248, 30);
			this->LetreiroNomeJogador10->TabIndex = 9;
			this->LetreiroNomeJogador10->Text = L"Nome";
			this->LetreiroNomeJogador10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LetreiroNomeJogador10->UseCompatibleTextRendering = true;
			// 
			// LetreiroIdadeJogador10
			// 
			this->LetreiroIdadeJogador10->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroIdadeJogador10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroIdadeJogador10->Location = System::Drawing::Point(507, 500);
			this->LetreiroIdadeJogador10->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroIdadeJogador10->Name = L"LetreiroIdadeJogador10";
			this->LetreiroIdadeJogador10->Size = System::Drawing::Size(81, 30);
			this->LetreiroIdadeJogador10->TabIndex = 19;
			this->LetreiroIdadeJogador10->Text = L"Idade";
			this->LetreiroIdadeJogador10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroIdadeJogador9
			// 
			this->LetreiroIdadeJogador9->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroIdadeJogador9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroIdadeJogador9->Location = System::Drawing::Point(507, 460);
			this->LetreiroIdadeJogador9->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroIdadeJogador9->Name = L"LetreiroIdadeJogador9";
			this->LetreiroIdadeJogador9->Size = System::Drawing::Size(81, 30);
			this->LetreiroIdadeJogador9->TabIndex = 18;
			this->LetreiroIdadeJogador9->Text = L"Idade";
			this->LetreiroIdadeJogador9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroIdadeJogador8
			// 
			this->LetreiroIdadeJogador8->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroIdadeJogador8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroIdadeJogador8->Location = System::Drawing::Point(507, 420);
			this->LetreiroIdadeJogador8->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroIdadeJogador8->Name = L"LetreiroIdadeJogador8";
			this->LetreiroIdadeJogador8->Size = System::Drawing::Size(81, 30);
			this->LetreiroIdadeJogador8->TabIndex = 17;
			this->LetreiroIdadeJogador8->Text = L"Idade";
			this->LetreiroIdadeJogador8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroIdadeJogador7
			// 
			this->LetreiroIdadeJogador7->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroIdadeJogador7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroIdadeJogador7->Location = System::Drawing::Point(507, 380);
			this->LetreiroIdadeJogador7->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroIdadeJogador7->Name = L"LetreiroIdadeJogador7";
			this->LetreiroIdadeJogador7->Size = System::Drawing::Size(81, 30);
			this->LetreiroIdadeJogador7->TabIndex = 16;
			this->LetreiroIdadeJogador7->Text = L"Idade";
			this->LetreiroIdadeJogador7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroIdadeJogador6
			// 
			this->LetreiroIdadeJogador6->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroIdadeJogador6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroIdadeJogador6->Location = System::Drawing::Point(507, 340);
			this->LetreiroIdadeJogador6->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroIdadeJogador6->Name = L"LetreiroIdadeJogador6";
			this->LetreiroIdadeJogador6->Size = System::Drawing::Size(81, 30);
			this->LetreiroIdadeJogador6->TabIndex = 15;
			this->LetreiroIdadeJogador6->Text = L"Idade";
			this->LetreiroIdadeJogador6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroIdadeJogador5
			// 
			this->LetreiroIdadeJogador5->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroIdadeJogador5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroIdadeJogador5->Location = System::Drawing::Point(507, 300);
			this->LetreiroIdadeJogador5->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroIdadeJogador5->Name = L"LetreiroIdadeJogador5";
			this->LetreiroIdadeJogador5->Size = System::Drawing::Size(81, 30);
			this->LetreiroIdadeJogador5->TabIndex = 14;
			this->LetreiroIdadeJogador5->Text = L"Idade";
			this->LetreiroIdadeJogador5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroIdadeJogador4
			// 
			this->LetreiroIdadeJogador4->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroIdadeJogador4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroIdadeJogador4->Location = System::Drawing::Point(507, 260);
			this->LetreiroIdadeJogador4->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroIdadeJogador4->Name = L"LetreiroIdadeJogador4";
			this->LetreiroIdadeJogador4->Size = System::Drawing::Size(81, 30);
			this->LetreiroIdadeJogador4->TabIndex = 13;
			this->LetreiroIdadeJogador4->Text = L"Idade";
			this->LetreiroIdadeJogador4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroIdadeJogador3
			// 
			this->LetreiroIdadeJogador3->BackColor = System::Drawing::Color::LimeGreen;
			this->LetreiroIdadeJogador3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroIdadeJogador3->Location = System::Drawing::Point(507, 220);
			this->LetreiroIdadeJogador3->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroIdadeJogador3->Name = L"LetreiroIdadeJogador3";
			this->LetreiroIdadeJogador3->Size = System::Drawing::Size(81, 30);
			this->LetreiroIdadeJogador3->TabIndex = 12;
			this->LetreiroIdadeJogador3->Text = L"Idade";
			this->LetreiroIdadeJogador3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroIdadeJogador2
			// 
			this->LetreiroIdadeJogador2->BackColor = System::Drawing::Color::LimeGreen;
			this->LetreiroIdadeJogador2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroIdadeJogador2->Location = System::Drawing::Point(507, 180);
			this->LetreiroIdadeJogador2->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroIdadeJogador2->Name = L"LetreiroIdadeJogador2";
			this->LetreiroIdadeJogador2->Size = System::Drawing::Size(81, 30);
			this->LetreiroIdadeJogador2->TabIndex = 11;
			this->LetreiroIdadeJogador2->Text = L"Idade";
			this->LetreiroIdadeJogador2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroIdadeJogador1
			// 
			this->LetreiroIdadeJogador1->BackColor = System::Drawing::Color::Lime;
			this->LetreiroIdadeJogador1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, System::Drawing::FontStyle::Bold));
			this->LetreiroIdadeJogador1->Location = System::Drawing::Point(507, 140);
			this->LetreiroIdadeJogador1->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroIdadeJogador1->Name = L"LetreiroIdadeJogador1";
			this->LetreiroIdadeJogador1->Size = System::Drawing::Size(81, 30);
			this->LetreiroIdadeJogador1->TabIndex = 10;
			this->LetreiroIdadeJogador1->Text = L"Idade";
			this->LetreiroIdadeJogador1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroPontuacaoJogador10
			// 
			this->LetreiroPontuacaoJogador10->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroPontuacaoJogador10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroPontuacaoJogador10->Location = System::Drawing::Point(746, 500);
			this->LetreiroPontuacaoJogador10->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroPontuacaoJogador10->Name = L"LetreiroPontuacaoJogador10";
			this->LetreiroPontuacaoJogador10->Size = System::Drawing::Size(352, 30);
			this->LetreiroPontuacaoJogador10->TabIndex = 39;
			this->LetreiroPontuacaoJogador10->Text = L"Pontuação";
			this->LetreiroPontuacaoJogador10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LetreiroPontuacaoJogador10->UseCompatibleTextRendering = true;
			// 
			// LetreiroPontuacaoJogador9
			// 
			this->LetreiroPontuacaoJogador9->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroPontuacaoJogador9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroPontuacaoJogador9->Location = System::Drawing::Point(746, 460);
			this->LetreiroPontuacaoJogador9->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroPontuacaoJogador9->Name = L"LetreiroPontuacaoJogador9";
			this->LetreiroPontuacaoJogador9->Size = System::Drawing::Size(352, 30);
			this->LetreiroPontuacaoJogador9->TabIndex = 38;
			this->LetreiroPontuacaoJogador9->Text = L"Pontuação";
			this->LetreiroPontuacaoJogador9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroPontuacaoJogador8
			// 
			this->LetreiroPontuacaoJogador8->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroPontuacaoJogador8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroPontuacaoJogador8->Location = System::Drawing::Point(746, 420);
			this->LetreiroPontuacaoJogador8->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroPontuacaoJogador8->Name = L"LetreiroPontuacaoJogador8";
			this->LetreiroPontuacaoJogador8->Size = System::Drawing::Size(352, 30);
			this->LetreiroPontuacaoJogador8->TabIndex = 37;
			this->LetreiroPontuacaoJogador8->Text = L"Pontuação";
			this->LetreiroPontuacaoJogador8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroPontuacaoJogador7
			// 
			this->LetreiroPontuacaoJogador7->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroPontuacaoJogador7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroPontuacaoJogador7->Location = System::Drawing::Point(746, 380);
			this->LetreiroPontuacaoJogador7->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroPontuacaoJogador7->Name = L"LetreiroPontuacaoJogador7";
			this->LetreiroPontuacaoJogador7->Size = System::Drawing::Size(352, 30);
			this->LetreiroPontuacaoJogador7->TabIndex = 36;
			this->LetreiroPontuacaoJogador7->Text = L"Pontuação";
			this->LetreiroPontuacaoJogador7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroPontuacaoJogador6
			// 
			this->LetreiroPontuacaoJogador6->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroPontuacaoJogador6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroPontuacaoJogador6->Location = System::Drawing::Point(746, 340);
			this->LetreiroPontuacaoJogador6->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroPontuacaoJogador6->Name = L"LetreiroPontuacaoJogador6";
			this->LetreiroPontuacaoJogador6->Size = System::Drawing::Size(352, 30);
			this->LetreiroPontuacaoJogador6->TabIndex = 35;
			this->LetreiroPontuacaoJogador6->Text = L"Pontuação";
			this->LetreiroPontuacaoJogador6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroPontuacaoJogador5
			// 
			this->LetreiroPontuacaoJogador5->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroPontuacaoJogador5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroPontuacaoJogador5->Location = System::Drawing::Point(746, 300);
			this->LetreiroPontuacaoJogador5->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroPontuacaoJogador5->Name = L"LetreiroPontuacaoJogador5";
			this->LetreiroPontuacaoJogador5->Size = System::Drawing::Size(352, 30);
			this->LetreiroPontuacaoJogador5->TabIndex = 34;
			this->LetreiroPontuacaoJogador5->Text = L"Pontuação";
			this->LetreiroPontuacaoJogador5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroPontuacaoJogador4
			// 
			this->LetreiroPontuacaoJogador4->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroPontuacaoJogador4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroPontuacaoJogador4->Location = System::Drawing::Point(746, 260);
			this->LetreiroPontuacaoJogador4->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroPontuacaoJogador4->Name = L"LetreiroPontuacaoJogador4";
			this->LetreiroPontuacaoJogador4->Size = System::Drawing::Size(352, 30);
			this->LetreiroPontuacaoJogador4->TabIndex = 33;
			this->LetreiroPontuacaoJogador4->Text = L"Pontuação";
			this->LetreiroPontuacaoJogador4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroPontuacaoJogador3
			// 
			this->LetreiroPontuacaoJogador3->BackColor = System::Drawing::Color::LimeGreen;
			this->LetreiroPontuacaoJogador3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroPontuacaoJogador3->Location = System::Drawing::Point(746, 220);
			this->LetreiroPontuacaoJogador3->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroPontuacaoJogador3->Name = L"LetreiroPontuacaoJogador3";
			this->LetreiroPontuacaoJogador3->Size = System::Drawing::Size(352, 30);
			this->LetreiroPontuacaoJogador3->TabIndex = 32;
			this->LetreiroPontuacaoJogador3->Text = L"Pontuação";
			this->LetreiroPontuacaoJogador3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroPontuacaoJogador2
			// 
			this->LetreiroPontuacaoJogador2->BackColor = System::Drawing::Color::LimeGreen;
			this->LetreiroPontuacaoJogador2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroPontuacaoJogador2->Location = System::Drawing::Point(746, 180);
			this->LetreiroPontuacaoJogador2->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroPontuacaoJogador2->Name = L"LetreiroPontuacaoJogador2";
			this->LetreiroPontuacaoJogador2->Size = System::Drawing::Size(352, 30);
			this->LetreiroPontuacaoJogador2->TabIndex = 31;
			this->LetreiroPontuacaoJogador2->Text = L"Pontuação";
			this->LetreiroPontuacaoJogador2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroPontuacaoJogador1
			// 
			this->LetreiroPontuacaoJogador1->BackColor = System::Drawing::Color::Lime;
			this->LetreiroPontuacaoJogador1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, System::Drawing::FontStyle::Bold));
			this->LetreiroPontuacaoJogador1->Location = System::Drawing::Point(746, 140);
			this->LetreiroPontuacaoJogador1->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroPontuacaoJogador1->Name = L"LetreiroPontuacaoJogador1";
			this->LetreiroPontuacaoJogador1->Size = System::Drawing::Size(352, 30);
			this->LetreiroPontuacaoJogador1->TabIndex = 30;
			this->LetreiroPontuacaoJogador1->Text = L"Pontuação";
			this->LetreiroPontuacaoJogador1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroTempoJogador10
			// 
			this->LetreiroTempoJogador10->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroTempoJogador10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroTempoJogador10->Location = System::Drawing::Point(598, 500);
			this->LetreiroTempoJogador10->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroTempoJogador10->Name = L"LetreiroTempoJogador10";
			this->LetreiroTempoJogador10->Size = System::Drawing::Size(138, 30);
			this->LetreiroTempoJogador10->TabIndex = 29;
			this->LetreiroTempoJogador10->Text = L"Tempo";
			this->LetreiroTempoJogador10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroTempoJogador9
			// 
			this->LetreiroTempoJogador9->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroTempoJogador9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroTempoJogador9->Location = System::Drawing::Point(598, 460);
			this->LetreiroTempoJogador9->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroTempoJogador9->Name = L"LetreiroTempoJogador9";
			this->LetreiroTempoJogador9->Size = System::Drawing::Size(138, 30);
			this->LetreiroTempoJogador9->TabIndex = 28;
			this->LetreiroTempoJogador9->Text = L"Tempo";
			this->LetreiroTempoJogador9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroTempoJogador8
			// 
			this->LetreiroTempoJogador8->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroTempoJogador8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroTempoJogador8->Location = System::Drawing::Point(598, 420);
			this->LetreiroTempoJogador8->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroTempoJogador8->Name = L"LetreiroTempoJogador8";
			this->LetreiroTempoJogador8->Size = System::Drawing::Size(138, 30);
			this->LetreiroTempoJogador8->TabIndex = 27;
			this->LetreiroTempoJogador8->Text = L"Tempo";
			this->LetreiroTempoJogador8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroTempoJogador7
			// 
			this->LetreiroTempoJogador7->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroTempoJogador7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroTempoJogador7->Location = System::Drawing::Point(598, 380);
			this->LetreiroTempoJogador7->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroTempoJogador7->Name = L"LetreiroTempoJogador7";
			this->LetreiroTempoJogador7->Size = System::Drawing::Size(138, 30);
			this->LetreiroTempoJogador7->TabIndex = 26;
			this->LetreiroTempoJogador7->Text = L"Tempo";
			this->LetreiroTempoJogador7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroTempoJogador6
			// 
			this->LetreiroTempoJogador6->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroTempoJogador6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroTempoJogador6->Location = System::Drawing::Point(598, 340);
			this->LetreiroTempoJogador6->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroTempoJogador6->Name = L"LetreiroTempoJogador6";
			this->LetreiroTempoJogador6->Size = System::Drawing::Size(138, 30);
			this->LetreiroTempoJogador6->TabIndex = 25;
			this->LetreiroTempoJogador6->Text = L"Tempo";
			this->LetreiroTempoJogador6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroTempoJogador5
			// 
			this->LetreiroTempoJogador5->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroTempoJogador5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroTempoJogador5->Location = System::Drawing::Point(598, 300);
			this->LetreiroTempoJogador5->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroTempoJogador5->Name = L"LetreiroTempoJogador5";
			this->LetreiroTempoJogador5->Size = System::Drawing::Size(138, 30);
			this->LetreiroTempoJogador5->TabIndex = 24;
			this->LetreiroTempoJogador5->Text = L"Tempo";
			this->LetreiroTempoJogador5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroTempoJogador4
			// 
			this->LetreiroTempoJogador4->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroTempoJogador4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroTempoJogador4->Location = System::Drawing::Point(598, 260);
			this->LetreiroTempoJogador4->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroTempoJogador4->Name = L"LetreiroTempoJogador4";
			this->LetreiroTempoJogador4->Size = System::Drawing::Size(138, 30);
			this->LetreiroTempoJogador4->TabIndex = 23;
			this->LetreiroTempoJogador4->Text = L"Tempo";
			this->LetreiroTempoJogador4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroTempoJogador3
			// 
			this->LetreiroTempoJogador3->BackColor = System::Drawing::Color::LimeGreen;
			this->LetreiroTempoJogador3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroTempoJogador3->Location = System::Drawing::Point(598, 220);
			this->LetreiroTempoJogador3->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroTempoJogador3->Name = L"LetreiroTempoJogador3";
			this->LetreiroTempoJogador3->Size = System::Drawing::Size(138, 30);
			this->LetreiroTempoJogador3->TabIndex = 22;
			this->LetreiroTempoJogador3->Text = L"Tempo";
			this->LetreiroTempoJogador3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroTempoJogador2
			// 
			this->LetreiroTempoJogador2->BackColor = System::Drawing::Color::LimeGreen;
			this->LetreiroTempoJogador2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroTempoJogador2->Location = System::Drawing::Point(598, 180);
			this->LetreiroTempoJogador2->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroTempoJogador2->Name = L"LetreiroTempoJogador2";
			this->LetreiroTempoJogador2->Size = System::Drawing::Size(138, 30);
			this->LetreiroTempoJogador2->TabIndex = 21;
			this->LetreiroTempoJogador2->Text = L"Tempo";
			this->LetreiroTempoJogador2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroTempoJogador1
			// 
			this->LetreiroTempoJogador1->BackColor = System::Drawing::Color::Lime;
			this->LetreiroTempoJogador1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, System::Drawing::FontStyle::Bold));
			this->LetreiroTempoJogador1->Location = System::Drawing::Point(598, 140);
			this->LetreiroTempoJogador1->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroTempoJogador1->Name = L"LetreiroTempoJogador1";
			this->LetreiroTempoJogador1->Size = System::Drawing::Size(138, 30);
			this->LetreiroTempoJogador1->TabIndex = 20;
			this->LetreiroTempoJogador1->Text = L"Tempo";
			this->LetreiroTempoJogador1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroIndice1
			// 
			this->LetreiroIndice1->AutoEllipsis = true;
			this->LetreiroIndice1->BackColor = System::Drawing::Color::Lime;
			this->LetreiroIndice1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, System::Drawing::FontStyle::Bold));
			this->LetreiroIndice1->Location = System::Drawing::Point(172, 140);
			this->LetreiroIndice1->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroIndice1->Name = L"LetreiroIndice1";
			this->LetreiroIndice1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->LetreiroIndice1->Size = System::Drawing::Size(67, 30);
			this->LetreiroIndice1->TabIndex = 49;
			this->LetreiroIndice1->Text = L"1º";
			this->LetreiroIndice1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LetreiroIndice1->UseCompatibleTextRendering = true;
			// 
			// LetreiroIndice10
			// 
			this->LetreiroIndice10->AutoEllipsis = true;
			this->LetreiroIndice10->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroIndice10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroIndice10->Location = System::Drawing::Point(172, 500);
			this->LetreiroIndice10->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroIndice10->Name = L"LetreiroIndice10";
			this->LetreiroIndice10->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->LetreiroIndice10->Size = System::Drawing::Size(67, 30);
			this->LetreiroIndice10->TabIndex = 48;
			this->LetreiroIndice10->Text = L"10º";
			this->LetreiroIndice10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LetreiroIndice10->UseCompatibleTextRendering = true;
			// 
			// LetreiroIndice9
			// 
			this->LetreiroIndice9->AutoEllipsis = true;
			this->LetreiroIndice9->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroIndice9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroIndice9->Location = System::Drawing::Point(172, 460);
			this->LetreiroIndice9->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroIndice9->Name = L"LetreiroIndice9";
			this->LetreiroIndice9->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->LetreiroIndice9->Size = System::Drawing::Size(67, 30);
			this->LetreiroIndice9->TabIndex = 47;
			this->LetreiroIndice9->Text = L"9º";
			this->LetreiroIndice9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LetreiroIndice9->UseCompatibleTextRendering = true;
			// 
			// LetreiroIndice8
			// 
			this->LetreiroIndice8->AutoEllipsis = true;
			this->LetreiroIndice8->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroIndice8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroIndice8->Location = System::Drawing::Point(172, 420);
			this->LetreiroIndice8->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroIndice8->Name = L"LetreiroIndice8";
			this->LetreiroIndice8->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->LetreiroIndice8->Size = System::Drawing::Size(67, 30);
			this->LetreiroIndice8->TabIndex = 46;
			this->LetreiroIndice8->Text = L"8º";
			this->LetreiroIndice8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LetreiroIndice8->UseCompatibleTextRendering = true;
			// 
			// LetreiroIndice7
			// 
			this->LetreiroIndice7->AutoEllipsis = true;
			this->LetreiroIndice7->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroIndice7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroIndice7->Location = System::Drawing::Point(172, 380);
			this->LetreiroIndice7->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroIndice7->Name = L"LetreiroIndice7";
			this->LetreiroIndice7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->LetreiroIndice7->Size = System::Drawing::Size(67, 30);
			this->LetreiroIndice7->TabIndex = 45;
			this->LetreiroIndice7->Text = L"7º";
			this->LetreiroIndice7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LetreiroIndice7->UseCompatibleTextRendering = true;
			// 
			// LetreiroIndice6
			// 
			this->LetreiroIndice6->AutoEllipsis = true;
			this->LetreiroIndice6->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroIndice6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroIndice6->Location = System::Drawing::Point(172, 340);
			this->LetreiroIndice6->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroIndice6->Name = L"LetreiroIndice6";
			this->LetreiroIndice6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->LetreiroIndice6->Size = System::Drawing::Size(67, 30);
			this->LetreiroIndice6->TabIndex = 44;
			this->LetreiroIndice6->Text = L"6º";
			this->LetreiroIndice6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LetreiroIndice6->UseCompatibleTextRendering = true;
			// 
			// LetreiroIndice5
			// 
			this->LetreiroIndice5->AutoEllipsis = true;
			this->LetreiroIndice5->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroIndice5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroIndice5->Location = System::Drawing::Point(172, 300);
			this->LetreiroIndice5->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroIndice5->Name = L"LetreiroIndice5";
			this->LetreiroIndice5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->LetreiroIndice5->Size = System::Drawing::Size(67, 30);
			this->LetreiroIndice5->TabIndex = 43;
			this->LetreiroIndice5->Text = L"5º";
			this->LetreiroIndice5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LetreiroIndice5->UseCompatibleTextRendering = true;
			// 
			// LetreiroIndice4
			// 
			this->LetreiroIndice4->AutoEllipsis = true;
			this->LetreiroIndice4->BackColor = System::Drawing::Color::RoyalBlue;
			this->LetreiroIndice4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroIndice4->Location = System::Drawing::Point(172, 260);
			this->LetreiroIndice4->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroIndice4->Name = L"LetreiroIndice4";
			this->LetreiroIndice4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->LetreiroIndice4->Size = System::Drawing::Size(67, 30);
			this->LetreiroIndice4->TabIndex = 42;
			this->LetreiroIndice4->Text = L"4º";
			this->LetreiroIndice4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LetreiroIndice4->UseCompatibleTextRendering = true;
			// 
			// LetreiroIndice3
			// 
			this->LetreiroIndice3->AutoEllipsis = true;
			this->LetreiroIndice3->BackColor = System::Drawing::Color::LimeGreen;
			this->LetreiroIndice3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroIndice3->Location = System::Drawing::Point(172, 220);
			this->LetreiroIndice3->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroIndice3->Name = L"LetreiroIndice3";
			this->LetreiroIndice3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->LetreiroIndice3->Size = System::Drawing::Size(67, 30);
			this->LetreiroIndice3->TabIndex = 41;
			this->LetreiroIndice3->Text = L"3º";
			this->LetreiroIndice3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LetreiroIndice3->UseCompatibleTextRendering = true;
			// 
			// LetreiroIndice2
			// 
			this->LetreiroIndice2->AutoEllipsis = true;
			this->LetreiroIndice2->BackColor = System::Drawing::Color::LimeGreen;
			this->LetreiroIndice2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroIndice2->Location = System::Drawing::Point(172, 180);
			this->LetreiroIndice2->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroIndice2->Name = L"LetreiroIndice2";
			this->LetreiroIndice2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->LetreiroIndice2->Size = System::Drawing::Size(67, 30);
			this->LetreiroIndice2->TabIndex = 40;
			this->LetreiroIndice2->Text = L"2º";
			this->LetreiroIndice2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LetreiroIndice2->UseCompatibleTextRendering = true;
			// 
			// LetreiroRanking
			// 
			this->LetreiroRanking->BackColor = System::Drawing::Color::Transparent;
			this->LetreiroRanking->Font = (gcnew System::Drawing::Font(L"Century Gothic", 40));
			this->LetreiroRanking->Location = System::Drawing::Point(454, -28);
			this->LetreiroRanking->Name = L"LetreiroRanking";
			this->LetreiroRanking->Size = System::Drawing::Size(380, 123);
			this->LetreiroRanking->TabIndex = 50;
			this->LetreiroRanking->Text = L"Ranking";
			this->LetreiroRanking->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroNomeJogadorAtual
			// 
			this->LetreiroNomeJogadorAtual->AutoEllipsis = true;
			this->LetreiroNomeJogadorAtual->BackColor = System::Drawing::Color::DarkGray;
			this->LetreiroNomeJogadorAtual->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroNomeJogadorAtual->Location = System::Drawing::Point(249, 560);
			this->LetreiroNomeJogadorAtual->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroNomeJogadorAtual->Name = L"LetreiroNomeJogadorAtual";
			this->LetreiroNomeJogadorAtual->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->LetreiroNomeJogadorAtual->Size = System::Drawing::Size(248, 30);
			this->LetreiroNomeJogadorAtual->TabIndex = 51;
			this->LetreiroNomeJogadorAtual->Text = L"Nome";
			this->LetreiroNomeJogadorAtual->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LetreiroNomeJogadorAtual->UseCompatibleTextRendering = true;
			this->LetreiroNomeJogadorAtual->Visible = false;
			// 
			// LetreiroIdadeJogadorAtual
			// 
			this->LetreiroIdadeJogadorAtual->BackColor = System::Drawing::Color::DarkGray;
			this->LetreiroIdadeJogadorAtual->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroIdadeJogadorAtual->Location = System::Drawing::Point(507, 560);
			this->LetreiroIdadeJogadorAtual->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroIdadeJogadorAtual->Name = L"LetreiroIdadeJogadorAtual";
			this->LetreiroIdadeJogadorAtual->Size = System::Drawing::Size(81, 30);
			this->LetreiroIdadeJogadorAtual->TabIndex = 52;
			this->LetreiroIdadeJogadorAtual->Text = L"Idade";
			this->LetreiroIdadeJogadorAtual->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LetreiroIdadeJogadorAtual->Visible = false;
			// 
			// LetreiroTempoJogadorAtual
			// 
			this->LetreiroTempoJogadorAtual->BackColor = System::Drawing::Color::DarkGray;
			this->LetreiroTempoJogadorAtual->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroTempoJogadorAtual->Location = System::Drawing::Point(598, 560);
			this->LetreiroTempoJogadorAtual->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroTempoJogadorAtual->Name = L"LetreiroTempoJogadorAtual";
			this->LetreiroTempoJogadorAtual->Size = System::Drawing::Size(138, 30);
			this->LetreiroTempoJogadorAtual->TabIndex = 53;
			this->LetreiroTempoJogadorAtual->Text = L"Tempo";
			this->LetreiroTempoJogadorAtual->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LetreiroTempoJogadorAtual->Visible = false;
			// 
			// LetreiroPontuacaoJogadorAtual
			// 
			this->LetreiroPontuacaoJogadorAtual->BackColor = System::Drawing::Color::DarkGray;
			this->LetreiroPontuacaoJogadorAtual->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroPontuacaoJogadorAtual->Location = System::Drawing::Point(746, 560);
			this->LetreiroPontuacaoJogadorAtual->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroPontuacaoJogadorAtual->Name = L"LetreiroPontuacaoJogadorAtual";
			this->LetreiroPontuacaoJogadorAtual->Size = System::Drawing::Size(352, 30);
			this->LetreiroPontuacaoJogadorAtual->TabIndex = 54;
			this->LetreiroPontuacaoJogadorAtual->Text = L"Pontuação";
			this->LetreiroPontuacaoJogadorAtual->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LetreiroPontuacaoJogadorAtual->UseCompatibleTextRendering = true;
			this->LetreiroPontuacaoJogadorAtual->Visible = false;
			// 
			// LetreiroNome
			// 
			this->LetreiroNome->AutoEllipsis = true;
			this->LetreiroNome->BackColor = System::Drawing::Color::DarkGray;
			this->LetreiroNome->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroNome->Location = System::Drawing::Point(249, 100);
			this->LetreiroNome->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroNome->Name = L"LetreiroNome";
			this->LetreiroNome->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->LetreiroNome->Size = System::Drawing::Size(248, 30);
			this->LetreiroNome->TabIndex = 55;
			this->LetreiroNome->Text = L"Nome";
			this->LetreiroNome->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LetreiroNome->UseCompatibleTextRendering = true;
			// 
			// LetreiroIdade
			// 
			this->LetreiroIdade->BackColor = System::Drawing::Color::DarkGray;
			this->LetreiroIdade->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroIdade->Location = System::Drawing::Point(507, 100);
			this->LetreiroIdade->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroIdade->Name = L"LetreiroIdade";
			this->LetreiroIdade->Size = System::Drawing::Size(81, 30);
			this->LetreiroIdade->TabIndex = 56;
			this->LetreiroIdade->Text = L"Idade";
			this->LetreiroIdade->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroPontuacao
			// 
			this->LetreiroPontuacao->BackColor = System::Drawing::Color::DarkGray;
			this->LetreiroPontuacao->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroPontuacao->Location = System::Drawing::Point(746, 100);
			this->LetreiroPontuacao->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroPontuacao->Name = L"LetreiroPontuacao";
			this->LetreiroPontuacao->Size = System::Drawing::Size(352, 30);
			this->LetreiroPontuacao->TabIndex = 58;
			this->LetreiroPontuacao->Text = L"Pontuação";
			this->LetreiroPontuacao->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LetreiroTempo
			// 
			this->LetreiroTempo->BackColor = System::Drawing::Color::DarkGray;
			this->LetreiroTempo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15));
			this->LetreiroTempo->Location = System::Drawing::Point(598, 100);
			this->LetreiroTempo->Margin = System::Windows::Forms::Padding(5);
			this->LetreiroTempo->Name = L"LetreiroTempo";
			this->LetreiroTempo->Size = System::Drawing::Size(138, 30);
			this->LetreiroTempo->TabIndex = 59;
			this->LetreiroTempo->Text = L"Tempo";
			this->LetreiroTempo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->BotaoGrafico->ForeColor = System::Drawing::Color::Black;
			this->BotaoGrafico->Location = System::Drawing::Point(1075, 604);
			this->BotaoGrafico->Margin = System::Windows::Forms::Padding(10);
			this->BotaoGrafico->Name = L"BotaoGrafico";
			this->BotaoGrafico->Size = System::Drawing::Size(186, 50);
			this->BotaoGrafico->TabIndex = 60;
			this->BotaoGrafico->Text = L"Grafico";
			this->BotaoGrafico->UseCompatibleTextRendering = true;
			this->BotaoGrafico->UseVisualStyleBackColor = false;
			this->BotaoGrafico->Click += gcnew System::EventHandler(this, &TelaDeRank::BotaoGrafico_Click);
			this->BotaoGrafico->MouseLeave += gcnew System::EventHandler(this, &TelaDeRank::BotaoGrafico_MouseLeave);
			this->BotaoGrafico->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaDeRank::BotaoGrafico_MouseMove);
			// 
			// ImagemBotaoCinza
			// 
			this->ImagemBotaoCinza->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoCinza.Image")));
			this->ImagemBotaoCinza->Location = System::Drawing::Point(230, 33);
			this->ImagemBotaoCinza->Name = L"ImagemBotaoCinza";
			this->ImagemBotaoCinza->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoCinza->TabIndex = 73;
			this->ImagemBotaoCinza->TabStop = false;
			this->ImagemBotaoCinza->Visible = false;
			// 
			// ImagemBotaoVerde
			// 
			this->ImagemBotaoVerde->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoVerde.Image")));
			this->ImagemBotaoVerde->Location = System::Drawing::Point(182, 33);
			this->ImagemBotaoVerde->Name = L"ImagemBotaoVerde";
			this->ImagemBotaoVerde->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoVerde->TabIndex = 72;
			this->ImagemBotaoVerde->TabStop = false;
			this->ImagemBotaoVerde->Visible = false;
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
			this->BotaoVoltar->ForeColor = System::Drawing::Color::Black;
			this->BotaoVoltar->Location = System::Drawing::Point(19, 592);
			this->BotaoVoltar->Margin = System::Windows::Forms::Padding(10);
			this->BotaoVoltar->Name = L"BotaoVoltar";
			this->BotaoVoltar->Size = System::Drawing::Size(186, 50);
			this->BotaoVoltar->TabIndex = 74;
			this->BotaoVoltar->Text = L"Voltar";
			this->BotaoVoltar->UseCompatibleTextRendering = true;
			this->BotaoVoltar->UseVisualStyleBackColor = false;
			this->BotaoVoltar->Visible = false;
			this->BotaoVoltar->Click += gcnew System::EventHandler(this, &TelaDeRank::BotaoVoltar_Click);
			this->BotaoVoltar->MouseLeave += gcnew System::EventHandler(this, &TelaDeRank::BotaoVoltar_MouseLeave);
			this->BotaoVoltar->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaDeRank::BotaoVoltar_MouseMove);
			// 
			// TelaDeRank
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(1264, 661);
			this->Controls->Add(this->BotaoVoltar);
			this->Controls->Add(this->ImagemBotaoCinza);
			this->Controls->Add(this->ImagemBotaoVerde);
			this->Controls->Add(this->BotaoGrafico);
			this->Controls->Add(this->LetreiroTempo);
			this->Controls->Add(this->LetreiroPontuacao);
			this->Controls->Add(this->LetreiroIdade);
			this->Controls->Add(this->LetreiroNome);
			this->Controls->Add(this->LetreiroPontuacaoJogadorAtual);
			this->Controls->Add(this->LetreiroTempoJogadorAtual);
			this->Controls->Add(this->LetreiroIdadeJogadorAtual);
			this->Controls->Add(this->LetreiroNomeJogadorAtual);
			this->Controls->Add(this->LetreiroRanking);
			this->Controls->Add(this->LetreiroIndice1);
			this->Controls->Add(this->LetreiroIndice10);
			this->Controls->Add(this->LetreiroIndice9);
			this->Controls->Add(this->LetreiroIndice8);
			this->Controls->Add(this->LetreiroIndice7);
			this->Controls->Add(this->LetreiroIndice6);
			this->Controls->Add(this->LetreiroIndice5);
			this->Controls->Add(this->LetreiroIndice4);
			this->Controls->Add(this->LetreiroIndice3);
			this->Controls->Add(this->LetreiroIndice2);
			this->Controls->Add(this->LetreiroPontuacaoJogador10);
			this->Controls->Add(this->LetreiroPontuacaoJogador9);
			this->Controls->Add(this->LetreiroPontuacaoJogador8);
			this->Controls->Add(this->LetreiroPontuacaoJogador7);
			this->Controls->Add(this->LetreiroPontuacaoJogador6);
			this->Controls->Add(this->LetreiroPontuacaoJogador5);
			this->Controls->Add(this->LetreiroPontuacaoJogador4);
			this->Controls->Add(this->LetreiroPontuacaoJogador3);
			this->Controls->Add(this->LetreiroPontuacaoJogador2);
			this->Controls->Add(this->LetreiroPontuacaoJogador1);
			this->Controls->Add(this->LetreiroTempoJogador10);
			this->Controls->Add(this->LetreiroTempoJogador9);
			this->Controls->Add(this->LetreiroTempoJogador8);
			this->Controls->Add(this->LetreiroTempoJogador7);
			this->Controls->Add(this->LetreiroTempoJogador6);
			this->Controls->Add(this->LetreiroTempoJogador5);
			this->Controls->Add(this->LetreiroTempoJogador4);
			this->Controls->Add(this->LetreiroTempoJogador3);
			this->Controls->Add(this->LetreiroTempoJogador2);
			this->Controls->Add(this->LetreiroTempoJogador1);
			this->Controls->Add(this->LetreiroIdadeJogador10);
			this->Controls->Add(this->LetreiroIdadeJogador9);
			this->Controls->Add(this->LetreiroIdadeJogador8);
			this->Controls->Add(this->LetreiroIdadeJogador7);
			this->Controls->Add(this->LetreiroIdadeJogador6);
			this->Controls->Add(this->LetreiroIdadeJogador5);
			this->Controls->Add(this->LetreiroIdadeJogador4);
			this->Controls->Add(this->LetreiroIdadeJogador3);
			this->Controls->Add(this->LetreiroIdadeJogador2);
			this->Controls->Add(this->LetreiroIdadeJogador1);
			this->Controls->Add(this->LetreiroNomeJogador10);
			this->Controls->Add(this->LetreiroNomeJogador9);
			this->Controls->Add(this->LetreiroNomeJogador8);
			this->Controls->Add(this->LetreiroNomeJogador7);
			this->Controls->Add(this->LetreiroNomeJogador6);
			this->Controls->Add(this->LetreiroNomeJogador5);
			this->Controls->Add(this->LetreiroNomeJogador4);
			this->Controls->Add(this->LetreiroNomeJogador3);
			this->Controls->Add(this->LetreiroNomeJogador2);
			this->Controls->Add(this->LetreiroNomeJogador1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"TelaDeRank";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Alg+";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TelaDeRank::TelaDeRank_FormClosed);
			this->Load += gcnew System::EventHandler(this, &TelaDeRank::TelaDeRank_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoCinza))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVerde))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void TelaDeRank_Load(System::Object^  sender, System::EventArgs^  e) 
	{
				 atribuirValoresAosLetreiros();
	}
private: System::Void BotaoGrafico_Click(System::Object^  sender, System::EventArgs^  e) {
			 executarAoClicarBotaoGrafico();
}
private: System::Void TelaDeRank_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 fecharJogo();
}
private: System::Void BotaoGrafico_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoGrafico, ImagemBotaoVerde);
}
private: System::Void BotaoGrafico_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoGrafico, ImagemBotaoCinza);
}
private: System::Void BotaoVoltar_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoVoltar, ImagemBotaoVerde);
}
private: System::Void BotaoVoltar_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoVoltar, ImagemBotaoCinza);
}
private: System::Void BotaoVoltar_Click(System::Object^  sender, System::EventArgs^  e) {
			 Visible = false;
}
};
}
