#include "TelaQuestao5.h"

void Alg::TelaQuestao5::fecharJogo()
{
	System::Windows::Forms::Application::Exit();
}
int Alg::TelaQuestao5::getTempoNaFase()
{
	return TempoNaFase;
}

int Alg::TelaQuestao5::getQuantidadeQueResetouAFase()
{
	return QuantidadeResetou;
}
void Alg::TelaQuestao5::setTempoAnterior(int TempoNaFaseAnterior)
{
	TempoNaFase = TempoNaFaseAnterior;
}

int Alg::TelaQuestao5::getOpcaoIraContinuar()
{
	int QuantidadeRetorna;
	if (OpcaoContinuar)
		QuantidadeRetorna = 1;
	else
		QuantidadeRetorna = -100;
	return QuantidadeRetorna;
}

void Alg::TelaQuestao5::bloquearOpcoesDeRespostas()
{
	AlteradorPropriedadeBotao apb;

	apb.alterarCursorParaNao(BotaoOpcaoDeResposta1);
	apb.alterarCursorParaNao(BotaoOpcaoDeResposta2);
	apb.alterarCursorParaNao(BotaoOpcaoDeResposta3);
	apb.alterarCursorParaNao(BotaoOpcaoDeResposta4);
	apb.alterarCursorParaNao(BotaoOpcaoDeResposta5);
}

void Alg::TelaQuestao5::atribuirRespostaNaoPreenchidaParaAResposta(Label ^ Resposta)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarTexto(Resposta, RespostaNaoPreenchida);
}
void Alg::TelaQuestao5::atribuirAcrecimoDeUnderline(Label^ Resposta)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarTexto(Resposta, AcrecimoDeUnderlines);
}
void Alg::TelaQuestao5::atribuirTextoParaAResposta(Label^Letreiro, String^ Texto)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarTexto(Letreiro, Texto);
}
void Alg::TelaQuestao5::atribuirRespostaVaziaACaixaDeTexto(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	String ^ RespostaVazia = "";
	apct.alterarTexto(CaixaDeTexto, RespostaVazia);
}
void Alg::TelaQuestao5::ativarTempo(Timer^ Tempo)
{
	AlteradorPropriedadeTempo apt;
	apt.habilitarTempo(Tempo);
}

void Alg::TelaQuestao5::desativarTempo(Timer^ Tempo)
{
	AlteradorPropriedadeTempo apt;
	apt.desabilitarTempo(Tempo);
}
void Alg::TelaQuestao5::ativarCaixaDeTexto(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.ativarCaixaDeTexto(CaixaDeTexto);
}
void Alg::TelaQuestao5::desativarCaixaDeTexto(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.desativarCaixaDeTexto(CaixaDeTexto);
}
void Alg::TelaQuestao5::mudarVisiabilidadeDaImagemParaInvisivel(PictureBox^ Imagem)
{
	AlteradorPropriedadeImagem api;
	api.alterarVisiabilidadeParaFalso(Imagem);

}
void Alg::TelaQuestao5::mudarVisiabilidadeDaImagemParaVisivel(PictureBox^ Imagem)
{
	AlteradorPropriedadeImagem api;
	api.alterarVisiabilidadeParaVerdadeiro(Imagem);
}

