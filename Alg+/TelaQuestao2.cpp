#include "TelaQuestao2.h"

void Alg::TelaQuestao2::fecharJogo()
{
	System::Windows::Forms::Application::Exit();
}
int Alg::TelaQuestao2::getTempoNaFase()
{
	return TempoNaFase;
}

int Alg::TelaQuestao2::getQuantidadeQueResetouAFase()
{
	return QuantidadeResetou;
}
void Alg::TelaQuestao2::setTempoAnterior(int TempoNaFaseAnterior)
{
	TempoNaFase = TempoNaFaseAnterior;
}

int Alg::TelaQuestao2::getOpcaoIraContinuar()
{
	int QuantidadeRetorna;
	if (OpcaoContinuar)
		QuantidadeRetorna = 1;
	else
		QuantidadeRetorna = -100;
	return QuantidadeRetorna;
}

void Alg::TelaQuestao2::bloquearOpcoesDeRespostas()
{
	AlteradorPropriedadeBotao apb;

	apb.alterarCursorParaNao(BotaoOpcaoDeResposta1);
	apb.alterarCursorParaNao(BotaoOpcaoDeResposta2);
	apb.alterarCursorParaNao(BotaoOpcaoDeResposta3);
	apb.alterarCursorParaNao(BotaoOpcaoDeResposta4);
	apb.alterarCursorParaNao(BotaoOpcaoDeResposta5);
}

void Alg::TelaQuestao2::atribuirRespostaNaoPreenchidaParaAResposta(Label ^ Resposta)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarTexto(Resposta, RespostaNaoPreenchida);
}
void Alg::TelaQuestao2::atribuirAcrecimoDeUnderline(Label^ Resposta)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarTexto(Resposta, AcrecimoDeUnderlines);
}
void Alg::TelaQuestao2::atribuirTextoParaAResposta(Label^Letreiro, String^ Texto)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarTexto(Letreiro, Texto);
}
void Alg::TelaQuestao2::atribuirRespostaVaziaACaixaDeTexto(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	String ^ RespostaVazia = "";
	apct.alterarTexto(CaixaDeTexto, RespostaVazia);
}
void Alg::TelaQuestao2::ativarTempo(Timer^ Tempo)
{
	AlteradorPropriedadeTempo apt;
	apt.habilitarTempo(Tempo);
}

void Alg::TelaQuestao2::desativarTempo(Timer^ Tempo)
{
	AlteradorPropriedadeTempo apt;
	apt.desabilitarTempo(Tempo);
}
void Alg::TelaQuestao2::ativarCaixaDeTexto(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.ativarCaixaDeTexto(CaixaDeTexto);
}
void Alg::TelaQuestao2::desativarCaixaDeTexto(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.desativarCaixaDeTexto(CaixaDeTexto);
}
void Alg::TelaQuestao2::mudarVisiabilidadeDaImagemParaInvisivel(PictureBox^ Imagem)
{
	AlteradorPropriedadeImagem api;
	api.alterarVisiabilidadeParaFalso(Imagem);

}
void Alg::TelaQuestao2::mudarVisiabilidadeDaImagemParaVisivel(PictureBox^ Imagem)
{
	AlteradorPropriedadeImagem api;
	api.alterarVisiabilidadeParaVerdadeiro(Imagem);
}

