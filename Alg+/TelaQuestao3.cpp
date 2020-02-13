#include "TelaQuestao3.h"

void Alg::TelaQuestao3::fecharJogo()
{
	System::Windows::Forms::Application::Exit();
}
int Alg::TelaQuestao3::getTempoNaFase()
{
	return TempoNaFase;
}

int Alg::TelaQuestao3::getQuantidadeQueResetouAFase()
{
	return QuantidadeResetou;
}
void Alg::TelaQuestao3::setTempoAnterior(int TempoNaFaseAnterior)
{
	TempoNaFase = TempoNaFaseAnterior;
}

int Alg::TelaQuestao3::getOpcaoIraContinuar()
{
	int QuantidadeRetorna;
	if (OpcaoContinuar)
		QuantidadeRetorna = 1;
	else
		QuantidadeRetorna = -100;
	return QuantidadeRetorna;
}

void Alg::TelaQuestao3::bloquearOpcoesDeRespostas()
{
	AlteradorPropriedadeBotao apb;

	apb.alterarCursorParaNao(BotaoOpcaoDeResposta1);
	apb.alterarCursorParaNao(BotaoOpcaoDeResposta2);
	apb.alterarCursorParaNao(BotaoOpcaoDeResposta3);
	apb.alterarCursorParaNao(BotaoOpcaoDeResposta4);
	apb.alterarCursorParaNao(BotaoOpcaoDeResposta5);
}

void Alg::TelaQuestao3::atribuirRespostaNaoPreenchidaParaAResposta(Label ^ Resposta)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarTexto(Resposta, RespostaNaoPreenchida);
}
void Alg::TelaQuestao3::atribuirAcrecimoDeUnderline(Label^ Resposta)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarTexto(Resposta, AcrecimoDeUnderlines);
}
void Alg::TelaQuestao3::atribuirTextoParaAResposta(Label^Letreiro, String^ Texto)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarTexto(Letreiro, Texto);
}
void Alg::TelaQuestao3::atribuirRespostaVaziaACaixaDeTexto(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	String ^ RespostaVazia = "";
	apct.alterarTexto(CaixaDeTexto, RespostaVazia);
}
void Alg::TelaQuestao3::ativarTempo(Timer^ Tempo)
{
	AlteradorPropriedadeTempo apt;
	apt.habilitarTempo(Tempo);
}

void Alg::TelaQuestao3::desativarTempo(Timer^ Tempo)
{
	AlteradorPropriedadeTempo apt;
	apt.desabilitarTempo(Tempo);
}
void Alg::TelaQuestao3::ativarCaixaDeTexto(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.ativarCaixaDeTexto(CaixaDeTexto);
}
void Alg::TelaQuestao3::desativarCaixaDeTexto(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.desativarCaixaDeTexto(CaixaDeTexto);
}
void Alg::TelaQuestao3::mudarVisiabilidadeDaImagemParaInvisivel(PictureBox^ Imagem)
{
	AlteradorPropriedadeImagem api;
	api.alterarVisiabilidadeParaFalso(Imagem);

}
void Alg::TelaQuestao3::mudarVisiabilidadeDaImagemParaVisivel(PictureBox^ Imagem)
{
	AlteradorPropriedadeImagem api;
	api.alterarVisiabilidadeParaVerdadeiro(Imagem);
}