void Alg::TelaQuestao5::mudarVisiabilidadeDoBotaoParaInvisivel(Button^ Botao)
{
	AlteradorPropriedadeBotao apb;
	apb.alterarVisiabilidadeParaFalso(Botao);

}
void Alg::TelaQuestao5::mudarVisiabilidadeDoBotaoParaVisivel(Button^ Botao)
{
	AlteradorPropriedadeBotao apb;
	apb.alterarVisiabilidadeParaVerdadeiro(Botao);
}
void Alg::TelaQuestao5::mudarCorDeFundoLetreiroParaBranco(Label^ Letreiro)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarCorDeFundoParaBranco(Letreiro);
}
void Alg::TelaQuestao5::mudarBordaCaixaDeTextoParaFixada3d(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarBordaParaFixada3d(CaixaDeTexto);
}
void Alg::TelaQuestao5::mudarCorDeFundoLetreiroParaAmarelo(Label^ Resposta)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarCorDeFundoParaAmarelo(Resposta);
}
void Alg::TelaQuestao5::ficarAlternandoCorDeFundoCaixaDeTexto(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	if (CaixaDeTexto->BackColor == System::Drawing::Color::White)
		apct.alterarCorDeFundoParaAmarelo(CaixaDeTexto);
	else
	{
		apct.alterarCorDeFundoParaBranco(CaixaDeTexto);
	}
}
void Alg::TelaQuestao5::mudarCorDeFundoCaixaDeTextoParaAmarelo(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarCorDeFundoParaAmarelo(CaixaDeTexto);
}
void Alg::TelaQuestao5::mudarCorDeFundoCaixaDeTextoParaBranco(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarCorDeFundoParaBranco(CaixaDeTexto);

}
void Alg::TelaQuestao5::alterarTextoDoBotao(Button^ Botao, String^ Nome)
{
	AlteradorPropriedadeBotao apb;
	apb.alterarTextoDoBotao(Botao, Nome);
}
void Alg::TelaQuestao5::mudarBordaCaixaDeTextoParaNenhuma(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarBordaParaNenhuma(CaixaDeTexto);
}
void Alg::TelaQuestao5::mudarCursorCaixaDeTextoParaMao(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarCursorParaMao(CaixaDeTexto);
}
void Alg::TelaQuestao5::mudarLocalizacaoCaixaDeTexto(TextBox^ CaixaDeTexto, int x, int y)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.mudarLocalizacao(CaixaDeTexto, x, y);
}
void Alg::TelaQuestao5::mudarCursorCaixaDeTextoParaNao(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarCursorParaNao(CaixaDeTexto);
}
void Alg::TelaQuestao5::adicionarUnderlineEGerenciala()
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
void Alg::TelaQuestao5::desbloquearOpcoesDeRespostas()
{
	AlteradorPropriedadeBotao apb;

	apb.alterarCursorParaMao(BotaoOpcaoDeResposta1);
	apb.alterarCursorParaMao(BotaoOpcaoDeResposta2);
	apb.alterarCursorParaMao(BotaoOpcaoDeResposta3);
	apb.alterarCursorParaMao(BotaoOpcaoDeResposta4);
	apb.alterarCursorParaMao(BotaoOpcaoDeResposta5);
}
void Alg::TelaQuestao5::verificarSeAsRespostasEstaoCorretas()
{
	desativarTempo(TempoIntervaloResposta);
	if (LetreiroResposta3->Text==BotaoOpcaoDeResposta1->Text&&
		LetreiroResposta4->Text==BotaoOpcaoDeResposta3->Text&&
		LetreiroResposta5->Text==BotaoOpcaoDeResposta4->Text&&
		CaixaDeTextoResposta5->Text==CaixaDeTextoResposta1->Text&&
		CaixaDeTextoResposta6->Text==CaixaDeTextoResposta2->Text&&
		LetreiroResposta7->Text==CaixaDeTextoResposta1->Text&&
		CaixaDeTextoResposta8->Text==CaixaDeTextoResposta2->Text&&
		LetreiroResposta9->Text==CaixaDeTextoResposta2->Text)
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

void Alg::TelaQuestao5::mudarVisiablidadeDeTodosBotoesOpcoesDeRespostasParaVerdadeiro()
{
	AlteradorPropriedadeBotao apb;

	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta1);
	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta2);
	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta3);
	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta4);
	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta5);
}
void Alg::TelaQuestao5::piscarRespostaASerRespondida()
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
	}
	else if (LetreiroResposta4->Text[0] == '_')
	{
		adicionarUnderlineEGerenciala();
		atribuirAcrecimoDeUnderline(LetreiroResposta4);
		atribuirAcrecimoDeUnderline(LetreiroResposta42);
	}
	else if (LetreiroResposta5->Text[0] == '_')
	{
		adicionarUnderlineEGerenciala();
		atribuirAcrecimoDeUnderline(LetreiroResposta5);
	}
	else if (CaixaDeTextoResposta5->Text == "")
	{
		ficarAlternandoCorDeFundoCaixaDeTexto(CaixaDeTextoResposta5);
	}
	else if (CaixaDeTextoResposta6->Text == "")
	{
		ficarAlternandoCorDeFundoCaixaDeTexto(CaixaDeTextoResposta6);
	}
	else if (LetreiroResposta7->Text[0] == '_')
	{
		adicionarUnderlineEGerenciala();
		atribuirAcrecimoDeUnderline(LetreiroResposta7);
	}
	else if (CaixaDeTextoResposta8->Text == "")
	{
		ficarAlternandoCorDeFundoCaixaDeTexto(CaixaDeTextoResposta8);
	}
	else if (LetreiroResposta9->Text[0] == '_')
	{
		adicionarUnderlineEGerenciala();
		atribuirAcrecimoDeUnderline(LetreiroResposta9);
	}

}
void Alg::TelaQuestao5::aumentarTempoTotal()
{
	TempoNaFase++;
	this->LetreiroTempoTotal->Text = (TempoNaFase / 60).ToString() + ":" + (TempoNaFase % 60).ToString();
}
void Alg::TelaQuestao5::executarAoClicarBotaoResposta1()
{
	if (LetreiroResposta3->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta3, BotaoOpcaoDeResposta1->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta1);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta3);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta4);
	}
	else if (LetreiroResposta4->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta4, BotaoOpcaoDeResposta1->Text);
		atribuirTextoParaAResposta(LetreiroResposta42, BotaoOpcaoDeResposta1->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta1);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta4);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta42);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta5);
	}
	else if (LetreiroResposta5->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta5, BotaoOpcaoDeResposta1->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta1);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta5);
		ativarCaixaDeTexto(CaixaDeTextoResposta5);
	}
	else if (LetreiroResposta7->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta7, BotaoOpcaoDeResposta1->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta1);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta7);
		ativarCaixaDeTexto(CaixaDeTextoResposta8);
	}
	else if (LetreiroResposta9->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta9, BotaoOpcaoDeResposta1->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta1);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta9);
		desativarTempo(TempoIntervaloResposta);
		verificarSeAsRespostasEstaoCorretas();
	}
}

