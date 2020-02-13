#include "TelaGrafico.h"

void Alg::TelaGrafico::setMediaDasPontuacoesEPontuacaoDoJogador(double MediaDasPontuacoes[9],double PontuacaoJogador,int Idade)
{
	if (MediaDasPontuacoes[0] > 0)
	{
		GraficoMediaPorIdade->Series["Média de Pontuação"]->Points->AddXY("10 a 11", MediaDasPontuacoes[0]);
		if (PontuacaoJogador > 0&&Idade>=10&&Idade<=11)
		{
			GraficoMediaPorIdade->Series["Pontuação do Jogador"]->Points->AddXY("10 a 11", PontuacaoJogador);
			compararNotaComAMediaEExibir(MediaDasPontuacoes[0], PontuacaoJogador);
		}
		else
		{
			GraficoMediaPorIdade->Series["Pontuação do Jogador"]->Points->AddXY("10 a 11", 0);
		}
	}
	if (MediaDasPontuacoes[1] > 0 )
	{
		GraficoMediaPorIdade->Series["Média de Pontuação"]->Points->AddXY("12 a 14", MediaDasPontuacoes[1]);
		if (PontuacaoJogador > 0 && Idade >= 12 && Idade <= 14)
		{
			GraficoMediaPorIdade->Series["Pontuação do Jogador"]->Points->AddXY("12 a 14", PontuacaoJogador);
			compararNotaComAMediaEExibir(MediaDasPontuacoes[1], PontuacaoJogador);
		}
		else
		{
			GraficoMediaPorIdade->Series["Pontuação do Jogador"]->Points->AddXY("12 a 14", 0);
		}
	}
	if (MediaDasPontuacoes[2] > 0)
	{
		GraficoMediaPorIdade->Series["Média de Pontuação"]->Points->AddXY("15 a 17", MediaDasPontuacoes[2]);
		if (PontuacaoJogador > 0 && Idade >= 15 && Idade <= 17)
		{
			GraficoMediaPorIdade->Series["Pontuação do Jogador"]->Points->AddXY("15 a 17", PontuacaoJogador);
			compararNotaComAMediaEExibir(MediaDasPontuacoes[2], PontuacaoJogador);
		}
		else
		{
			GraficoMediaPorIdade->Series["Pontuação do Jogador"]->Points->AddXY("15 a 17", 0);
		}
	}
	if (MediaDasPontuacoes[3] > 0)
	{
		GraficoMediaPorIdade->Series["Média de Pontuação"]->Points->AddXY("18 a 29", MediaDasPontuacoes[3]);
		if (PontuacaoJogador > 0 && Idade >= 18 && Idade <= 29)
		{
			GraficoMediaPorIdade->Series["Pontuação do Jogador"]->Points->AddXY("18 a 29", PontuacaoJogador);
			compararNotaComAMediaEExibir(MediaDasPontuacoes[3], PontuacaoJogador);
		}
		else
		{
			GraficoMediaPorIdade->Series["Pontuação do Jogador"]->Points->AddXY("18 a 29", 0);
		}
	}
	if (MediaDasPontuacoes[4]>0)
	{
		GraficoMediaPorIdade->Series["Média de Pontuação"]->Points->AddXY("30 a 39", MediaDasPontuacoes[4]);
		if (PontuacaoJogador > 0 && Idade >= 30 && Idade <= 39)
		{
			GraficoMediaPorIdade->Series["Pontuação do Jogador"]->Points->AddXY("30 a 39", PontuacaoJogador);
			compararNotaComAMediaEExibir(MediaDasPontuacoes[4], PontuacaoJogador);
		}
		else
		{
			GraficoMediaPorIdade->Series["Pontuação do Jogador"]->Points->AddXY("30 a 39", 0);
		}
	}
	if (MediaDasPontuacoes[5]>0)
	{
		GraficoMediaPorIdade->Series["Média de Pontuação"]->Points->AddXY("40 a 49", MediaDasPontuacoes[5]);
		if (PontuacaoJogador > 0 && Idade >= 40 && Idade <= 49)
		{
			GraficoMediaPorIdade->Series["Pontuação do Jogador"]->Points->AddXY("40 a 49", PontuacaoJogador);
			compararNotaComAMediaEExibir(MediaDasPontuacoes[5], PontuacaoJogador);
		}
		else
		{
			GraficoMediaPorIdade->Series["Pontuação do Jogador"]->Points->AddXY("40 a 49", 0);
		}
	}
	if (MediaDasPontuacoes[6]>0)
	{
		GraficoMediaPorIdade->Series["Média de Pontuação"]->Points->AddXY("50 a 59", MediaDasPontuacoes[6]);
		if (PontuacaoJogador > 0 && Idade >= 50 && Idade <= 59)
		{
			GraficoMediaPorIdade->Series["Pontuação do Jogador"]->Points->AddXY("50 a 59", PontuacaoJogador);
			compararNotaComAMediaEExibir(MediaDasPontuacoes[6], PontuacaoJogador);
		}
		else
		{
			GraficoMediaPorIdade->Series["Pontuação do Jogador"]->Points->AddXY("50 a 59", 0);
		}
	}
	if (MediaDasPontuacoes[7]>0)
	{
		GraficoMediaPorIdade->Series["Média de Pontuação"]->Points->AddXY("60 a 64", MediaDasPontuacoes[7]);
		if (PontuacaoJogador > 0 && Idade >= 60 && Idade <= 64)
		{
			GraficoMediaPorIdade->Series["Pontuação do Jogador"]->Points->AddXY("60 a 64", PontuacaoJogador);
			compararNotaComAMediaEExibir(MediaDasPontuacoes[7], PontuacaoJogador);
		}
		else
		{
			GraficoMediaPorIdade->Series["Pontuação do Jogador"]->Points->AddXY("60 a 64", 0);
		}
	}
	if (MediaDasPontuacoes[8]>0)
	{
		GraficoMediaPorIdade->Series["Média de Pontuação"]->Points->AddXY("65 a 89", MediaDasPontuacoes[8]);
		if (PontuacaoJogador > 0 && Idade >= 65 && Idade <= 89)
		{
			GraficoMediaPorIdade->Series["Pontuação do Jogador"]->Points->AddXY("65 a 89", PontuacaoJogador);
			compararNotaComAMediaEExibir(MediaDasPontuacoes[8], PontuacaoJogador);
		}
		else
		{
			GraficoMediaPorIdade->Series["Pontuação do Jogador"]->Points->AddXY("65 a 89", 0);
		}
	}
}

