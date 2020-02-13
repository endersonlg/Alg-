#include "TelaQuestao6.h"

void Alg::TelaQuestao6::fecharJogo()
{
	System::Windows::Forms::Application::Exit();
}
int Alg::TelaQuestao6::getTempoNaFase()
{
	return TempoNaFase;
}

int Alg::TelaQuestao6::getQuantidadeQueResetouAFase()
{
	return QuantidadeResetou;
}
void Alg::TelaQuestao6::setTempoAnterior(int TempoNaFaseAnterior)
{
	TempoNaFase = TempoNaFaseAnterior;
}

int Alg::TelaQuestao6::getOpcaoIraContinuar()
{
	int QuantidadeRetorna;
	if (OpcaoContinuar)
		QuantidadeRetorna = 1;
	else
		QuantidadeRetorna = -100;
	return QuantidadeRetorna;
}

void Alg::TelaQuestao6::bloquearOpcoesDeRespostas()
{
	AlteradorPropriedadeBotao apb;

	apb.alterarCursorParaNao(BotaoOpcaoDeResposta1);
	apb.alterarCursorParaNao(BotaoOpcaoDeResposta2);
	apb.alterarCursorParaNao(BotaoOpcaoDeResposta3);
	apb.alterarCursorParaNao(BotaoOpcaoDeResposta4);
	apb.alterarCursorParaNao(BotaoOpcaoDeResposta5);
}

void Alg::TelaQuestao6::atribuirRespostaNaoPreenchidaParaAResposta(Label ^ Resposta)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarTexto(Resposta, RespostaNaoPreenchida);
}
void Alg::TelaQuestao6::atribuirAcrecimoDeUnderline(Label^ Resposta)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarTexto(Resposta, AcrecimoDeUnderlines);
}
void Alg::TelaQuestao6::atribuirTextoParaAResposta(Label^Letreiro, String^ Texto)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarTexto(Letreiro, Texto);
}
void Alg::TelaQuestao6::atribuirRespostaVaziaACaixaDeTexto(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	String ^ RespostaVazia = "";
	apct.alterarTexto(CaixaDeTexto, RespostaVazia);
}
void Alg::TelaQuestao6::ativarTempo(Timer^ Tempo)
{
	AlteradorPropriedadeTempo apt;
	apt.habilitarTempo(Tempo);
}

void Alg::TelaQuestao6::desativarTempo(Timer^ Tempo)
{
	AlteradorPropriedadeTempo apt;
	apt.desabilitarTempo(Tempo);
}
void Alg::TelaQuestao6::ativarCaixaDeTexto(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.ativarCaixaDeTexto(CaixaDeTexto);
}
void Alg::TelaQuestao6::desativarCaixaDeTexto(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.desativarCaixaDeTexto(CaixaDeTexto);
}
void Alg::TelaQuestao6::mudarVisiabilidadeDaImagemParaInvisivel(PictureBox^ Imagem)
{
	AlteradorPropriedadeImagem api;
	api.alterarVisiabilidadeParaFalso(Imagem);

}
void Alg::TelaQuestao6::mudarVisiabilidadeDaImagemParaVisivel(PictureBox^ Imagem)
{
	AlteradorPropriedadeImagem api;
	api.alterarVisiabilidadeParaVerdadeiro(Imagem);
}

