#include "TelaQuestao4.h"

void Alg::TelaQuestao4::fecharJogo()
{
	System::Windows::Forms::Application::Exit();
}
int Alg::TelaQuestao4::getTempoNaFase()
{
	return TempoNaFase;
}

int Alg::TelaQuestao4::getQuantidadeQueResetouAFase()
{
	return QuantidadeResetou;
}
void Alg::TelaQuestao4::setTempoAnterior(int TempoNaFaseAnterior)
{
	TempoNaFase = TempoNaFaseAnterior;
}

int Alg::TelaQuestao4::getOpcaoIraContinuar()
{
	int QuantidadeRetorna;
	if (OpcaoContinuar)
		QuantidadeRetorna = 1;
	else
		QuantidadeRetorna = -100;
	return QuantidadeRetorna;
}

void Alg::TelaQuestao4::bloquearOpcoesDeRespostas()
{
	AlteradorPropriedadeBotao apb;

	apb.alterarCursorParaNao(BotaoOpcaoDeResposta1);
	apb.alterarCursorParaNao(BotaoOpcaoDeResposta2);
	apb.alterarCursorParaNao(BotaoOpcaoDeResposta3);
	apb.alterarCursorParaNao(BotaoOpcaoDeResposta4);
	apb.alterarCursorParaNao(BotaoOpcaoDeResposta5);
}

void Alg::TelaQuestao4::atribuirRespostaNaoPreenchidaParaAResposta(Label ^ Resposta)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarTexto(Resposta, RespostaNaoPreenchida);
}
void Alg::TelaQuestao4::atribuirAcrecimoDeUnderline(Label^ Resposta)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarTexto(Resposta, AcrecimoDeUnderlines);
}
void Alg::TelaQuestao4::atribuirTextoParaAResposta(Label^Letreiro, String^ Texto)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarTexto(Letreiro, Texto);
}
void Alg::TelaQuestao4::atribuirRespostaVaziaACaixaDeTexto(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	String ^ RespostaVazia = "";
	apct.alterarTexto(CaixaDeTexto, RespostaVazia);
}
void Alg::TelaQuestao4::ativarTempo(Timer^ Tempo)
{
	AlteradorPropriedadeTempo apt;
	apt.habilitarTempo(Tempo);
}

void Alg::TelaQuestao4::desativarTempo(Timer^ Tempo)
{
	AlteradorPropriedadeTempo apt;
	apt.desabilitarTempo(Tempo);
}
void Alg::TelaQuestao4::ativarCaixaDeTexto(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.ativarCaixaDeTexto(CaixaDeTexto);
}
void Alg::TelaQuestao4::desativarCaixaDeTexto(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.desativarCaixaDeTexto(CaixaDeTexto);
}
void Alg::TelaQuestao4::mudarVisiabilidadeDaImagemParaInvisivel(PictureBox^ Imagem)
{
	AlteradorPropriedadeImagem api;
	api.alterarVisiabilidadeParaFalso(Imagem);

}
void Alg::TelaQuestao4::mudarVisiabilidadeDaImagemParaVisivel(PictureBox^ Imagem)
{
	AlteradorPropriedadeImagem api;
	api.alterarVisiabilidadeParaVerdadeiro(Imagem);
}

