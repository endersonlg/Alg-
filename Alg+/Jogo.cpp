#include "Jogo.h"
Jogo::Jogo()
{
}
void Jogo::ArmazenarDadosDaPartidaNoRank(string Nome, int Idade, int TempoTotal, Double Pontuacao)
{
	Rank rank;
	rank.setNomeDoJogador(Nome);
	rank.setIdade(Idade);
	rank.setTempoDeJogo(TempoTotal);
	rank.setPontuacao(Pontuacao);
	rank.guardarDados();

}
void Jogo::buscarMelhoresResultadosNoRank(string NomeMelhoresJogadores[10],int IdadeMelhoresJogadores[10],int TempoMelhoresJogadores[10],double PontuacaoMelhoresJogadores[10])
{
	Rank rank;
	rank.PegarDadosDoArquivo();
	rank.ArrumarTabelaDePontuacao();
	rank.getTabelaDePontuacao(NomeMelhoresJogadores, IdadeMelhoresJogadores,
							  TempoMelhoresJogadores, PontuacaoMelhoresJogadores);
}

void Jogo::ArmazenarFrase(string Frase)
{
	RegistroDeDados rdd;
	rdd.setFraseERegistrarFraseNoArquivo(Frase);
}

void Jogo::buscarMediaDaPontuacaoConformeAsIdades(double Medias[9])
{
	Grafico grafico;
	grafico.pegarIdadesEPontuacaoNoArquivo();
	grafico.fazerSomatoriaDaPontuacao();
	grafico.fazerDivisaoDaPontuacao();
	Medias[0] = grafico.getMediaPontuacaoIdade10a11();
	Medias[1] = grafico.getMediaPontuacaoIdade12a14();
	Medias[2] = grafico.getMediaPontuacaoIdade15a17();
	Medias[3] = grafico.getMediaPontuacaoIdade18a29();
	Medias[4] = grafico.getMediaPontuacaoIdade30a39();
	Medias[5] = grafico.getMediaPontuacaoIdade40a49();
	Medias[6] = grafico.getMediaPontuacaoIdade50a59();
	Medias[7] = grafico.getMediaPontuacaoIdade60a64();
	Medias[8] = grafico.getMediaPontuacaoIdade65a89();
}