void Alg::TelaQuestao6::mudarVisiabilidadeDoBotaoParaInvisivel(Button^ Botao)
{
	AlteradorPropriedadeBotao apb;
	apb.alterarVisiabilidadeParaFalso(Botao);

}
void Alg::TelaQuestao6::mudarVisiabilidadeDoBotaoParaVisivel(Button^ Botao)
{
	AlteradorPropriedadeBotao apb;
	apb.alterarVisiabilidadeParaVerdadeiro(Botao);
}
void Alg::TelaQuestao6::mudarCorDeFundoLetreiroParaBranco(Label^ Letreiro)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarCorDeFundoParaBranco(Letreiro);
}
void Alg::TelaQuestao6::mudarBordaCaixaDeTextoParaFixada3d(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarBordaParaFixada3d(CaixaDeTexto);
}
void Alg::TelaQuestao6::mudarCorDeFundoLetreiroParaAmarelo(Label^ Resposta)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarCorDeFundoParaAmarelo(Resposta);
}
void Alg::TelaQuestao6::ficarAlternandoCorDeFundoCaixaDeTexto(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	if (CaixaDeTexto->BackColor == System::Drawing::Color::White)
		apct.alterarCorDeFundoParaAmarelo(CaixaDeTexto);
	else
	{
		apct.alterarCorDeFundoParaBranco(CaixaDeTexto);
	}
}
void Alg::TelaQuestao6::mudarCorDeFundoCaixaDeTextoParaAmarelo(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarCorDeFundoParaAmarelo(CaixaDeTexto);
}
void Alg::TelaQuestao6::mudarCorDeFundoCaixaDeTextoParaBranco(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarCorDeFundoParaBranco(CaixaDeTexto);

}
void Alg::TelaQuestao6::alterarTextoDoBotao(Button^ Botao, String^ Nome)
{
	AlteradorPropriedadeBotao apb;
	apb.alterarTextoDoBotao(Botao, Nome);
}
void Alg::TelaQuestao6::mudarBordaCaixaDeTextoParaNenhuma(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarBordaParaNenhuma(CaixaDeTexto);
}
void Alg::TelaQuestao6::mudarCursorCaixaDeTextoParaMao(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarCursorParaMao(CaixaDeTexto);
}
void Alg::TelaQuestao6::mudarLocalizacaoCaixaDeTexto(TextBox^ CaixaDeTexto, int x, int y)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.mudarLocalizacao(CaixaDeTexto, x, y);
}
void Alg::TelaQuestao6::mudarCursorCaixaDeTextoParaNao(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarCursorParaNao(CaixaDeTexto);
}
void Alg::TelaQuestao6::adicionarUnderlineEGerenciala()
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
void Alg::TelaQuestao6::desbloquearOpcoesDeRespostas()
{
	AlteradorPropriedadeBotao apb;

	apb.alterarCursorParaMao(BotaoOpcaoDeResposta1);
	apb.alterarCursorParaMao(BotaoOpcaoDeResposta2);
	apb.alterarCursorParaMao(BotaoOpcaoDeResposta3);
	apb.alterarCursorParaMao(BotaoOpcaoDeResposta4);
	apb.alterarCursorParaMao(BotaoOpcaoDeResposta5);
}
void Alg::TelaQuestao6::verificarSeAsRespostasEstaoCorretas()
{
	desativarTempo(TempoIntervaloResposta);
	if ((CaixaDeTextoResposta2->Text == "inteiro"||CaixaDeTextoResposta2->Text=="Inteiro")&&
		LetreiroResposta3->Text==BotaoOpcaoDeResposta1->Text&&
		(CaixaDeTextoResposta4->Text == "leia(" + CaixaDeTextoResposta1->Text + ")" || CaixaDeTextoResposta4->Text == "Leia(" + CaixaDeTextoResposta1->Text + ")"||
		CaixaDeTextoResposta4->Text == "leia (" + CaixaDeTextoResposta1->Text + ")" || CaixaDeTextoResposta4->Text == "Leia (" + CaixaDeTextoResposta1->Text + ")")&&
		LetreiroResposta5->Text==BotaoOpcaoDeResposta3->Text&&
		LetreiroResposta6->Text==BotaoOpcaoDeResposta2->Text&&
		CaixaDeTextoResposta7->Text=="maior"&&
		LetreiroResposta8->Text==BotaoOpcaoDeResposta5->Text&&
		CaixaDeTextoResposta9->Text=="maior"&&
		CaixaDeTextoResposta10->Text==CaixaDeTextoResposta1->Text)
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

void Alg::TelaQuestao6::mudarVisiablidadeDeTodosBotoesOpcoesDeRespostasParaVerdadeiro()
{
	AlteradorPropriedadeBotao apb;

	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta1);
	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta2);
	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta3);
	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta4);
	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta5);
}
void Alg::TelaQuestao6::piscarRespostaASerRespondida()
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
	else if (CaixaDeTextoResposta4->Text == "")
	{
		ficarAlternandoCorDeFundoCaixaDeTexto(CaixaDeTextoResposta4);
	}
	else if (LetreiroResposta5->Text[0] == '_')
	{
		adicionarUnderlineEGerenciala();
		atribuirAcrecimoDeUnderline(LetreiroResposta5);
		atribuirAcrecimoDeUnderline(LetreiroResposta52);
	}
	else if (LetreiroResposta6->Text[0] == '_')
	{
		adicionarUnderlineEGerenciala();
		atribuirAcrecimoDeUnderline(LetreiroResposta6);
		atribuirAcrecimoDeUnderline(LetreiroResposta62);
	}
	else if (CaixaDeTextoResposta7->Text == "")
	{
		ficarAlternandoCorDeFundoCaixaDeTexto(CaixaDeTextoResposta7);
	}
	else if (LetreiroResposta8->Text[0] == '_')
	{
		adicionarUnderlineEGerenciala();
		atribuirAcrecimoDeUnderline(LetreiroResposta8);
	}
	else if (CaixaDeTextoResposta9->Text == "")
	{
		ficarAlternandoCorDeFundoCaixaDeTexto(CaixaDeTextoResposta9);
	}
	else if (CaixaDeTextoResposta10->Text == "")
	{
		ficarAlternandoCorDeFundoCaixaDeTexto(CaixaDeTextoResposta10);
	}
}
void Alg::TelaQuestao6::aumentarTempoTotal()
{
	TempoNaFase++;
	this->LetreiroTempoTotal->Text = (TempoNaFase / 60).ToString() + ":" + (TempoNaFase % 60).ToString();
}
void Alg::TelaQuestao6::executarAoClicarBotaoResposta1()
{
	if (LetreiroResposta3->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta3, BotaoOpcaoDeResposta1->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta1);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta3);
		ativarCaixaDeTexto(CaixaDeTextoResposta4);
	}
	else if (LetreiroResposta5->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta5, BotaoOpcaoDeResposta1->Text);
		atribuirTextoParaAResposta(LetreiroResposta52, BotaoOpcaoDeResposta1->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta1);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta5);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta52);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta6);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta62);
	}
	else if (LetreiroResposta6->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta6, BotaoOpcaoDeResposta1->Text);
		atribuirTextoParaAResposta(LetreiroResposta62, BotaoOpcaoDeResposta1->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta1);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta6);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta62);
		ativarCaixaDeTexto(CaixaDeTextoResposta7);
	}
	else if (LetreiroResposta8->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta8, BotaoOpcaoDeResposta1->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta1);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta8);
		ativarCaixaDeTexto(CaixaDeTextoResposta9);
	}
}

