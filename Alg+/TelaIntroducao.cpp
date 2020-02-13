#include "TelaIntroducao.h"
void Alg::TelaIntroducao::fecharJogo()
{
	System::Windows::Forms::Application::Exit();
}
int Alg::TelaIntroducao::getOpcaoIraContinuar()
{
	int QuantidadeRetorna;
	if (OpcaoContinuar)
		QuantidadeRetorna=1;
	else
		QuantidadeRetorna = -100;
	return QuantidadeRetorna;
}
void Alg::TelaIntroducao::ativarTempo(Timer^ Tempo)
{
	AlteradorPropriedadeTempo apt;
	apt.habilitarTempo(Tempo);
}
void Alg::TelaIntroducao::desativarTempo(Timer^ Tempo)
{
	AlteradorPropriedadeTempo apt;
	apt.desabilitarTempo(Tempo);
}
void Alg::TelaIntroducao::mudarVisiabilidadeLetreiroParaVerdadeiro(Label^ Letreiro)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarVisiabilidadeParaVerdadeiro(Letreiro);
}
void Alg::TelaIntroducao::atribuirTextoParaAExplicacao(Label^Letreiro, String^ Texto)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarTexto(Letreiro, Texto);
}
void Alg::TelaIntroducao::mudarCorDaFonteLetreiroParaPreto(Label^ Letreiro)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarCorDaFonteParaPreto(Letreiro);
}
void Alg::TelaIntroducao::mudarCorDaFonteLetreiroParaAmarelo(Label^ Letreiro)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarCorDaFonteParaAmarelo(Letreiro);
}
void Alg::TelaIntroducao::mudarVisiabilidadeDoBotaoParaFalso(Button^ Botao)
{
	AlteradorPropriedadeBotao apb;
	apb.alterarVisiabilidadeParaFalso(Botao);

}
void Alg::TelaIntroducao::mudarVisiabilidadeDoBotaoParaVisivel(Button^ Botao)
{
	AlteradorPropriedadeBotao apb;
	apb.alterarVisiabilidadeParaVerdadeiro(Botao);
}
void Alg::TelaIntroducao::mudarCorDeFundoDoBotaoParaBranco(Button^ Botao)
{
	AlteradorPropriedadeBotao apb;
	apb.alterarCorDeFundoParaBranco(Botao);
}
void Alg::TelaIntroducao::mudarCorDeFundoDoBotaoParaTransparente(Button^ Botao)
{
	AlteradorPropriedadeBotao apb;
	apb.alterarCorDeFundoParaTransparente(Botao);
}
void Alg::TelaIntroducao::mudarCorDeFundoCaixaDeTextoParaBranco(TextBox^  CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarCorDeFundoParaBranco(CaixaDeTexto);
}
void Alg::TelaIntroducao::mudarCorDeFundoCaixaDeTextoParaAmarelo(TextBox^  CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarCorDeFundoParaAmarelo(CaixaDeTexto);
}
void Alg::TelaIntroducao::mudarCorDeFundoCaixaDeTextoParaCinzaEscuro(TextBox^  CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarCorDeFundoParaCinzaEscuro(CaixaDeTexto);
}
void Alg::TelaIntroducao::mudarVisiabilidadePainelParaFalso(Panel^ Painel)
{
	AlteradorPropriedadePainel app;
	app.alterarVisiabilidadeParaFalso(Painel);
}
void Alg::TelaIntroducao::mudarVisiabilidadePainelParaVerdadeiro(Panel^ Painel)
{
	AlteradorPropriedadePainel app;
	app.alterarVisiabilidadeParaVerdadeiro(Painel);
}
void Alg::TelaIntroducao::mudarCorDeFundoLetreiroParaAmarelo(Label^ Resposta)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarCorDeFundoParaAmarelo(Resposta);
}
void Alg::TelaIntroducao::mudarCorDeFundoLetreiroParaCinzaEscuro(Label^ Resposta)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarCorDeFundoParaCinzaEscuro(Resposta);
}
void Alg::TelaIntroducao::mudarCorDeFundoLetreiroParaBranco(Label^ Letreiro)
{
	AlteradorPropriedadeLetreiro apl;
	apl.alterarCorDeFundoParaBranco(Letreiro);
}
void Alg::TelaIntroducao::mudarLarguraDaBordaDoBotao(Button^Botao, int Largura)
{
	AlteradorPropriedadeBotao apb;
	apb.alterarLarguraDaBorda(Botao, Largura);
}
void Alg::TelaIntroducao::mudarVisiabilidadeCaixaDeTextoParaVerdadeiro(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarVisiabilidadeParaVerdadeiro(CaixaDeTexto);
}
void Alg::TelaIntroducao::mudarCorDaBordaDoBotaoParaPreto(Button^ Botao)
{
	AlteradorPropriedadeBotao apb;
	apb.alterarCorDaBordaParaPreto(Botao);
}
void Alg::TelaIntroducao::mudarCorDaBordaDoBotaoParaAmarelo(Button^ Botao)
{
	AlteradorPropriedadeBotao apb;
	apb.alterarCorDaBordaParaAmarelo(Botao);
}
void Alg::TelaIntroducao::desativarCaixaDeTexto(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.desativarCaixaDeTexto(CaixaDeTexto);
}
void Alg::TelaIntroducao::mudarBordaCaixaDeTextoParaNenhuma(TextBox^ CaixaDeTexto)
{
	AlteradorPropriedadeCaixaDeTexto apct;
	apct.alterarBordaParaNenhuma(CaixaDeTexto);
}
void Alg::TelaIntroducao::mudarVisiabilidadeDaImagemParaInvisivel(PictureBox^ Imagem)
{
	AlteradorPropriedadeImagem api;
	api.alterarVisiabilidadeParaFalso(Imagem);

}
void Alg::TelaIntroducao::mudarVisiabilidadeDaImagemParaVisivel(PictureBox^ Imagem)
{
	AlteradorPropriedadeImagem api;
	api.alterarVisiabilidadeParaVerdadeiro(Imagem);
}
bool Alg::TelaIntroducao::getRegistrarFraseNoArquivo()
{
	return RegistrarFrase;
}
String^ Alg::TelaIntroducao::getFrase()
{
	return Frase;
}
void Alg::TelaIntroducao::comecarOuVoltarAPiscarOpcaoDeResposta3EAresposta1()
{
	String^ Texto = "Clique na opção 3 para preencher o algoritmo.";
	mudarCorDeFundoLetreiroParaAmarelo(LetreiroResposta1);
	mudarLarguraDaBordaDoBotao(BotaoOpcaoDeResposta3, 3);
	mudarCorDeFundoLetreiroParaBranco(LetreiroAlgoritmo);
	ativarTempo(TempoTrocaDeCorOpcaoEResposta);
	mudarVisiabilidadeDoBotaoParaFalso(BotaoAvancar2);
	atribuirTextoParaAExplicacao(LetreiroExplicacao2, Texto);
}
void Alg::TelaIntroducao::piscarOpcaoResposta3EAresposta1()
{
	PiscarRespostaEOpcao++;
	if (PiscarRespostaEOpcao > 2)
	{
		RespostaVazia += "_";
		if (PiscarRespostaEOpcao == 7)
			PiscarRespostaEOpcao = 1;
	}
	else
	{
		RespostaVazia = "_";

	}
	if (LetreiroResposta1->Text != BotaoOpcaoDeResposta3->Text)
	{
		atribuirTextoParaAExplicacao(LetreiroResposta1, RespostaVazia);
		if (this->BotaoOpcaoDeResposta3->FlatAppearance->BorderColor == System::Drawing::Color::Black)
			mudarCorDaBordaDoBotaoParaAmarelo(BotaoOpcaoDeResposta3);
		else
			mudarCorDaBordaDoBotaoParaPreto(BotaoOpcaoDeResposta3);
	}
	if (this->LetreiroTempoTotal->ForeColor == System::Drawing::Color::Yellow)
	{
		mudarCorDaFonteLetreiroParaPreto(LetreiroTempoTotal);
	}
}
void Alg::TelaIntroducao::piscarBotaoResetar()
{
	if (this->BotaoResetar->FlatAppearance->BorderColor == System::Drawing::Color::Black)
		mudarCorDaBordaDoBotaoParaAmarelo(BotaoResetar);
	else
		mudarCorDaBordaDoBotaoParaPreto(BotaoResetar);
}
void Alg::TelaIntroducao::piscarCorDoTempoNaFase()
{
	TempoTotal++;
	atribuirTextoParaAExplicacao(LetreiroTempoTotal, (TempoTotal / 60).ToString() + ":" + (TempoTotal % 60).ToString());
	if (PiscarRespostaEOpcao == 0)
	{
		if (this->LetreiroTempoTotal->ForeColor == System::Drawing::Color::Black){
			mudarCorDaFonteLetreiroParaAmarelo(LetreiroTempoTotal);
		}
		else
		{
			mudarCorDaFonteLetreiroParaPreto(LetreiroTempoTotal);
		}
	}
}
void Alg::TelaIntroducao::piscarCorDoEnunciado()
{
	PiscarEnunciado++;
	if (PiscarEnunciado % 2 == 0)
	{
		mudarCorDaFonteLetreiroParaAmarelo(LetreiroEnunciado);
	}
	else
	{
		mudarCorDaFonteLetreiroParaPreto(LetreiroEnunciado);
	}
}
void Alg::TelaIntroducao::piscarCaixaDeTextoResposta2()
{
	if (this->CaixaDeTextoResposta2->BackColor == System::Drawing::Color::White)
		mudarCorDeFundoCaixaDeTextoParaAmarelo(CaixaDeTextoResposta2);
	else
		mudarCorDeFundoCaixaDeTextoParaBranco(CaixaDeTextoResposta2);
}
void Alg::TelaIntroducao::piscarBotaoTestarEJogar()
{
	if (this->BotaoTestar->FlatAppearance->BorderColor == System::Drawing::Color::Black)
	{
		mudarCorDaBordaDoBotaoParaAmarelo(BotaoTestar);
		mudarCorDaBordaDoBotaoParaAmarelo(BotaoJogar);
	}
	else
	{
		mudarCorDaBordaDoBotaoParaPreto(BotaoTestar);
		mudarCorDaBordaDoBotaoParaPreto(BotaoJogar);
	}
}
bool Alg::TelaIntroducao::testarTextoValorDaVariavelEValido()
{
	int QuantidadeDeCaracter = Convert::ToInt16(CaixaDeTextoResposta2->TextLength);
	bool Valido;
	Frase = this->CaixaDeTextoResposta2->Text;
	if (Frase != ""&&QuantidadeDeCaracter>1)
	{
		if (Frase[0] == '"'&&Frase[QuantidadeDeCaracter - 1] == '"')
		{
			Valido=true;
		}
		else
		{
			Valido= false;
		}

	}
	return Valido;
}
void Alg::TelaIntroducao::executarAoClicarBotaoResposta3()
{
	String^ Texto = "Você terá a opção de reiniciar o algoritmo clicando no botão Reiniciar.\nClique ao botão ao lado direito para avançar.";
	atribuirTextoParaAExplicacao(LetreiroResposta1, BotaoOpcaoDeResposta3->Text);
	mudarCorDeFundoLetreiroParaBranco(LetreiroResposta1);
	mudarCorDaBordaDoBotaoParaPreto(BotaoOpcaoDeResposta3);
	mudarLarguraDaBordaDoBotao(BotaoOpcaoDeResposta3, 0);
	atribuirTextoParaAExplicacao(LetreiroExplicacao2, Texto);
	mudarVisiabilidadeDoBotaoParaVisivel(BotaoAvancar4);
	mudarVisiabilidadeDoBotaoParaVisivel(BotaoResetar);
	mudarLarguraDaBordaDoBotao(BotaoResetar, 3);
	ativarTempo(TempoTrocaCorResetar);
}
void Alg::TelaIntroducao::executarAoClicarBotaoAvancar1()
{
	String^ Texto = "O Enunciado de todo o algoritmo ficará na parte \nsuperior da tela.";
	mudarVisiabilidadeLetreiroParaVerdadeiro(LetreiroEnunciado);
	atribuirTextoParaAExplicacao(LetreiroExplicacao1, Texto);
	ativarTempo(TempoParaTrocaDeCorEnunciado);
	mudarVisiabilidadeLetreiroParaVerdadeiro(LetreiroLinhaTracada);
	mudarVisiabilidadeDoBotaoParaFalso(BotaoAvancar1);
	mudarVisiabilidadeDoBotaoParaVisivel(BotaoAvancar2);
}