void Alg::TelaQuestao3::mudarVisiabilidadeDoBotaoParaInvisivel(Button^ Botao)
{
	AlteradorPropriedadeBotao apb;
	apb.alterarVisiabilidadeParaFalso(Botao);

}
void Alg::TelaQuestao3::mudarVisiabilidadeDoBotaoParaVisivel(Button^ Botao)
{
	AlteradorPropriedadeBotao apb;
	apb.alterarVisiabilidadeParaVerdadeiro(Botao);
}
void Alg::TelaQuestao3::mudarCorDeFundoLetreiroParaBranco(Label^ Letreiro)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarCorDeFundoParaBranco(Letreiro);
}
void Alg::TelaQuestao3::mudarBordaCaixaDeTextoParaFixada3d(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarBordaParaFixada3d(CaixaDeTexto);
}
void Alg::TelaQuestao3::mudarCorDeFundoLetreiroParaAmarelo(Label^ Resposta)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarCorDeFundoParaAmarelo(Resposta);
}
void Alg::TelaQuestao3::ficarAlternandoCorDeFundoCaixaDeTexto(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	if (CaixaDeTexto->BackColor == System::Drawing::Color::White)
		apct.alterarCorDeFundoParaAmarelo(CaixaDeTexto);
	else
	{
		apct.alterarCorDeFundoParaBranco(CaixaDeTexto);
	}
}
void Alg::TelaQuestao3::mudarCorDeFundoCaixaDeTextoParaAmarelo(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarCorDeFundoParaAmarelo(CaixaDeTexto);
}
void Alg::TelaQuestao3::mudarCorDeFundoCaixaDeTextoParaBranco(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarCorDeFundoParaBranco(CaixaDeTexto);

}
void Alg::TelaQuestao3::mudarBordaCaixaDeTextoParaNenhuma(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarBordaParaNenhuma(CaixaDeTexto);
}
void Alg::TelaQuestao3::mudarCursorCaixaDeTextoParaMao(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarCursorParaMao(CaixaDeTexto);
}
void Alg::TelaQuestao3::mudarLocalizacaoCaixaDeTexto(TextBox^ CaixaDeTexto,int x,int y)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.mudarLocalizacao(CaixaDeTexto, x, y);
}
void Alg::TelaQuestao3::mudarCursorCaixaDeTextoParaNao(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarCursorParaNao(CaixaDeTexto);
}
void Alg::TelaQuestao3::adicionarUnderlineEGerenciala()
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
void Alg::TelaQuestao3::desbloquearOpcoesDeRespostas()
{
	AlteradorPropriedadeBotao apb;

	apb.alterarCursorParaMao(BotaoOpcaoDeResposta1);
	apb.alterarCursorParaMao(BotaoOpcaoDeResposta2);
	apb.alterarCursorParaMao(BotaoOpcaoDeResposta3);
	apb.alterarCursorParaMao(BotaoOpcaoDeResposta4);
	apb.alterarCursorParaMao(BotaoOpcaoDeResposta5);
}
void Alg::TelaQuestao3::verificarSeAsRespostasEstaoCorretas()
{
	desativarTempo(TempoIntervaloResposta);
	if (LetreiroResposta1->Text == BotaoOpcaoDeResposta4->Text && LetreiroResposta3->Text == BotaoOpcaoDeResposta2->Text && (CaixaDeTextoResposta2->Text == "literal" || CaixaDeTextoResposta2->Text == "Literal"
		|| CaixaDeTextoResposta2->Text == "LITERAL") && (CaixaDeTextoResposta4->Text == "leia(Nome)" || CaixaDeTextoResposta4->Text == "Leia(Nome)" || CaixaDeTextoResposta4->Text == "LEIA(Nome)"))
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

void Alg::TelaQuestao3::mudarVisiablidadeDeTodosBotoesOpcoesDeRespostasParaVerdadeiro()
{
	AlteradorPropriedadeBotao apb;

	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta1);
	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta2);
	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta3);
	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta4);
	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta5);
}
void Alg::TelaQuestao3::piscarRespostaASerRespondida()
{
	if (LetreiroResposta1->Text[0] == '_')
	{
		adicionarUnderlineEGerenciala();
		atribuirAcrecimoDeUnderline(LetreiroResposta1);
	}
	else if (CaixaDeTextoResposta2->Text == "")
	{
		ficarAlternandoCorDeFundoCaixaDeTexto(CaixaDeTextoResposta2);
	}
	else if (LetreiroResposta3->Text[0] == '_')
	{
		adicionarUnderlineEGerenciala();
		atribuirAcrecimoDeUnderline(LetreiroResposta3);
	}
	else if (CaixaDeTextoResposta4->Text == "")
	{
		ficarAlternandoCorDeFundoCaixaDeTexto(CaixaDeTextoResposta4);
	}
	else if (LetreiroResposta5->Text[0] == '_')
	{
		adicionarUnderlineEGerenciala();
		atribuirAcrecimoDeUnderline(LetreiroResposta5);
	}
}
void Alg::TelaQuestao3::aumentarTempoTotal()
{
	TempoNaFase++;
	this->LetreiroTempoTotal->Text = (TempoNaFase / 60).ToString() + ":" + (TempoNaFase % 60).ToString();
}
void Alg::TelaQuestao3::executarAoClicarBotaoResposta1()
{
	if (LetreiroResposta1->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta1, BotaoOpcaoDeResposta1->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta1);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta1);
		mudarVisiabilidadeDoBotaoParaVisivel(BotaoReiniciar);
		ativarCaixaDeTexto(CaixaDeTextoResposta2);
	}
	else if (LetreiroResposta3->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta3, BotaoOpcaoDeResposta1->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta1);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta3);
		ativarCaixaDeTexto(CaixaDeTextoResposta4);
	}
	else if (LetreiroResposta5->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta5, BotaoOpcaoDeResposta1->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta1);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta5);
		desativarTempo(TempoIntervaloResposta);
		verificarSeAsRespostasEstaoCorretas();

	}
}

void Alg::TelaQuestao3::executarAoClicarBotaoResposta2()
{
	if (LetreiroResposta1->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta1, BotaoOpcaoDeResposta2->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta2);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta1);
		mudarVisiabilidadeDoBotaoParaVisivel(BotaoReiniciar);
		ativarCaixaDeTexto(CaixaDeTextoResposta2);
	}
	else if (LetreiroResposta3->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta3, BotaoOpcaoDeResposta2->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta2);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta3);
		ativarCaixaDeTexto(CaixaDeTextoResposta4);
	}
	else if (LetreiroResposta5->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta5, BotaoOpcaoDeResposta2->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta2);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta5);
		desativarTempo(TempoIntervaloResposta);
		verificarSeAsRespostasEstaoCorretas();
	}
}