void Alg::TelaQuestao6::executarAoClicarBotaoResposta2()
{
	if (LetreiroResposta3->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta3, BotaoOpcaoDeResposta2->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta2);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta3);
		ativarCaixaDeTexto(CaixaDeTextoResposta4);
	}
	else if (LetreiroResposta5->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta5, BotaoOpcaoDeResposta2->Text);
		atribuirTextoParaAResposta(LetreiroResposta52, BotaoOpcaoDeResposta2->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta2);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta5);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta52);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta6);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta62);
	}
	else if (LetreiroResposta6->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta6, BotaoOpcaoDeResposta2->Text);
		atribuirTextoParaAResposta(LetreiroResposta62, BotaoOpcaoDeResposta2->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta2);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta6);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta62);
		ativarCaixaDeTexto(CaixaDeTextoResposta7);
	}
	else if (LetreiroResposta8->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta8, BotaoOpcaoDeResposta2->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta2);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta8);
		ativarCaixaDeTexto(CaixaDeTextoResposta9);
	}
}

void Alg::TelaQuestao6::executarAoClicarBotaoResposta3()
{
	if (LetreiroResposta3->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta3, BotaoOpcaoDeResposta3->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta3);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta3);
		ativarCaixaDeTexto(CaixaDeTextoResposta4);
	}
	else if (LetreiroResposta5->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta5, BotaoOpcaoDeResposta3->Text);
		atribuirTextoParaAResposta(LetreiroResposta52, BotaoOpcaoDeResposta3->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta3);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta5);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta52);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta6);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta62);
	}
	else if (LetreiroResposta6->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta6, BotaoOpcaoDeResposta3->Text);
		atribuirTextoParaAResposta(LetreiroResposta62, BotaoOpcaoDeResposta3->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta3);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta6);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta62);
		ativarCaixaDeTexto(CaixaDeTextoResposta7);
	}
	else if (LetreiroResposta8->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta8, BotaoOpcaoDeResposta3->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta3);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta8);
		ativarCaixaDeTexto(CaixaDeTextoResposta9);
	}
}