void Alg::TelaGrafico::compararNotaComAMediaEExibir(double MediaPontuacao, double PontuacaoJogador)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarVisiabilidadeParaVerdadeiro(LetreiroComparacaoNota);
	apl.alterarVisiabilidadeParaVerdadeiro(LetreiroDiferencaPontuacao);
	GraficoMediaPorIdade->Series["Pontuação do Jogador"]->IsVisibleInLegend = true;
	double DiferencaPontuacao = PontuacaoJogador - MediaPontuacao;
	
	apl.alterarTexto(LetreiroDiferencaPontuacao, (Math::Round(DiferencaPontuacao, 2)).ToString());
	if (PontuacaoJogador >= MediaPontuacao)
	{
		apl.alterarTexto(LetreiroComparacaoNota,"Sua pontuação está                   pontos acima da média");
		LetreiroDiferencaPontuacao->ForeColor = System::Drawing::Color::Green;
	}
	else
	{
		apl.alterarTexto(LetreiroComparacaoNota, "Sua pontuação está                   pontos abaixo da média");
		LetreiroDiferencaPontuacao->ForeColor = System::Drawing::Color::Red;
	}
}
void Alg::TelaGrafico::mudarVisiabilidadeBotaoVoltarEMenuPrincipal()
{
	AlteradorPropriedadeBotao apb;
	apb.alterarVisiabilidadeParaFalso(BotaoMenuPrincipal);
	apb.alterarVisiabilidadeParaVerdadeiro(BotaoVoltar);
}
void Alg::TelaGrafico::executarAoClicarBotaoMenuPrincipal()
{
	Visible = false;
}
int Alg::TelaGrafico::getOpcao()
{
	return -100;
}