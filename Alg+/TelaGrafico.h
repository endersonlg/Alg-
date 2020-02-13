#pragma once
#include "AlteradorPropriedadeLetreiro.h"
#include "AlteradorPropriedadeBotao.h"
namespace Alg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para TelaGrafico
	/// </summary>
	public ref class TelaGrafico : public System::Windows::Forms::Form
	{
	private:
	public:
		void setMediaDasPontuacoesEPontuacaoDoJogador(double[9],double,int);
		void compararNotaComAMediaEExibir(double, double);
		void executarAoClicarBotaoMenuPrincipal();
		void mudarVisiabilidadeBotaoVoltarEMenuPrincipal();
		int getOpcao();
		TelaGrafico(void)
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
		~TelaGrafico()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  GraficoMediaPorIdade;
	private: System::Windows::Forms::Button^  BotaoMenuPrincipal;
	private: System::Windows::Forms::Label^  LetreiroComparacaoNota;
	private: System::Windows::Forms::Label^  LetreiroDiferencaPontuacao;
	private: System::Windows::Forms::PictureBox^  ImagemBotaoCinza;
	private: System::Windows::Forms::PictureBox^  ImagemBotaoVerde;
	private: System::Windows::Forms::Button^  BotaoVoltar;
	private: System::Windows::Forms::Label^  LetreiroIdade;
	private: System::Windows::Forms::Label^  LetreiroPontuacao;


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaGrafico::typeid));
			this->GraficoMediaPorIdade = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->BotaoMenuPrincipal = (gcnew System::Windows::Forms::Button());
			this->LetreiroComparacaoNota = (gcnew System::Windows::Forms::Label());
			this->LetreiroDiferencaPontuacao = (gcnew System::Windows::Forms::Label());
			this->ImagemBotaoCinza = (gcnew System::Windows::Forms::PictureBox());
			this->ImagemBotaoVerde = (gcnew System::Windows::Forms::PictureBox());
			this->BotaoVoltar = (gcnew System::Windows::Forms::Button());
			this->LetreiroIdade = (gcnew System::Windows::Forms::Label());
			this->LetreiroPontuacao = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GraficoMediaPorIdade))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoCinza))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVerde))->BeginInit();
			this->SuspendLayout();
			// 
			// GraficoMediaPorIdade
			// 
			this->GraficoMediaPorIdade->BackColor = System::Drawing::Color::Transparent;
			this->GraficoMediaPorIdade->BorderlineColor = System::Drawing::Color::Transparent;
			chartArea1->BackColor = System::Drawing::Color::White;
			chartArea1->Name = L"ChartArea1";
			this->GraficoMediaPorIdade->ChartAreas->Add(chartArea1);
			legend1->BackColor = System::Drawing::Color::LightGray;
			legend1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			legend1->IsTextAutoFit = false;
			legend1->Name = L"Legend1";
			legend1->TitleBackColor = System::Drawing::Color::White;
			this->GraficoMediaPorIdade->Legends->Add(legend1);
			this->GraficoMediaPorIdade->Location = System::Drawing::Point(0, 0);
			this->GraficoMediaPorIdade->Name = L"GraficoMediaPorIdade";
			this->GraficoMediaPorIdade->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			series1->BackGradientStyle = System::Windows::Forms::DataVisualization::Charting::GradientStyle::DiagonalRight;
			series1->BackImageTransparentColor = System::Drawing::Color::Transparent;
			series1->BackSecondaryColor = System::Drawing::Color::Transparent;
			series1->BorderColor = System::Drawing::Color::Black;
			series1->ChartArea = L"ChartArea1";
			series1->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20));
			series1->LabelFormat = L"gfgfgfgf";
			series1->Legend = L"Legend1";
			series1->Name = L"Média de Pontuação";
			series2->BackGradientStyle = System::Windows::Forms::DataVisualization::Charting::GradientStyle::DiagonalLeft;
			series2->BackImageTransparentColor = System::Drawing::Color::Transparent;
			series2->BorderColor = System::Drawing::Color::Black;
			series2->ChartArea = L"ChartArea1";
			series2->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			series2->IsVisibleInLegend = false;
			series2->Legend = L"Legend1";
			series2->Name = L"Pontuação do Jogador";
			this->GraficoMediaPorIdade->Series->Add(series1);
			this->GraficoMediaPorIdade->Series->Add(series2);
			this->GraficoMediaPorIdade->Size = System::Drawing::Size(1268, 532);
			this->GraficoMediaPorIdade->TabIndex = 0;
			this->GraficoMediaPorIdade->Text = L"chart1";
			title1->BorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::NotSet;
			title1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20.25F));
			title1->Name = L"Titulo";
			title1->Text = L"Média de Pontuação Por Intervalo de Idade";
			this->GraficoMediaPorIdade->Titles->Add(title1);
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
			this->BotaoMenuPrincipal->TabIndex = 24;
			this->BotaoMenuPrincipal->Text = L"Menu Principal";
			this->BotaoMenuPrincipal->UseCompatibleTextRendering = true;
			this->BotaoMenuPrincipal->UseVisualStyleBackColor = false;
			this->BotaoMenuPrincipal->Click += gcnew System::EventHandler(this, &TelaGrafico::BotaoMenuPrincipal_Click);
			this->BotaoMenuPrincipal->MouseLeave += gcnew System::EventHandler(this, &TelaGrafico::BotaoMenuPrincipal_MouseLeave);
			this->BotaoMenuPrincipal->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaGrafico::BotaoMenuPrincipal_MouseMove);
			// 
			// LetreiroComparacaoNota
			// 
			this->LetreiroComparacaoNota->AutoSize = true;
			this->LetreiroComparacaoNota->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25));
			this->LetreiroComparacaoNota->Location = System::Drawing::Point(76, 535);
			this->LetreiroComparacaoNota->Name = L"LetreiroComparacaoNota";
			this->LetreiroComparacaoNota->Size = System::Drawing::Size(937, 40);
			this->LetreiroComparacaoNota->TabIndex = 25;
			this->LetreiroComparacaoNota->Text = L"Sua pontuação está                     Pontos acima da média";
			this->LetreiroComparacaoNota->Visible = false;
			// 
			// LetreiroDiferencaPontuacao
			// 
			this->LetreiroDiferencaPontuacao->AutoSize = true;
			this->LetreiroDiferencaPontuacao->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25));
			this->LetreiroDiferencaPontuacao->Location = System::Drawing::Point(430, 535);
			this->LetreiroDiferencaPontuacao->Name = L"LetreiroDiferencaPontuacao";
			this->LetreiroDiferencaPontuacao->Size = System::Drawing::Size(101, 40);
			this->LetreiroDiferencaPontuacao->TabIndex = 26;
			this->LetreiroDiferencaPontuacao->Text = L"texto";
			this->LetreiroDiferencaPontuacao->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LetreiroDiferencaPontuacao->Visible = false;
			// 
			// ImagemBotaoCinza
			// 
			this->ImagemBotaoCinza->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoCinza.Image")));
			this->ImagemBotaoCinza->Location = System::Drawing::Point(207, 41);
			this->ImagemBotaoCinza->Name = L"ImagemBotaoCinza";
			this->ImagemBotaoCinza->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoCinza->TabIndex = 75;
			this->ImagemBotaoCinza->TabStop = false;
			this->ImagemBotaoCinza->Visible = false;
			// 
			// ImagemBotaoVerde
			// 
			this->ImagemBotaoVerde->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImagemBotaoVerde.Image")));
			this->ImagemBotaoVerde->Location = System::Drawing::Point(159, 41);
			this->ImagemBotaoVerde->Name = L"ImagemBotaoVerde";
			this->ImagemBotaoVerde->Size = System::Drawing::Size(10, 10);
			this->ImagemBotaoVerde->TabIndex = 74;
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
			this->BotaoVoltar->TabIndex = 76;
			this->BotaoVoltar->Text = L"Voltar";
			this->BotaoVoltar->UseCompatibleTextRendering = true;
			this->BotaoVoltar->UseVisualStyleBackColor = false;
			this->BotaoVoltar->Visible = false;
			this->BotaoVoltar->Click += gcnew System::EventHandler(this, &TelaGrafico::BotaoVoltar_Click);
			this->BotaoVoltar->MouseLeave += gcnew System::EventHandler(this, &TelaGrafico::BotaoVoltar_MouseLeave);
			this->BotaoVoltar->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &TelaGrafico::BotaoVoltar_MouseMove);
			// 
			// LetreiroIdade
			// 
			this->LetreiroIdade->AutoSize = true;
			this->LetreiroIdade->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20));
			this->LetreiroIdade->Location = System::Drawing::Point(974, 478);
			this->LetreiroIdade->Name = L"LetreiroIdade";
			this->LetreiroIdade->Size = System::Drawing::Size(95, 33);
			this->LetreiroIdade->TabIndex = 77;
			this->LetreiroIdade->Text = L"Idade";
			// 
			// LetreiroPontuacao
			// 
			this->LetreiroPontuacao->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20));
			this->LetreiroPontuacao->Location = System::Drawing::Point(23, 69);
			this->LetreiroPontuacao->Name = L"LetreiroPontuacao";
			this->LetreiroPontuacao->Size = System::Drawing::Size(40, 304);
			this->LetreiroPontuacao->TabIndex = 78;
			this->LetreiroPontuacao->Text = L"Pontuação";
			this->LetreiroPontuacao->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TelaGrafico
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(1264, 661);
			this->Controls->Add(this->LetreiroPontuacao);
			this->Controls->Add(this->LetreiroIdade);
			this->Controls->Add(this->BotaoVoltar);
			this->Controls->Add(this->ImagemBotaoCinza);
			this->Controls->Add(this->ImagemBotaoVerde);
			this->Controls->Add(this->LetreiroDiferencaPontuacao);
			this->Controls->Add(this->LetreiroComparacaoNota);
			this->Controls->Add(this->BotaoMenuPrincipal);
			this->Controls->Add(this->GraficoMediaPorIdade);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"TelaGrafico";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Alg+";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GraficoMediaPorIdade))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoCinza))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImagemBotaoVerde))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BotaoMenuPrincipal_Click(System::Object^  sender, System::EventArgs^  e) {
				 executarAoClicarBotaoMenuPrincipal();
	}
private: System::Void BotaoMenuPrincipal_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoMenuPrincipal, ImagemBotaoVerde);
}
private: System::Void BotaoMenuPrincipal_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 AlteradorPropriedadeBotao apb;
			 apb.alterarImagemDeFundo(BotaoMenuPrincipal, ImagemBotaoCinza);
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
			 executarAoClicarBotaoMenuPrincipal();
}
};
}
