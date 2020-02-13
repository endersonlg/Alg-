#include "TelaQuestao1.h"

void Alg::TelaQuestao1::fecharJogo()
{
	System::Windows::Forms::Application::Exit();
}
void Alg::TelaQuestao1::bloquearOpcoesDeRespostas()
{
	AlteradorPropriedadeBotao apb;

	apb.alterarCursorParaNao(BotaoOpcaoDeResposta1);
	apb.alterarCursorParaNao(BotaoOpcaoDeResposta2);
	apb.alterarCursorParaNao(BotaoOpcaoDeResposta3);
	apb.alterarCursorParaNao(BotaoOpcaoDeResposta4);
	apb.alterarCursorParaNao(BotaoOpcaoDeResposta5);
}

void Alg::TelaQuestao1::atribuirRespostaNaoPreenchidaParaAResposta(Label ^ Resposta)
{
	AlteradorPropriedadeLetreiro apl;

	apl.alterarTexto(Resposta, RespostaNaoPreenchida);
}

void Alg::TelaQuestao1::atribuirTextoParaAResposta(Label^Letreiro, String^ Texto)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarTexto(Letreiro, Texto);
}

void Alg::TelaQuestao1::ativarTempo(Timer^ Tempo)
{
	AlteradorPropriedadeTempo apt;
	apt.habilitarTempo(Tempo);
}

void Alg::TelaQuestao1::desativarTempo(Timer^ Tempo)
{
	AlteradorPropriedadeTempo apt;
	apt.desabilitarTempo(Tempo);
}

void Alg::TelaQuestao1::mudarVisiabilidadeDaImagemParaInvisivel(PictureBox^ Imagem)
{
	AlteradorPropriedadeImagem api;
	api.alterarVisiabilidadeParaFalso(Imagem);

}
void Alg::TelaQuestao1::mudarVisiabilidadeDaImagemParaVisivel(PictureBox^ Imagem)
{
	AlteradorPropriedadeImagem api;
	api.alterarVisiabilidadeParaVerdadeiro(Imagem);
}

void Alg::TelaQuestao1::mudarVisiabilidadeDoBotaoParaInvisivel(Button^ Botao)
{
	AlteradorPropriedadeBotao apb;
	apb.alterarVisiabilidadeParaFalso(Botao);

}
void Alg::TelaQuestao1::mudarVisiabilidadeDoBotaoParaVisivel(Button^ Botao)
{
	AlteradorPropriedadeBotao apb;
	apb.alterarVisiabilidadeParaVerdadeiro(Botao);
}

void Alg::TelaQuestao1::mudarCorDeFundoLetreiroParaAmarelo(Label^ Resposta)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarCorDeFundoParaAmarelo(Resposta);
}

void Alg::TelaQuestao1::mudarCorDeFundoLetreiroParaBranco(Label^ Letreiro)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarCorDeFundoParaBranco(Letreiro);
}
void Alg::TelaQuestao1::atribuirAcrecimoDeUnderline(Label^ Resposta)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarTexto(Resposta, AcrecimoDeUnderlines);
}

void Alg::TelaQuestao1::adicionarUnderlineEGerenciala()
{
	Contador++;
	if (Contador> 0)
	{
		AcrecimoDeUnderlines += "_";
		if (Contador == 6)
			Contador = -1;
	}
	else
	{
		AcrecimoDeUnderlines = "_";
	}
}
void Alg::TelaQuestao1::piscarRespostaASerRespondida()
{
    if (LetreiroResposta1->Text[0] == '_')
	{
		adicionarUnderlineEGerenciala();
		atribuirAcrecimoDeUnderline(LetreiroResposta1);
	}
	else if (LetreiroResposta2->Text[0] == '_')
	{
		adicionarUnderlineEGerenciala();
		atribuirAcrecimoDeUnderline(LetreiroResposta2);
	}
}
void Alg::TelaQuestao1::aumentarTempoTotal()
{
	TempoNaFase++;
	this->LetreiroTempoTotal->Text = (TempoNaFase / 60).ToString() + ":" + (TempoNaFase % 60).ToString();
}
void Alg::TelaQuestao1::desbloquearOpcoesDeRespostas()
{
	AlteradorPropriedadeBotao apb;

	apb.alterarCursorParaMao(BotaoOpcaoDeResposta1);
	apb.alterarCursorParaMao(BotaoOpcaoDeResposta2);
	apb.alterarCursorParaMao(BotaoOpcaoDeResposta3);
	apb.alterarCursorParaMao(BotaoOpcaoDeResposta4);
	apb.alterarCursorParaMao(BotaoOpcaoDeResposta5);
}
void Alg::TelaQuestao1::verificarSeAsRespostasEstaoCorretas()
{
	desativarTempo(TempoIntervaloResposta);
	if (LetreiroResposta1->Text == BotaoOpcaoDeResposta1->Text && LetreiroResposta2->Text == BotaoOpcaoDeResposta3->Text)
	{
		mudarVisiabilidadeDaImagemParaVisivel(ImagemCorreto);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoReiniciar);
		mudarVisiabilidadeDoBotaoParaVisivel(BotaoAvancar);
		mudarVisiabilidadeDoBotaoParaVisivel(BotaoTestar);
		bloquearOpcoesDeRespostas();
		desativarTempo(TempoContadorTotal);
	}
	else
	{
		mudarVisiabilidadeDaImagemParaVisivel(ImagemErrado);
		bloquearOpcoesDeRespostas();
	}
}