void Alg::TelaQuestao5::executarAoClicarBotaoResposta2()
{
	if (LetreiroResposta3->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta3, BotaoOpcaoDeResposta2->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta2);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta3);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta4);
	}
	else if (LetreiroResposta4->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta4, BotaoOpcaoDeResposta2->Text);
		atribuirTextoParaAResposta(LetreiroResposta42, BotaoOpcaoDeResposta2->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta2);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta4);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta42);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta5);
	}
	else if (LetreiroResposta5->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta5, BotaoOpcaoDeResposta2->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta2);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta5);
		ativarCaixaDeTexto(CaixaDeTextoResposta5);
	}
	else if (LetreiroResposta7->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta7, BotaoOpcaoDeResposta2->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta2);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta7);
		ativarCaixaDeTexto(CaixaDeTextoResposta8);
	}
	else if (LetreiroResposta9->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta9, BotaoOpcaoDeResposta2->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta2);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta9);
		desativarTempo(TempoIntervaloResposta);
		verificarSeAsRespostasEstaoCorretas();
	}
}

void Alg::TelaQuestao5::executarAoClicarBotaoResposta3()
{
	if (LetreiroResposta3->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta3, BotaoOpcaoDeResposta3->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta3);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta3);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta4);
	}
	else if (LetreiroResposta4->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta4, BotaoOpcaoDeResposta3->Text);
		atribuirTextoParaAResposta(LetreiroResposta42, BotaoOpcaoDeResposta3->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta3);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta4);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta42);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta5);
	}
	else if (LetreiroResposta5->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta5, BotaoOpcaoDeResposta3->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta3);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta5);
		ativarCaixaDeTexto(CaixaDeTextoResposta5);
	}
	else if (LetreiroResposta7->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta7, BotaoOpcaoDeResposta3->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta3);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta7);
		ativarCaixaDeTexto(CaixaDeTextoResposta8);
	}
	else if (LetreiroResposta9->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta9, BotaoOpcaoDeResposta3->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta3);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta9);
		desativarTempo(TempoIntervaloResposta);
		verificarSeAsRespostasEstaoCorretas();
	}
}