void Alg::TelaQuestao4::mudarVisiabilidadeDoBotaoParaInvisivel(Button^ Botao)
{
	AlteradorPropriedadeBotao apb;
	apb.alterarVisiabilidadeParaFalso(Botao);

}
void Alg::TelaQuestao4::mudarVisiabilidadeDoBotaoParaVisivel(Button^ Botao)
{
	AlteradorPropriedadeBotao apb;
	apb.alterarVisiabilidadeParaVerdadeiro(Botao);
}
void Alg::TelaQuestao4::mudarCorDeFundoLetreiroParaBranco(Label^ Letreiro)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarCorDeFundoParaBranco(Letreiro);
}
void Alg::TelaQuestao4::mudarBordaCaixaDeTextoParaFixada3d(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarBordaParaFixada3d(CaixaDeTexto);
}
void Alg::TelaQuestao4::mudarCorDeFundoLetreiroParaAmarelo(Label^ Resposta)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarCorDeFundoParaAmarelo(Resposta);
}
void Alg::TelaQuestao4::ficarAlternandoCorDeFundoCaixaDeTexto(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	if (CaixaDeTexto->BackColor == System::Drawing::Color::White)
		apct.alterarCorDeFundoParaAmarelo(CaixaDeTexto);
	else
	{
		apct.alterarCorDeFundoParaBranco(CaixaDeTexto);
	}
}
void Alg::TelaQuestao4::mudarCorDeFundoCaixaDeTextoParaAmarelo(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarCorDeFundoParaAmarelo(CaixaDeTexto);
}
void Alg::TelaQuestao4::mudarCorDeFundoCaixaDeTextoParaBranco(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarCorDeFundoParaBranco(CaixaDeTexto);

}
void Alg::TelaQuestao4::alterarTextoDoBotao(Button^ Botao, String^ Nome)
{
	AlteradorPropriedadeBotao apb;
	apb.alterarTextoDoBotao(Botao, Nome);
}
void Alg::TelaQuestao4::mudarBordaCaixaDeTextoParaNenhuma(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarBordaParaNenhuma(CaixaDeTexto);
}
void Alg::TelaQuestao4::mudarCursorCaixaDeTextoParaMao(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarCursorParaMao(CaixaDeTexto);
}
void Alg::TelaQuestao4::mudarLocalizacaoCaixaDeTexto(TextBox^ CaixaDeTexto, int x, int y)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.mudarLocalizacao(CaixaDeTexto, x, y);
}
void Alg::TelaQuestao4::mudarCursorCaixaDeTextoParaNao(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarCursorParaNao(CaixaDeTexto);
}
void Alg::TelaQuestao4::adicionarUnderlineEGerenciala()
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
void Alg::TelaQuestao4::desbloquearOpcoesDeRespostas()
{
	AlteradorPropriedadeBotao apb;

	apb.alterarCursorParaMao(BotaoOpcaoDeResposta1);
	apb.alterarCursorParaMao(BotaoOpcaoDeResposta2);
	apb.alterarCursorParaMao(BotaoOpcaoDeResposta3);
	apb.alterarCursorParaMao(BotaoOpcaoDeResposta4);
	apb.alterarCursorParaMao(BotaoOpcaoDeResposta5);
}
void Alg::TelaQuestao4::verificarSeAsRespostasEstaoCorretas()
{
	desativarTempo(TempoIntervaloResposta);
	if (LetreiroResposta3->Text == BotaoOpcaoDeResposta2->Text && LetreiroResposta4->Text == BotaoOpcaoDeResposta4->Text && CaixaDeTextoResposta2->Text == CaixaDeTextoResposta1->Text && LetreiroResposta5->Text==BotaoOpcaoDeResposta5->Text)
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

void Alg::TelaQuestao4::mudarVisiablidadeDeTodosBotoesOpcoesDeRespostasParaVerdadeiro()
{
	AlteradorPropriedadeBotao apb;

	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta1);
	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta2);
	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta3);
	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta4);
	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta5);
}
void Alg::TelaQuestao4::piscarRespostaASerRespondida()
{
	if (CaixaDeTextoResposta1->Text == "")
	{
		ficarAlternandoCorDeFundoCaixaDeTexto(CaixaDeTextoResposta1);
	}
	else if (CaixaDeTextoResposta2->Text == "")
	{
		ficarAlternandoCorDeFundoCaixaDeTexto(CaixaDeTextoResposta2);
	}
	else if (LetreiroResposta3->Text[0] == '_')
	{
		adicionarUnderlineEGerenciala();
		atribuirAcrecimoDeUnderline(LetreiroResposta3);
		atribuirAcrecimoDeUnderline(LetreiroResposta32);
	}
	else if (LetreiroResposta4->Text[0] == '_')
	{
		adicionarUnderlineEGerenciala();
		atribuirAcrecimoDeUnderline(LetreiroResposta4);
	}
	else if (LetreiroResposta5->Text[0] == '_')
	{
		adicionarUnderlineEGerenciala();
		atribuirAcrecimoDeUnderline(LetreiroResposta5);
	}
}
void Alg::TelaQuestao4::aumentarTempoTotal()
{
	TempoNaFase++;
	this->LetreiroTempoTotal->Text = (TempoNaFase / 60).ToString() + ":" + (TempoNaFase % 60).ToString();
}
void Alg::TelaQuestao4::executarAoClicarBotaoResposta1()
{
	if (LetreiroResposta3->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta3, BotaoOpcaoDeResposta1->Text);
		atribuirTextoParaAResposta(LetreiroResposta32, BotaoOpcaoDeResposta1->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta1);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta3);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta32);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta4);
	}
	else if (LetreiroResposta4->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta4, BotaoOpcaoDeResposta1->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta1);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta4);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta5);
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

void Alg::TelaQuestao4::executarAoClicarBotaoResposta2()
{
	if (LetreiroResposta3->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta3, BotaoOpcaoDeResposta2->Text);
		atribuirTextoParaAResposta(LetreiroResposta32, BotaoOpcaoDeResposta2->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta2);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta3);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta32);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta4);
	}
	else if (LetreiroResposta4->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta4, BotaoOpcaoDeResposta2->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta2);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta4);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta5);
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