void Alg::TelaQuestao2::mudarVisiabilidadeDoBotaoParaInvisivel(Button^ Botao)
{
	AlteradorPropriedadeBotao apb;
	apb.alterarVisiabilidadeParaFalso(Botao);
	
}
void Alg::TelaQuestao2::mudarVisiabilidadeDoBotaoParaVisivel(Button^ Botao)
{
	AlteradorPropriedadeBotao apb;
	apb.alterarVisiabilidadeParaVerdadeiro(Botao);
}
void Alg::TelaQuestao2::mudarCorDeFundoLetreiroParaBranco(Label^ Letreiro)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarCorDeFundoParaBranco(Letreiro);
}
void Alg::TelaQuestao2::mudarBordaCaixaDeTextoParaFixada3d(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarBordaParaFixada3d(CaixaDeTexto);
}
void Alg::TelaQuestao2::mudarCorDeFundoLetreiroParaAmarelo(Label^ Resposta)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarCorDeFundoParaAmarelo(Resposta);
}
void Alg::TelaQuestao2::mudarLocalizacaoCaixaDeTexto(TextBox^ CaixaDeTexto, int x, int y)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.mudarLocalizacao(CaixaDeTexto, x, y);
}
void Alg::TelaQuestao2::ficarAlternandoCorDeFundoCaixaDeTexto(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	if(CaixaDeTexto->BackColor==System::Drawing::Color::White)
		apct.alterarCorDeFundoParaAmarelo(CaixaDeTexto);
	else
	{
		apct.alterarCorDeFundoParaBranco(CaixaDeTexto);
	}
}
void Alg::TelaQuestao2::mudarCorDeFundoCaixaDeTextoParaAmarelo(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarCorDeFundoParaAmarelo(CaixaDeTexto);
}
void Alg::TelaQuestao2::mudarCorDeFundoCaixaDeTextoParaBranco(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarCorDeFundoParaBranco(CaixaDeTexto);

}
void Alg::TelaQuestao2::mudarBordaCaixaDeTextoParaNenhuma(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarBordaParaNenhuma(CaixaDeTexto);
}
void Alg::TelaQuestao2::mudarCursorCaixaDeTextoParaMao(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarCursorParaMao(CaixaDeTexto);
}
void Alg::TelaQuestao2::mudarCursorCaixaDeTextoParaNao(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarCursorParaNao(CaixaDeTexto);
}
void Alg::TelaQuestao2::adicionarUnderlineEGerenciala()
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
void Alg::TelaQuestao2::desbloquearOpcoesDeRespostas()
{
	AlteradorPropriedadeBotao apb;

	apb.alterarCursorParaMao(BotaoOpcaoDeResposta1);
	apb.alterarCursorParaMao(BotaoOpcaoDeResposta2);
	apb.alterarCursorParaMao(BotaoOpcaoDeResposta3);
	apb.alterarCursorParaMao(BotaoOpcaoDeResposta4);
	apb.alterarCursorParaMao(BotaoOpcaoDeResposta5);
}
void Alg::TelaQuestao2::verificarSeAsRespostasEstaoCorretas()
{
	desativarTempo(TempoIntervaloResposta);
	if (LetreiroResposta1->Text == BotaoOpcaoDeResposta4->Text && LetreiroResposta2->Text == BotaoOpcaoDeResposta5->Text && (CaixaDeTextoResposta1->Text == "Real" || CaixaDeTextoResposta1->Text == "real" || CaixaDeTextoResposta1->Text == "REAL") && (CaixaDeTextoResposta2->Text == "PI*Raio^2" ||
																																									CaixaDeTextoResposta2->Text == "PI*Raio*Raio" || CaixaDeTextoResposta2->Text == "Raio*Raio*PI" ||
																																									CaixaDeTextoResposta2->Text == "PI*Raio*(Raio)" || CaixaDeTextoResposta2->Text == "PI*(Raio^2)" ||
																																									CaixaDeTextoResposta2->Text == "PI*(Raio*Raio)" || CaixaDeTextoResposta2->Text == "PI(Raio^2)" ||
																																									CaixaDeTextoResposta2->Text == "PI*Raio(Raio)" || CaixaDeTextoResposta2->Text == "Raio^2*PI"))
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

void Alg::TelaQuestao2::mudarVisiablidadeDeTodosBotoesOpcoesDeRespostasParaVerdadeiro()
{
	AlteradorPropriedadeBotao apb;

	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta1);
	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta2);
	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta3);
	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta4);
	apb.alterarVisiabilidadeParaVerdadeiro(BotaoOpcaoDeResposta5);
}
void Alg::TelaQuestao2::piscarRespostaASerRespondida()
{
	if (CaixaDeTextoResposta1->Text == "")
	{
		ficarAlternandoCorDeFundoCaixaDeTexto(CaixaDeTextoResposta1);
	}
	else if (LetreiroResposta1->Text[0] == '_')
	{
		adicionarUnderlineEGerenciala();
		atribuirAcrecimoDeUnderline(LetreiroResposta1);
	}
	else if (LetreiroResposta2->Text[0] == '_')
	{
		adicionarUnderlineEGerenciala();
		atribuirAcrecimoDeUnderline(LetreiroResposta2);
	}
	else if (CaixaDeTextoResposta2->Text == "")
	{
		ficarAlternandoCorDeFundoCaixaDeTexto(CaixaDeTextoResposta2);
	}
}
void Alg::TelaQuestao2::aumentarTempoTotal()
{
	TempoNaFase++;
	this->LetreiroTempoTotal->Text = (TempoNaFase / 60).ToString() + ":" + (TempoNaFase % 60).ToString();
}
void Alg::TelaQuestao2::executarAoClicarBotaoResposta1()
{
	if (LetreiroResposta1->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta1, BotaoOpcaoDeResposta1->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta1);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta1);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta2);
	}
	else if (LetreiroResposta2->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta2, BotaoOpcaoDeResposta1->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta1);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta2);
		ativarCaixaDeTexto(CaixaDeTextoResposta2);
	}
}