void Alg::TelaQuestao3::executarAoClicarBotaoResposta3()
{
	if (LetreiroResposta1->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta1, BotaoOpcaoDeResposta3->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta3);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta1);
		mudarVisiabilidadeDoBotaoParaVisivel(BotaoReiniciar);
		ativarCaixaDeTexto(CaixaDeTextoResposta2);
	}
	else if (LetreiroResposta3->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta3, BotaoOpcaoDeResposta3->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta3);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta3);
		ativarCaixaDeTexto(CaixaDeTextoResposta4);
	}
	else if (LetreiroResposta5->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta5, BotaoOpcaoDeResposta3->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta3);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta5);
		desativarTempo(TempoIntervaloResposta);
		verificarSeAsRespostasEstaoCorretas();

	}
}

void Alg::TelaQuestao3::executarAoClicarBotaoResposta4()
{
	if (LetreiroResposta1->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta1, BotaoOpcaoDeResposta4->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta4);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta1);
		mudarVisiabilidadeDoBotaoParaVisivel(BotaoReiniciar);
		ativarCaixaDeTexto(CaixaDeTextoResposta2);
	}
	else if (LetreiroResposta3->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta3, BotaoOpcaoDeResposta4->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta4);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta3);
		ativarCaixaDeTexto(CaixaDeTextoResposta4);
	}
	else if (LetreiroResposta5->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta5, BotaoOpcaoDeResposta4->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta4);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta5);
		desativarTempo(TempoIntervaloResposta);
		verificarSeAsRespostasEstaoCorretas();
	}
}

void Alg::TelaQuestao3::executarAoClicarBotaoResposta5()
{
	if (LetreiroResposta1->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta1, BotaoOpcaoDeResposta5->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta5);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta1);
		mudarVisiabilidadeDoBotaoParaVisivel(BotaoReiniciar);
		ativarCaixaDeTexto(CaixaDeTextoResposta2);
	}
	else if (LetreiroResposta3->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta3, BotaoOpcaoDeResposta5->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta5);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta3);
		ativarCaixaDeTexto(CaixaDeTextoResposta4);
	}
	else if (LetreiroResposta5->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta5, BotaoOpcaoDeResposta5->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta5);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta5);
		desativarTempo(TempoIntervaloResposta);
		verificarSeAsRespostasEstaoCorretas();
	}
}

void Alg::TelaQuestao3::executarAoClicarBotaoReiniciar()
{
	mudarVisiablidadeDeTodosBotoesOpcoesDeRespostasParaVerdadeiro();
	atribuirRespostaVaziaACaixaDeTexto(CaixaDeTextoResposta2);
	atribuirRespostaVaziaACaixaDeTexto(CaixaDeTextoResposta4);
	desativarCaixaDeTexto(CaixaDeTextoResposta2);
	desativarCaixaDeTexto(CaixaDeTextoResposta4);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta2);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta4);
	mudarBordaCaixaDeTextoParaFixada3d(CaixaDeTextoResposta2);
	mudarBordaCaixaDeTextoParaFixada3d(CaixaDeTextoResposta4);
	mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta1);
	mudarCorDeFundoLetreiroParaBranco(LetreiroResposta3);
	mudarCorDeFundoLetreiroParaBranco(LetreiroResposta5);
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroResposta1);
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroResposta3);
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroResposta5);
	ativarTempo(TempoIntervaloResposta);
	desbloquearOpcoesDeRespostas();
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta2, 149, 178);
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta4, 29, 285);
	mudarVisiabilidadeDaImagemParaInvisivel(ImagemErrado);
	mudarVisiabilidadeDoBotaoParaInvisivel(BotaoReiniciar);


	QuantidadeResetou++;
}
void Alg::TelaQuestao3::executarAoApertarEnterNaCaixaDeTextoResposta2()
{
	ativarTempo(TempoIntervaloResposta);
	mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta3);
	mudarBordaCaixaDeTextoParaNenhuma(CaixaDeTextoResposta2);
	desativarCaixaDeTexto(CaixaDeTextoResposta2);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta2);
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta2, 149, 180);
}
void Alg::TelaQuestao3::executarAoApertarEnterNaCaixaDeTextoResposta4()
{
	ativarTempo(TempoIntervaloResposta);
	mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta5);
	mudarBordaCaixaDeTextoParaNenhuma(CaixaDeTextoResposta4);
	desativarCaixaDeTexto(CaixaDeTextoResposta4);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta4);
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta4, 29, 289);
}
void Alg::TelaQuestao3::executarAoClicarNaCaixaDeTextoResposta2()
{
	desativarTempo(TempoIntervaloResposta);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta2);
}
void Alg::TelaQuestao3::executarAoClicarNaCaixaDeTextoResposta4()
{
	desativarTempo(TempoIntervaloResposta);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta4);
}