void Alg::TelaQuestao5::executarAoClicarBotaoResposta4()
{
	if (LetreiroResposta3->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta3, BotaoOpcaoDeResposta4->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta4);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta3);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta4);
	}
	else if (LetreiroResposta4->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta4, BotaoOpcaoDeResposta4->Text);
		atribuirTextoParaAResposta(LetreiroResposta42, BotaoOpcaoDeResposta4->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta4);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta4);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta42);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta5);
	}
	else if (LetreiroResposta5->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta5, BotaoOpcaoDeResposta4->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta4);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta5);
		ativarCaixaDeTexto(CaixaDeTextoResposta5);
	}
	else if (LetreiroResposta7->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta7, BotaoOpcaoDeResposta4->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta4);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta7);
		ativarCaixaDeTexto(CaixaDeTextoResposta8);
	}
	else if (LetreiroResposta9->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta9, BotaoOpcaoDeResposta4->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta4);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta9);
		desativarTempo(TempoIntervaloResposta);
		verificarSeAsRespostasEstaoCorretas();
	}
}

void Alg::TelaQuestao5::executarAoClicarBotaoResposta5()
{
	if (LetreiroResposta3->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta3, BotaoOpcaoDeResposta5->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta5);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta3);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta4);
	}
	else if (LetreiroResposta4->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta4, BotaoOpcaoDeResposta5->Text);
		atribuirTextoParaAResposta(LetreiroResposta42, BotaoOpcaoDeResposta5->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta5);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta4);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta42);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta5);
	}
	else if (LetreiroResposta5->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta5, BotaoOpcaoDeResposta5->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta5);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta5);
		ativarCaixaDeTexto(CaixaDeTextoResposta5);
	}
	else if (LetreiroResposta7->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta7, BotaoOpcaoDeResposta5->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta5);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta7);
		ativarCaixaDeTexto(CaixaDeTextoResposta8);
	}
	else if (LetreiroResposta9->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta9, BotaoOpcaoDeResposta5->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta5);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta9);
		desativarTempo(TempoIntervaloResposta);
		verificarSeAsRespostasEstaoCorretas();
	}
}

