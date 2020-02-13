#include "Controle.h"

void Alg::Controle::gerenciarExecucao()
{	Alg::TelaMenuPrincipal tmp;
	int OpcaoMenu = 0;

	Jogo jogo;

	do
	{
		tmp.ShowDialog();
		OpcaoMenu = tmp.getOpcao();
		switch (OpcaoMenu)
		{

		case 1:gerenciarExecucaoJogar();
			break;
		case 2: gerenciarExecucaoExplicacao();
			break;
		case 3:gerenciarExecucaoRank();
			break;
		case 4:gerenciarExecucaoGrafico();
			break;
		}
	} while (OpcaoMenu>0);
}

void Alg::Controle::gerenciarExecucaoJogar()
{
	Jogo jogo;
	ConversorDeString cds;
	ConversorDeTipos cdt;
	String^ NomeTipoForms;
	String^ Frase=" ";
	string FraseStd;
	string IdadeString;
	string Nome;
	String^ IdadeTipoForms;

	int OpcaoContinuar = 1;
	int TempoTotal = 0;
	int QuantidadeTentativasTotal = 0;
	double Pontuacao = 0;
	int Idade=0;
	double MediasDasPontuacoes[9];

	string NomeMelhoresJogadores[10];
	int IdadeMelhoresJogadores[10];
	double PontuacaoMelhoresJogadores[10];
	int TempoMelhoresJogadores[10];

	jogo.tiu.ShowDialog();
	NomeTipoForms = jogo.tiu.getNome();
	IdadeTipoForms = jogo.tiu.getIdade();
	do
	{
		switch (OpcaoContinuar)
		{
		case 1:	
			jogo.ti.ShowDialog();
			if (jogo.ti.getRegistrarFraseNoArquivo())
			{
				Frase = jogo.ti.getFrase();
				cds.ConverterStringSystemParaStd(FraseStd, Frase);
				jogo.ArmazenarFrase(FraseStd);
				jogo.ti.ShowDialog();
			}
			OpcaoContinuar += jogo.ti.getOpcaoIraContinuar();

			break;
		case 2: 
			jogo.tq1.ShowDialog();
			OpcaoContinuar += jogo.tq1.getOpcaoIraContinuar();
			TempoTotal = jogo.tq1.getTempoNaFase();
			QuantidadeTentativasTotal += jogo.tq1.getQuantidadeQueResetouAFase();
			break;
		case 3:
			jogo.tq2.setTempoAnterior(TempoTotal);
			jogo.tq2.ShowDialog();
			TempoTotal = jogo.tq2.getTempoNaFase();
			QuantidadeTentativasTotal += jogo.tq2.getQuantidadeQueResetouAFase();
			OpcaoContinuar += jogo.tq2.getOpcaoIraContinuar();
			break;
		case 4:
			jogo.tq3.setTempoAnterior(TempoTotal);
			jogo.tq3.ShowDialog();
			TempoTotal = jogo.tq3.getTempoNaFase();
			QuantidadeTentativasTotal += jogo.tq3.getQuantidadeQueResetouAFase();
			OpcaoContinuar += jogo.tq3.getOpcaoIraContinuar();
			break;
		/*case 5:
			jogo.tq4.setTempoAnterior(TempoTotal);
			jogo.tq4.ShowDialog();
			TempoTotal = jogo.tq4.getTempoNaFase();
			QuantidadeTentativasTotal += jogo.tq4.getQuantidadeQueResetouAFase();
			OpcaoContinuar += jogo.tq4.getOpcaoIraContinuar();
			break;
		/*case 6:
			jogo.tq5.setTempoAnterior(TempoTotal);
			jogo.tq5.ShowDialog();
			TempoTotal = jogo.tq5.getTempoNaFase();
			QuantidadeTentativasTotal += jogo.tq5.getQuantidadeQueResetouAFase();
			OpcaoContinuar += jogo.tq5.getOpcaoIraContinuar();
		case 7:
			jogo.tq6.setTempoAnterior(TempoTotal);
			jogo.tq6.ShowDialog();
			TempoTotal = jogo.tq6.getTempoNaFase();
			QuantidadeTentativasTotal += jogo.tq6.getQuantidadeQueResetouAFase();
			OpcaoContinuar += jogo.tq6.getOpcaoIraContinuar();
			break;*/
		case 5:
			Pontuacao = 10000 - (20 * QuantidadeTentativasTotal) - TempoTotal;
			cds.ConverterStringSystemParaStd(Nome, NomeTipoForms);
			cds.ConverterStringSystemParaStd(IdadeString, IdadeTipoForms);
			Idade = cdt.ConverterStringParaInt(IdadeString);
			jogo.ArmazenarDadosDaPartidaNoRank(Nome, Idade, TempoTotal, Pontuacao);
			jogo.buscarMelhoresResultadosNoRank(NomeMelhoresJogadores, IdadeMelhoresJogadores, TempoMelhoresJogadores, PontuacaoMelhoresJogadores);
			jogo.tdr.setMelhoresJogadores(NomeMelhoresJogadores, IdadeMelhoresJogadores, TempoMelhoresJogadores, PontuacaoMelhoresJogadores);
			jogo.tdr.setInformacaoJogadorAtual(NomeTipoForms, Idade, TempoTotal, Pontuacao-8000);
			jogo.tdr.mudarVisiabilidadeLetreiroJogadorAtual();
			jogo.tdr.ShowDialog();
			OpcaoContinuar+=jogo.tdr.getOpcaoContinuar();
			break;
		case 6:
			jogo.buscarMediaDaPontuacaoConformeAsIdades(MediasDasPontuacoes);
			jogo.tg.setMediaDasPontuacoesEPontuacaoDoJogador(MediasDasPontuacoes, Pontuacao-8000, Idade);
			jogo.tg.ShowDialog();
			OpcaoContinuar += jogo.tg.getOpcao();
			break;
		}
	} while (OpcaoContinuar > 0);
}

			
void Alg::Controle::gerenciarExecucaoExplicacao()
{
	int OpcaoMenuExplicacao = 0;
	Explicacao explicacao;
	TelaMenuExplicacao tme;
	tme.ShowDialog();
	OpcaoMenuExplicacao = tme.getOpcao();
	do
	{
		switch (OpcaoMenuExplicacao)
		{
		case 1:explicacao.tea1.ShowDialog();
			OpcaoMenuExplicacao += explicacao.tea1.getOpcaoContinuar();
			break;
		case 2:explicacao.tea2.ShowDialog();
			OpcaoMenuExplicacao += explicacao.tea2.getOpcaoContinuar();
			break;
		case 3:explicacao.tea3.ShowDialog();
			OpcaoMenuExplicacao += explicacao.tea3.getOpcaoContinuar();
			break;
		case 4:explicacao.tev1.ShowDialog();
			OpcaoMenuExplicacao += explicacao.tev1.getOpcaoContinuar();
			break;
		case 5:explicacao.tev2.ShowDialog();
			OpcaoMenuExplicacao += explicacao.tev2.getOpcaoContinuar();
			break;
		case 6:explicacao.tec1.ShowDialog();
			OpcaoMenuExplicacao += explicacao.tec1.getOpcaoContinuar();
			break;
		case 7:explicacao.tec2.ShowDialog();
			OpcaoMenuExplicacao += explicacao.tec2.getOpcaoContinuar();
			break;
		case 8:explicacao.ter1.ShowDialog();
			OpcaoMenuExplicacao += explicacao.ter1.getOpcaoContinuar();
			break;
		case 9:explicacao.ter2.ShowDialog();
			OpcaoMenuExplicacao += explicacao.ter2.getOpcaoContinuar();
			break;
		case 10:explicacao.ter3.ShowDialog();
			OpcaoMenuExplicacao += explicacao.ter3.getOpcaoContinuar();
			break;
		}
	} while (OpcaoMenuExplicacao > 0);
}
void Alg::Controle::gerenciarExecucaoRank()
{
	Jogo jogo;
	string NomeMelhoresJogadores[10];
	int IdadeMelhoresJogadores[10];
	double PontuacaoMelhoresJogadores[10];
	int TempoMelhoresJogadores[10];

	jogo.buscarMelhoresResultadosNoRank(NomeMelhoresJogadores, IdadeMelhoresJogadores, TempoMelhoresJogadores, PontuacaoMelhoresJogadores);
	jogo.tdr.setMelhoresJogadores(NomeMelhoresJogadores, IdadeMelhoresJogadores, TempoMelhoresJogadores, PontuacaoMelhoresJogadores);

	jogo.tdr.mudarVisibilidadeBotaoVoltarEGrafico();
	jogo.tdr.ShowDialog();
	
}

void Alg::Controle::gerenciarExecucaoGrafico()
{
	double MediasDasPontuacoes[9];
	Jogo jogo;
	jogo.buscarMediaDaPontuacaoConformeAsIdades(MediasDasPontuacoes);
	jogo.tg.setMediaDasPontuacoesEPontuacaoDoJogador(MediasDasPontuacoes, 0, 0);
	jogo.tg.mudarVisiabilidadeBotaoVoltarEMenuPrincipal();
	jogo.tg.ShowDialog();

}