void Alg::TelaQuestao6::executarAoClicarBotaoResposta4()
{
	if (LetreiroResposta3->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta3, BotaoOpcaoDeResposta4->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta4);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta3);
		ativarCaixaDeTexto(CaixaDeTextoResposta4);
	}
	else if (LetreiroResposta5->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta5, BotaoOpcaoDeResposta4->Text);
		atribuirTextoParaAResposta(LetreiroResposta52, BotaoOpcaoDeResposta4->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta4);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta5);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta52);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta6);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta62);
	}
	else if (LetreiroResposta6->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta6, BotaoOpcaoDeResposta4->Text);
		atribuirTextoParaAResposta(LetreiroResposta62, BotaoOpcaoDeResposta4->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta4);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta6);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta62);
		ativarCaixaDeTexto(CaixaDeTextoResposta7);
	}
	else if (LetreiroResposta8->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta8, BotaoOpcaoDeResposta4->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta4);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta8);
		ativarCaixaDeTexto(CaixaDeTextoResposta9);
	}
}

void Alg::TelaQuestao6::executarAoClicarBotaoResposta5()
{
	if (LetreiroResposta3->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta3, BotaoOpcaoDeResposta5->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta5);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta3);
		ativarCaixaDeTexto(CaixaDeTextoResposta4);
	}
	else if (LetreiroResposta5->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta5, BotaoOpcaoDeResposta5->Text);
		atribuirTextoParaAResposta(LetreiroResposta52, BotaoOpcaoDeResposta5->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta5);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta5);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta52);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta6);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta62);
	}
	else if (LetreiroResposta6->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta6, BotaoOpcaoDeResposta5->Text);
		atribuirTextoParaAResposta(LetreiroResposta62, BotaoOpcaoDeResposta5->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta5);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta6);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta62);
		ativarCaixaDeTexto(CaixaDeTextoResposta7);
	}
	else if (LetreiroResposta8->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta8, BotaoOpcaoDeResposta5->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta5);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta8);
		ativarCaixaDeTexto(CaixaDeTextoResposta9);
	}
}