void Alg::TelaQuestao5::executarAoClicarBotaoReiniciar()
{
	mudarVisiablidadeDeTodosBotoesOpcoesDeRespostasParaVerdadeiro();
	atribuirRespostaVaziaACaixaDeTexto(CaixaDeTextoResposta1);
	atribuirRespostaVaziaACaixaDeTexto(CaixaDeTextoResposta2);
	atribuirRespostaVaziaACaixaDeTexto(CaixaDeTextoResposta5);
	atribuirRespostaVaziaACaixaDeTexto(CaixaDeTextoResposta6);
	atribuirRespostaVaziaACaixaDeTexto(CaixaDeTextoResposta8);
	ativarCaixaDeTexto(CaixaDeTextoResposta1);
	desativarCaixaDeTexto(CaixaDeTextoResposta2);
	desativarCaixaDeTexto(CaixaDeTextoResposta5);
	desativarCaixaDeTexto(CaixaDeTextoResposta6);
	desativarCaixaDeTexto(CaixaDeTextoResposta8);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta1);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta2);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta5);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta6);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta8);
	mudarBordaCaixaDeTextoParaFixada3d(CaixaDeTextoResposta1);
	mudarBordaCaixaDeTextoParaFixada3d(CaixaDeTextoResposta2);
	mudarBordaCaixaDeTextoParaFixada3d(CaixaDeTextoResposta5);
	mudarBordaCaixaDeTextoParaFixada3d(CaixaDeTextoResposta6);
	mudarBordaCaixaDeTextoParaFixada3d(CaixaDeTextoResposta8);
	mudarCorDeFundoLetreiroParaBranco(LetreiroResposta3);
	mudarCorDeFundoLetreiroParaBranco(LetreiroResposta4);
	mudarCorDeFundoLetreiroParaBranco(LetreiroResposta42);
	mudarCorDeFundoLetreiroParaBranco(LetreiroResposta5);
	mudarCorDeFundoLetreiroParaBranco(LetreiroResposta7);
	mudarCorDeFundoLetreiroParaBranco(LetreiroResposta9);
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroResposta3);
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroResposta4);
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroResposta42);
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroResposta5);
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroResposta7);
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroResposta9);
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroCompletar0);
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroCompletar1);
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroCompletar2);
	ativarTempo(TempoIntervaloResposta);
	desbloquearOpcoesDeRespostas();
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta1, 29, 237);
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta2, 29, 290);
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta5, 133, 400);
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta6, 75, 452);
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta8, 29,508);
	mudarVisiabilidadeDaImagemParaInvisivel(ImagemErrado);
	mudarVisiabilidadeDoBotaoParaInvisivel(BotaoReiniciar);
	AcrecimoDeUnderlines = "";
	alterarTextoDoBotao(BotaoOpcaoDeResposta2, "Enquanto");
	alterarTextoDoBotao(BotaoOpcaoDeResposta5, "Se");



	QuantidadeResetou++;
}
void Alg::TelaQuestao5::executarAoApertarEnterNaCaixaDeTextoResposta1()
{
	ativarTempo(TempoIntervaloResposta);
	mudarBordaCaixaDeTextoParaNenhuma(CaixaDeTextoResposta1);
	desativarCaixaDeTexto(CaixaDeTextoResposta1);
	ativarCaixaDeTexto(CaixaDeTextoResposta2);
	mudarVisiabilidadeDoBotaoParaVisivel(BotaoReiniciar);
	alterarTextoDoBotao(BotaoOpcaoDeResposta2, CaixaDeTextoResposta1->Text);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta1);

	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta1, 29, 242);
}
void Alg::TelaQuestao5::executarAoApertarEnterNaCaixaDeTextoResposta2()
{
	ativarTempo(TempoIntervaloResposta);
	mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta3);
	mudarBordaCaixaDeTextoParaNenhuma(CaixaDeTextoResposta2);
	desativarCaixaDeTexto(CaixaDeTextoResposta2);
	alterarTextoDoBotao(BotaoOpcaoDeResposta5, CaixaDeTextoResposta2->Text);
	atribuirTextoParaAResposta(LetreiroCompletar0, CaixaDeTextoResposta2->Text);
	atribuirTextoParaAResposta(LetreiroCompletar1, CaixaDeTextoResposta2->Text);
	atribuirTextoParaAResposta(LetreiroCompletar2, CaixaDeTextoResposta2->Text);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta2);
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta2, 29, 296);
}
void Alg::TelaQuestao5::executarAoApertarEnterNaCaixaDeTextoResposta5()
{
	ativarTempo(TempoIntervaloResposta);
	mudarBordaCaixaDeTextoParaNenhuma(CaixaDeTextoResposta5);
	desativarCaixaDeTexto(CaixaDeTextoResposta5);
	ativarCaixaDeTexto(CaixaDeTextoResposta6);
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta5, 133, 407);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta5);
}
void Alg::TelaQuestao5::executarAoApertarEnterNaCaixaDeTextoResposta6()
{
	ativarTempo(TempoIntervaloResposta);
	mudarBordaCaixaDeTextoParaNenhuma(CaixaDeTextoResposta6);
	desativarCaixaDeTexto(CaixaDeTextoResposta6);
	mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta7);
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta6, 75, 456);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta6);
}
void Alg::TelaQuestao5::executarAoApertarEnterNaCaixaDeTextoResposta8()
{
	ativarTempo(TempoIntervaloResposta);
	mudarBordaCaixaDeTextoParaNenhuma(CaixaDeTextoResposta8);
	desativarCaixaDeTexto(CaixaDeTextoResposta8);
	mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta9);
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta8, 29, 511);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta8);
}
void Alg::TelaQuestao5::executarAoClicarNaCaixaDeTextoResposta1()
{
	desativarTempo(TempoIntervaloResposta);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta1);
}
void Alg::TelaQuestao5::executarAoClicarNaCaixaDeTextoResposta2()
{
	desativarTempo(TempoIntervaloResposta);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta2);
}
void Alg::TelaQuestao5::executarAoClicarNaCaixaDeTextoResposta5()
{
	desativarTempo(TempoIntervaloResposta);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta5);
}
void Alg::TelaQuestao5::executarAoClicarNaCaixaDeTextoResposta6()
{
	desativarTempo(TempoIntervaloResposta);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta6);
}
void Alg::TelaQuestao5::executarAoClicarNaCaixaDeTextoResposta8()
{
	desativarTempo(TempoIntervaloResposta);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta8);
}