void Alg::TelaQuestao2::executarAoClicarBotaoResposta2()
{
	if (LetreiroResposta1->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta1, BotaoOpcaoDeResposta2->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta2);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta1);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta2);
	}
	else if (LetreiroResposta2->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta2, BotaoOpcaoDeResposta2->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta2);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta2);
		ativarCaixaDeTexto(CaixaDeTextoResposta2);
	}
}

void Alg::TelaQuestao2::executarAoClicarBotaoResposta3()
{
	if (LetreiroResposta1->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta1, BotaoOpcaoDeResposta3->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta3);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta1);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta2);
	}
	else if (LetreiroResposta2->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta2, BotaoOpcaoDeResposta3->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta3);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta2);
		ativarCaixaDeTexto(CaixaDeTextoResposta2);
	}
}

void Alg::TelaQuestao2::executarAoClicarBotaoResposta4()
{
	if (LetreiroResposta1->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta1, BotaoOpcaoDeResposta4->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta4);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta1);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta2);
	}
	else if (LetreiroResposta2->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta2, BotaoOpcaoDeResposta4->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta4);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta2);
		ativarCaixaDeTexto(CaixaDeTextoResposta2);
	}
}

void Alg::TelaQuestao2::executarAoClicarBotaoResposta5()
{
	if (LetreiroResposta1->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta1, BotaoOpcaoDeResposta5->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta5);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta1);
		mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta2);
	}
	else if (LetreiroResposta2->Text == AcrecimoDeUnderlines)
	{
		atribuirTextoParaAResposta(LetreiroResposta2, BotaoOpcaoDeResposta5->Text);
		mudarVisiabilidadeDoBotaoParaInvisivel(BotaoOpcaoDeResposta5);
		mudarCorDeFundoLetreiroParaBranco(LetreiroResposta2);
		ativarCaixaDeTexto(CaixaDeTextoResposta2);
	}
}

void Alg::TelaQuestao2::executarAoClicarBotaoReiniciar()
{
	mudarVisiablidadeDeTodosBotoesOpcoesDeRespostasParaVerdadeiro();
	atribuirRespostaVaziaACaixaDeTexto(CaixaDeTextoResposta1);
	atribuirRespostaVaziaACaixaDeTexto(CaixaDeTextoResposta2);
	ativarCaixaDeTexto(CaixaDeTextoResposta1);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta1);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta2);
	mudarBordaCaixaDeTextoParaFixada3d(CaixaDeTextoResposta1);
	mudarBordaCaixaDeTextoParaFixada3d(CaixaDeTextoResposta2);
	mudarCorDeFundoLetreiroParaBranco(LetreiroResposta1);
	mudarCorDeFundoLetreiroParaBranco(LetreiroResposta2);
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroResposta1);
	atribuirRespostaNaoPreenchidaParaAResposta(LetreiroResposta2);
	ativarTempo(TempoIntervaloResposta);
	desbloquearOpcoesDeRespostas();
	mudarVisiabilidadeDaImagemParaInvisivel(ImagemErrado);
	mudarVisiabilidadeDoBotaoParaInvisivel(BotaoReiniciar);
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta1, 91, 226);
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta2, 114, 333);

	QuantidadeResetou++;
}
void Alg::TelaQuestao2::executarAoApertarEnterNaCaixaDeTextoResposta1()
{
	ativarTempo(TempoIntervaloResposta);
	mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta1);
	mudarBordaCaixaDeTextoParaNenhuma(CaixaDeTextoResposta1);
	desativarCaixaDeTexto(CaixaDeTextoResposta1);
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta1, 91, 230);
	mudarVisiabilidadeDoBotaoParaVisivel(BotaoReiniciar);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta1);
}
void Alg::TelaQuestao2::executarAoApertarEnterNaCaixaDeTextoResposta2()
{
	mudarBordaCaixaDeTextoParaNenhuma(CaixaDeTextoResposta2);	
	desativarCaixaDeTexto(CaixaDeTextoResposta2);
	mudarLocalizacaoCaixaDeTexto(CaixaDeTextoResposta2, 114, 338);
	verificarSeAsRespostasEstaoCorretas();
}
void Alg::TelaQuestao2::executarAoClicarNaCaixaDeTextoResposta1()
{
	desativarTempo(TempoIntervaloResposta);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta1);
}
void Alg::TelaQuestao2::executarAoClicarNaCaixaDeTextoResposta2()
{
	desativarTempo(TempoIntervaloResposta);
	mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta2);
}