void Alg::TelaIntroducao::executarAoClicarBotaoAvancar2()
{
	desativarTempo(TempoParaTrocaDeCorEnunciado);
	mudarCorDaFonteLetreiroParaPreto(LetreiroEnunciado);
	mudarVisiabilidadePainelParaFalso(PainelDialogo1);
	mudarVisiabilidadePainelParaVerdadeiro(PainelDialogo2);
	PainelDialogo1->Visible = false;
	PainelDialogo2->Visible = true;
	ativarTempo(TempoNaFase);
}
void Alg::TelaIntroducao::executarAoClicarBotaoAvancar3()
{
	mudarVisiabilidadeLetreiroParaVerdadeiro(LetreiroOpcao);
	mudarVisiabilidadeDoBotaoParaVisivel(BotaoOpcaoDeResposta1);
	mudarVisiabilidadeDoBotaoParaVisivel(BotaoOpcaoDeResposta2);
	mudarVisiabilidadeDoBotaoParaVisivel(BotaoOpcaoDeResposta3);
	mudarVisiabilidadeDoBotaoParaVisivel(BotaoOpcaoDeResposta4);
	mudarVisiabilidadeDoBotaoParaVisivel(BotaoOpcaoDeResposta5);
	mudarVisiabilidadeLetreiroParaVerdadeiro(LetreiroAlgoritmo);
	mudarVisiabilidadeLetreiroParaVerdadeiro(LetreiroResposta1);
	comecarOuVoltarAPiscarOpcaoDeResposta3EAresposta1();
	mudarVisiabilidadeDoBotaoParaFalso(BotaoAvancar3);
}
void Alg::TelaIntroducao::executarAoClicarBotaoAvancar4()
{
	String^ Texto = "Para atribuir a frase na variável digite-a utilizando aspas no começo e fim,\ncomo por exemplo ''Hello World''.";
	atribuirTextoParaAExplicacao(LetreiroExplicacao2, Texto);
	mudarVisiabilidadeCaixaDeTextoParaVerdadeiro(CaixaDeTextoResposta2);
	desativarTempo(TempoTrocaCorResetar);
	mudarCorDaBordaDoBotaoParaPreto(BotaoResetar);
	mudarLarguraDaBordaDoBotao(BotaoResetar, 1);
	ativarTempo(TempoTrocaTextoValorDaVariavel);
	mudarVisiabilidadeDoBotaoParaFalso(BotaoAvancar4);
	mudarVisiabilidadeDoBotaoParaVisivel(BotaoAvancar5);
}
void Alg::TelaIntroducao::executarAoClicarBotaoAvancar5()
{
	String^ Texto;
	if (testarTextoValorDaVariavelEValido() == false)
	{
		MessageBox::Show("Você deve ter esquecido das aspas");
	}
	else
	{
		RegistrarFrase = true;
		Visible = false;
		desativarTempo(TempoTrocaTextoValorDaVariavel);
		mudarCorDeFundoCaixaDeTextoParaCinzaEscuro(CaixaDeTextoResposta2);
		mudarBordaCaixaDeTextoParaNenhuma(CaixaDeTextoResposta2);
		mudarCorDeFundoLetreiroParaCinzaEscuro(LetreiroAlgoritmo);
		mudarCorDeFundoLetreiroParaCinzaEscuro(LetreiroResposta1);
		mudarVisiabilidadeDoBotaoParaFalso(BotaoResetar);
		mudarVisiabilidadeDoBotaoParaVisivel(BotaoTestar);
		mudarVisiabilidadeDoBotaoParaVisivel(BotaoAvancar);
		mudarVisiabilidadeDaImagemParaVisivel(ImagemCorreto);
		Texto = "Clique em testar para ver o algoritmo em funcionamento.\nEm seguida clique em jogar para continuar.";
		atribuirTextoParaAExplicacao(LetreiroExplicacao2, Texto);
		mudarLarguraDaBordaDoBotao(BotaoTestar, 3);
		mudarLarguraDaBordaDoBotao(BotaoJogar, 3);
		mudarVisiabilidadeDoBotaoParaFalso(BotaoAvancar5);
		ativarTempo(TempoTrocaDeCorBotaoTestarEJogar);
	}
}
void Alg::TelaIntroducao::executarAoClicarBotaoReiniciar()
{
	mudarVisiabilidadeDoBotaoParaFalso(BotaoResetar);
	desativarTempo(TempoTrocaCorResetar);
	atribuirTextoParaAExplicacao(LetreiroResposta1, RespostaVazia);
	comecarOuVoltarAPiscarOpcaoDeResposta3EAresposta1();
	CaixaDeTextoResposta2->Visible = false;
	CaixaDeTextoResposta2->Text = "";
}
void Alg::TelaIntroducao::executarAoClicarBotaoTestar()
{
	System:Diagnostics::Process::Start("teste\\MostrarFrase.exe");
}
void Alg::TelaIntroducao::executarAoClicarBotaoSair()
{
	OpcaoContinuar = false;
	fecharTela();
}
void Alg::TelaIntroducao::executarAoClicarBotaoJogar()
{
	OpcaoContinuar = true;
	fecharTela();
}
void Alg::TelaIntroducao::fecharTela()
{
	Visible = false;
}