void Alg::TelaQuestao4::executarAoClicarBotaoResposta3()
{
	if (LetreiroResposta3->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta3, BotaoOpcaoDeResposta3->Text);
		atribuirTextoParaAResposta(LetreiroResposta32, BotaoOpcaoDeResposta3->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta3);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta3);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta32);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta4);
	}
	else if (LetreiroResposta4->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta4, BotaoOpcaoDeResposta3->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta3);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta4);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta5);
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

void Alg::TelaQuestao4::executarAoClicarBotaoResposta4()
{
	if (LetreiroResposta3->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta3, BotaoOpcaoDeResposta4->Text);
		atribuirTextoParaAResposta(LetreiroResposta32, BotaoOpcaoDeResposta4->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta4);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta3);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta32);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta4);
	}
	else if (LetreiroResposta4->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta4, BotaoOpcaoDeResposta4->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta4);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta4);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta5);
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

void Alg::TelaQuestao4::executarAoClicarBotaoResposta5()
{
	if (LetreiroResposta3->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta3, BotaoOpcaoDeResposta5->Text);
		atribuirTextoParaAResposta(LetreiroResposta32, BotaoOpcaoDeResposta5->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta5);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta3);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta32);
	}
	else if (LetreiroResposta4->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta4, BotaoOpcaoDeResposta5->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta5);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta4);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta5);
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

void Alg::TelaQuestao4::executarAoClicarBotaoReiniciar()
{
	mudarVisiablidadeDeTodosBotoesOpcoesDeRespostasParaVerdadeiro();
	atribuirRespostaVaziaACaixaDeTexto(CaixaDeTextoResposta1);
	atribuirRespostaVaziaACaixaDeTexto(CaixaDeTextoResposta2);
	ativarCaixaDeTexto(CaixaDeTextoResposta1);
	desativarCaixaDeTexto(CaixaDeTextoResposta2);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta1);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta2);
	mudarBordaCaixaDeTextoParaFixada3d(CaixaDeTextoResposta1);
	mudarBordaCaixaDeTextoParaFixada3d(CaixaDeTextoResposta2);
	mudarCorDeFundoLetreiroParaBranco(LetreiroResposta3);
	mudarCorDeFundoLetreiroParaBranco(LetreiroResposta32);
	mudarCorDeFundoLetreiroParaBranco(LetreiroResposta4);
	mudarCorDeFundoLetreiroParaBranco(LetreiroResposta5);
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroResposta3);
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroResposta32);
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroResposta4);
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroResposta5);
	ativarTempo(TempoIntervaloResposta);
	desbloquearOpcoesDeRespostas();
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta1, 27, 191);
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta2, 78, 241);
	mudarVisiabilidadeDaImagemParaInvisivel(ImagemErrado);
	mudarVisiabilidadeDoBotaoParaInvisivel(BotaoReiniciar);
	AcrecimoDeUnderlines = "";
	alterarTextoDoBotao(BotaoOpcaoDeResposta4, "Repita");


	QuantidadeResetou++;
}
void Alg::TelaQuestao4::executarAoApertarEnterNaCaixaDeTextoResposta1()
{
	ativarTempo(TempoIntervaloResposta);
	mudarBordaCaixaDeTextoParaNenhuma(CaixaDeTextoResposta1);
	desativarCaixaDeTexto(CaixaDeTextoResposta1);
	mudarVisiabilidadeDoBotaoParaVisivel(BotaoReiniciar);
	ativarCaixaDeTexto(CaixaDeTextoResposta2);
	alterarTextoDoBotao(BotaoOpcaoDeResposta4, CaixaDeTextoResposta1->Text);
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta1, 27, 195);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta1);
}
void Alg::TelaQuestao4::executarAoApertarEnterNaCaixaDeTextoResposta2()
{
	ativarTempo(TempoIntervaloResposta);
	mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta3);
	mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta32);
	mudarBordaCaixaDeTextoParaNenhuma(CaixaDeTextoResposta2);
	desativarCaixaDeTexto(CaixaDeTextoResposta2);
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta2, 78, 250);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta2);
}
void Alg::TelaQuestao4::executarAoClicarNaCaixaDeTextoResposta1()
{
	desativarTempo(TempoIntervaloResposta);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta1);
}
void Alg::TelaQuestao4::executarAoClicarNaCaixaDeTextoResposta2()
{
	desativarTempo(TempoIntervaloResposta);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta2);
}
