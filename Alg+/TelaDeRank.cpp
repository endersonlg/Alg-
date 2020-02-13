#include "TelaDeRank.h"

void Alg::TelaDeRank::fecharJogo()
{
	System::Windows::Forms::Application::Exit();
}
void Alg::TelaDeRank::setMelhoresJogadores(string NomeJogadores[10], int IdadeJogadores[10], int TempoJogadores[10], double PontuacaoJogadores[10])
{
	ConversorDeString cds;

	NomeJogador1 = cds.ConverterStringStdParaSystem(NomeJogadores[0], NomeJogador1);
	NomeJogador2 = cds.ConverterStringStdParaSystem(NomeJogadores[1], NomeJogador2);
	NomeJogador3 = cds.ConverterStringStdParaSystem(NomeJogadores[2], NomeJogador3);
	NomeJogador4 = cds.ConverterStringStdParaSystem(NomeJogadores[3], NomeJogador4);
	NomeJogador5 = cds.ConverterStringStdParaSystem(NomeJogadores[4], NomeJogador5);
	NomeJogador6 = cds.ConverterStringStdParaSystem(NomeJogadores[5], NomeJogador6);
	NomeJogador7 = cds.ConverterStringStdParaSystem(NomeJogadores[6], NomeJogador7);
	NomeJogador8 = cds.ConverterStringStdParaSystem(NomeJogadores[7], NomeJogador8);
	NomeJogador9 = cds.ConverterStringStdParaSystem(NomeJogadores[8], NomeJogador9);
	NomeJogador10 = cds.ConverterStringStdParaSystem(NomeJogadores[9], NomeJogador10);

	IdadeJogador1 = IdadeJogadores[0];
	IdadeJogador2 = IdadeJogadores[1];
	IdadeJogador3 = IdadeJogadores[2];
	IdadeJogador4 = IdadeJogadores[3];
	IdadeJogador5 = IdadeJogadores[4];
	IdadeJogador6 = IdadeJogadores[5];
	IdadeJogador7 = IdadeJogadores[6];
	IdadeJogador8 = IdadeJogadores[7];
	IdadeJogador9 = IdadeJogadores[8];
	IdadeJogador10 = IdadeJogadores[9];

	TempoJogador1 = TempoJogadores[0];
	TempoJogador2 = TempoJogadores[1];
	TempoJogador3 = TempoJogadores[2];
	TempoJogador4 = TempoJogadores[3];
	TempoJogador5 = TempoJogadores[4];
	TempoJogador6 = TempoJogadores[5];
	TempoJogador7 = TempoJogadores[6];
	TempoJogador8 = TempoJogadores[7];
	TempoJogador9 = TempoJogadores[8];
	TempoJogador10 = TempoJogadores[9];

	PontuacaoJogador1 = PontuacaoJogadores[0];
	PontuacaoJogador2 = PontuacaoJogadores[1];
	PontuacaoJogador3 = PontuacaoJogadores[2];
	PontuacaoJogador4 = PontuacaoJogadores[3];
	PontuacaoJogador5 = PontuacaoJogadores[4];
	PontuacaoJogador6 = PontuacaoJogadores[5];
	PontuacaoJogador7 = PontuacaoJogadores[6];
	PontuacaoJogador8 = PontuacaoJogadores[7];
	PontuacaoJogador9 = PontuacaoJogadores[8];
	PontuacaoJogador10 = PontuacaoJogadores[9];

}