void Alg::TelaQuestao1::mudarVisiablidadeDeTodosBotoesOpcoesDeRespostasParaVerdadeiro()
{
	AlteradorPropriedadeBotao apb;

	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta1);
	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta2);
	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta3);
	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta4);
	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta5);
}

void Alg::TelaQuestao1::executarAoClicarBotaoResposta1()
{
	if (LetreiroResposta1->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta1, BotaoOpcaoDeResposta1->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta1);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta1);
		mudarVisiabilidadeDoBotaoParaVisivel(BotaoReiniciar);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta2);
	}
	else if (LetreiroResposta2->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta2, BotaoOpcaoDeResposta1->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta1);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta2);
		verificarSeAsRespostasEstaoCorretas();
	}
}

void Alg::TelaQuestao1::executarAoClicarBotaoResposta2()
{
	if (LetreiroResposta1->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta1, BotaoOpcaoDeResposta2->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta2);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta1);
		mudarVisiabilidadeDoBotaoParaVisivel(BotaoReiniciar);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta2);
	}
	else if (LetreiroResposta2->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta2, BotaoOpcaoDeResposta2->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta2);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta2);
		verificarSeAsRespostasEstaoCorretas();
	}
}

void Alg::TelaQuestao1::executarAoClicarBotaoResposta3()
{
	if (LetreiroResposta1->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta1, BotaoOpcaoDeResposta3->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta3);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta1);
		mudarVisiabilidadeDoBotaoParaVisivel(BotaoReiniciar);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta2);
	}
	else if (LetreiroResposta2->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta2, BotaoOpcaoDeResposta3->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta3);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta2);
		verificarSeAsRespostasEstaoCorretas();
	}
}

void Alg::TelaQuestao1::executarAoClicarBotaoResposta4()
{
	if (LetreiroResposta1->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta1, BotaoOpcaoDeResposta4->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta4);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta1);
		mudarVisiabilidadeDoBotaoParaVisivel(BotaoReiniciar);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta2);
	}
	else if (LetreiroResposta2->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta2, BotaoOpcaoDeResposta4->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta4);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta2);
		verificarSeAsRespostasEstaoCorretas();
	}
}

void Alg::TelaQuestao1::executarAoClicarBotaoResposta5()
{
	if (LetreiroResposta1->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta1, BotaoOpcaoDeResposta5->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta5);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta1);
		mudarVisiabilidadeDoBotaoParaVisivel(BotaoReiniciar);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta2);
	}
	else if (LetreiroResposta2->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta2, BotaoOpcaoDeResposta5->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta5);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta2);
		verificarSeAsRespostasEstaoCorretas();
	}
}

void Alg::TelaQuestao1::executarAoClicarBotaoReiniciar()
{
	mudarVisiablidadeDeTodosBotoesOpcoesDeRespostasParaVerdadeiro();
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroResposta1);
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroResposta2);
	mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta1);
	ativarTempo(TempoIntervaloResposta);
	desbloquearOpcoesDeRespostas();
	mudarVisiabilidadeDaImagemParaInvisivel(ImagemErrado);
	mudarVisiabilidadeDoBotaoParaInvisivel(BotaoReiniciar);

	QuantidadeResetou++;
}
void Alg::TelaQuestao1::executarAoClicarBotaoSair()
{
	this->Visible = false;
	OpcaoContinuar = false;
}
void Alg::TelaQuestao1::executarAoClicarBotaoAvancar()
{
	this->Visible = false;
	OpcaoContinuar = true;
}
void Alg::TelaQuestao1::executarAoClicarBotaoTestar()
{
	System::Diagnostics::Process::Start("teste\\Questao1.exe", "../teste\\Questao1.exe");
}
int Alg::TelaQuestao1::getTempoNaFase()
{
	return TempoNaFase;
}

int Alg::TelaQuestao1::getQuantidadeQueResetouAFase()
{
	return QuantidadeResetou;
}

int Alg::TelaQuestao1::getOpcaoIraContinuar()
{
	int QuantidadeRetorna;
	if (OpcaoContinuar)
		QuantidadeRetorna=1;
	else
		QuantidadeRetorna = -100;
	return QuantidadeRetorna;
}
void Alg::TelaQuestao1::executarAoCarregarATela()
{
	ativarTempo(TempoContadorTotal);
}