void Alg::TelaQuestao6::executarAoClicarBotaoReiniciar()
{
	mudarVisiablidadeDeTodosBotoesOpcoesDeRespostasParaVerdadeiro();
	atribuirRespostaVaziaACaixaDeTexto(CaixaDeTextoResposta1);
	atribuirRespostaVaziaACaixaDeTexto(CaixaDeTextoResposta2);
	atribuirRespostaVaziaACaixaDeTexto(CaixaDeTextoResposta4);
	atribuirRespostaVaziaACaixaDeTexto(CaixaDeTextoResposta7);
	atribuirRespostaVaziaACaixaDeTexto(CaixaDeTextoResposta9);
	atribuirRespostaVaziaACaixaDeTexto(CaixaDeTextoResposta10);
	ativarCaixaDeTexto(CaixaDeTextoResposta1);
	desativarCaixaDeTexto(CaixaDeTextoResposta2);
	desativarCaixaDeTexto(CaixaDeTextoResposta4);
	desativarCaixaDeTexto(CaixaDeTextoResposta7);
	desativarCaixaDeTexto(CaixaDeTextoResposta9);
	desativarCaixaDeTexto(CaixaDeTextoResposta10);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta1);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta2);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta4);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta7);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta9);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta10);
	mudarBordaCaixaDeTextoParaFixada3d(CaixaDeTextoResposta1);
	mudarBordaCaixaDeTextoParaFixada3d(CaixaDeTextoResposta2);
	mudarBordaCaixaDeTextoParaFixada3d(CaixaDeTextoResposta4);
	mudarBordaCaixaDeTextoParaFixada3d(CaixaDeTextoResposta7);
	mudarBordaCaixaDeTextoParaFixada3d(CaixaDeTextoResposta9);
	mudarBordaCaixaDeTextoParaFixada3d(CaixaDeTextoResposta10);
	mudarCorDeFundoLetreiroParaBranco(LetreiroResposta3);
	mudarCorDeFundoLetreiroParaBranco(LetreiroResposta5);
	mudarCorDeFundoLetreiroParaBranco(LetreiroResposta52);
	mudarCorDeFundoLetreiroParaBranco(LetreiroResposta6);
	mudarCorDeFundoLetreiroParaBranco(LetreiroResposta62);
	mudarCorDeFundoLetreiroParaBranco(LetreiroResposta8);
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroResposta3);
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroResposta5);
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroResposta52);
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroResposta6);
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroResposta62);
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroResposta8);
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroCompletar1);
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroCompletar2);
	ativarTempo(TempoIntervaloResposta);
	desbloquearOpcoesDeRespostas();
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta1, 29, 190);
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta2, 171, 190);
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta4, 29, 317);
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta7, 185, 382);
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta9, 145, 432);
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta10, 287, 432);
	mudarVisiabilidadeDaImagemParaInvisivel(ImagemErrado);
	mudarVisiabilidadeDoBotaoParaInvisivel(BotaoReiniciar);
	AcrecimoDeUnderlines = "";
	alterarTextoDoBotao(BotaoOpcaoDeResposta5, "Para");

	

	QuantidadeResetou++;
}
void Alg::TelaQuestao6::executarAoApertarEnterNaCaixaDeTextoResposta1()
{
	ativarTempo(TempoIntervaloResposta);
	mudarBordaCaixaDeTextoParaNenhuma(CaixaDeTextoResposta1);
	desativarCaixaDeTexto(CaixaDeTextoResposta1);
	ativarCaixaDeTexto(CaixaDeTextoResposta2);
	mudarVisiabilidadeDoBotaoParaVisivel(BotaoReiniciar);
	alterarTextoDoBotao(BotaoOpcaoDeResposta5, CaixaDeTextoResposta1->Text);
	atribuirTextoParaAResposta(LetreiroCompletar1, CaixaDeTextoResposta1->Text);
	atribuirTextoParaAResposta(LetreiroCompletar2, CaixaDeTextoResposta1->Text);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta1);

	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta1, 29, 195);
}
void Alg::TelaQuestao6::executarAoApertarEnterNaCaixaDeTextoResposta2()
{
	ativarTempo(TempoIntervaloResposta);
	mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta3);
	mudarBordaCaixaDeTextoParaNenhuma(CaixaDeTextoResposta2);
	desativarCaixaDeTexto(CaixaDeTextoResposta2);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta2);

	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta2, 171, 195);
}
void Alg::TelaQuestao6::executarAoApertarEnterNaCaixaDeTextoResposta4()
{
	ativarTempo(TempoIntervaloResposta);
	mudarBordaCaixaDeTextoParaNenhuma(CaixaDeTextoResposta4);
	desativarCaixaDeTexto(CaixaDeTextoResposta4);
	mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta5);
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta4, 29, 322);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta4);
}
void Alg::TelaQuestao6::executarAoApertarEnterNaCaixaDeTextoResposta7()
{
	ativarTempo(TempoIntervaloResposta);
	mudarBordaCaixaDeTextoParaNenhuma(CaixaDeTextoResposta7);
	desativarCaixaDeTexto(CaixaDeTextoResposta7);
	mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta8);
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta7, 185, 387);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta7);
}
void Alg::TelaQuestao6::executarAoApertarEnterNaCaixaDeTextoResposta9()
{
	ativarTempo(TempoIntervaloResposta);
	mudarBordaCaixaDeTextoParaNenhuma(CaixaDeTextoResposta9);
	desativarCaixaDeTexto(CaixaDeTextoResposta9);
	ativarCaixaDeTexto(CaixaDeTextoResposta10);
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta9, 145, 436);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta9);
}
void Alg::TelaQuestao6::executarAoApertarEnterNaCaixaDeTextoResposta10()
{
	ativarTempo(TempoIntervaloResposta);
	mudarBordaCaixaDeTextoParaNenhuma(CaixaDeTextoResposta10);
	desativarCaixaDeTexto(CaixaDeTextoResposta10);
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta10, 287, 436);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta10);
	verificarSeAsRespostasEstaoCorretas();
}
void Alg::TelaQuestao6::executarAoClicarNaCaixaDeTextoResposta1()
{
	desativarTempo(TempoIntervaloResposta);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta1);
}
void Alg::TelaQuestao6::executarAoClicarNaCaixaDeTextoResposta2()
{
	desativarTempo(TempoIntervaloResposta);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta2);
}
void Alg::TelaQuestao6::executarAoClicarNaCaixaDeTextoResposta4()
{
	desativarTempo(TempoIntervaloResposta);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta4);
}
void Alg::TelaQuestao6::executarAoClicarNaCaixaDeTextoResposta7()
{
	desativarTempo(TempoIntervaloResposta);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta7);
}
void Alg::TelaQuestao6::executarAoClicarNaCaixaDeTextoResposta9()
{
	desativarTempo(TempoIntervaloResposta);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta9);
}
void Alg::TelaQuestao6::executarAoClicarNaCaixaDeTextoResposta10()
{
	desativarTempo(TempoIntervaloResposta);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta10);
}