void Alg::TelaDeRank::atribuirValoresAosLetreiros()
{
	LetreiroNomeJogador1->Text = NomeJogador1;
	LetreiroNomeJogador2->Text = NomeJogador2;
	LetreiroNomeJogador3->Text = NomeJogador3;
	LetreiroNomeJogador4->Text = NomeJogador4;
	LetreiroNomeJogador5->Text = NomeJogador5;
	LetreiroNomeJogador6->Text = NomeJogador6;
	LetreiroNomeJogador7->Text = NomeJogador7;
	LetreiroNomeJogador8->Text = NomeJogador8;
	LetreiroNomeJogador9->Text = NomeJogador9;
	LetreiroNomeJogador10->Text = NomeJogador10;

	LetreiroIdadeJogador1->Text = IdadeJogador1.ToString();
	LetreiroIdadeJogador2->Text = IdadeJogador2.ToString();
	LetreiroIdadeJogador3->Text = IdadeJogador3.ToString();
	LetreiroIdadeJogador4->Text = IdadeJogador4.ToString();
	LetreiroIdadeJogador5->Text = IdadeJogador5.ToString();
	LetreiroIdadeJogador6->Text = IdadeJogador6.ToString();
	LetreiroIdadeJogador7->Text = IdadeJogador7.ToString();
	LetreiroIdadeJogador8->Text = IdadeJogador8.ToString();
	LetreiroIdadeJogador9->Text = IdadeJogador9.ToString();
	LetreiroIdadeJogador10->Text = IdadeJogador10.ToString();

	LetreiroTempoJogador1->Text = (TempoJogador1 / 60).ToString() + ":" + (TempoJogador1 % 60).ToString();
	LetreiroTempoJogador2->Text = (TempoJogador2 / 60).ToString() + ":" + (TempoJogador2 % 60).ToString();
	LetreiroTempoJogador3->Text = (TempoJogador3 / 60).ToString() + ":" + (TempoJogador3 % 60).ToString();
	LetreiroTempoJogador4->Text = (TempoJogador4 / 60).ToString() + ":" + (TempoJogador4 % 60).ToString();
	LetreiroTempoJogador5->Text = (TempoJogador5 / 60).ToString() + ":" + (TempoJogador5 % 60).ToString();
	LetreiroTempoJogador6->Text = (TempoJogador6 / 60).ToString() + ":" + (TempoJogador6 % 60).ToString();
	LetreiroTempoJogador7->Text = (TempoJogador7 / 60).ToString() + ":" + (TempoJogador7 % 60).ToString();
	LetreiroTempoJogador8->Text = (TempoJogador8 / 60).ToString() + ":" + (TempoJogador8 % 60).ToString();
	LetreiroTempoJogador9->Text = (TempoJogador9 / 60).ToString() + ":" + (TempoJogador9 % 60).ToString();
	LetreiroTempoJogador10->Text = (TempoJogador10 / 60).ToString() + ":" + (TempoJogador10 % 60).ToString();

	LetreiroPontuacaoJogador1->Text = PontuacaoJogador1.ToString();
	LetreiroPontuacaoJogador2->Text = PontuacaoJogador2.ToString();
	LetreiroPontuacaoJogador3->Text = PontuacaoJogador3.ToString();
	LetreiroPontuacaoJogador4->Text = PontuacaoJogador4.ToString();
	LetreiroPontuacaoJogador5->Text = PontuacaoJogador5.ToString();
	LetreiroPontuacaoJogador6->Text = PontuacaoJogador6.ToString();
	LetreiroPontuacaoJogador7->Text = PontuacaoJogador7.ToString();
	LetreiroPontuacaoJogador8->Text = PontuacaoJogador8.ToString();
	LetreiroPontuacaoJogador9->Text = PontuacaoJogador9.ToString();
	LetreiroPontuacaoJogador10->Text = PontuacaoJogador10.ToString();
}

void Alg::TelaDeRank::setInformacaoJogadorAtual(String^ Nome, int Idade, int Tempo, double Pontuacao)
{
	LetreiroNomeJogadorAtual->Text = Nome;
	LetreiroIdadeJogadorAtual->Text = Idade.ToString();
	LetreiroTempoJogadorAtual->Text = (Tempo/ 60).ToString() + ":" + (Tempo % 60).ToString();
	LetreiroPontuacaoJogadorAtual->Text = Pontuacao.ToString();
}
void Alg::TelaDeRank::mudarVisiabilidadeLetreiroParaVisivel(Label^ Letreiro)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarVisiabilidadeParaVerdadeiro(Letreiro);
}
void Alg::TelaDeRank::mudarVisiabilidadeLetreiroJogadorAtual()
{
	mudarVisiabilidadeLetreiroParaVisivel(LetreiroNomeJogadorAtual);
	mudarVisiabilidadeLetreiroParaVisivel(LetreiroIdadeJogadorAtual);
	mudarVisiabilidadeLetreiroParaVisivel(LetreiroTempoJogadorAtual);
	mudarVisiabilidadeLetreiroParaVisivel(LetreiroPontuacaoJogadorAtual);
}
void Alg::TelaDeRank::mudarVisibilidadeBotaoVoltarEGrafico()
{
	AlteradorPropriedadeBotao apb;
	apb.alterarVisiabilidadeParaFalso(BotaoGrafico);
	apb.alterarVisiabilidadeParaVerdadeiro(BotaoVoltar);
}
void Alg::TelaDeRank::executarAoClicarBotaoGrafico()
{
	Visible = false;
}
int Alg::TelaDeRank::getOpcaoContinuar()
{
	return 1;
}