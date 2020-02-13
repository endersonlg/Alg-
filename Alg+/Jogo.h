#pragma once
#include "TelaInformacaoUsuario.h"
#include "TelaIntroducao.h"
#include "TelaQuestao1.h"
#include "TelaQuestao2.h"
#include "TelaQuestao3.h"
#include "TelaQuestao4.h"
#include "TelaQuestao5.h"
#include "TelaQuestao6.h"
#include "TelaDeRank.h"
#include "Rank.h"
#include "RegistroDeDados.h"
#include "Grafico.h"
#include "TelaGrafico.h"
using namespace std;
ref class Jogo
{
private:
public:
	Jogo();
	void ArmazenarFrase(string);
	void ArmazenarDadosDaPartidaNoRank(string, int, int, double);
	void buscarMelhoresResultadosNoRank(string[10], int[10], int[10], double[10]);
	void buscarMediaDaPontuacaoConformeAsIdades(double[9]);


	Alg::TelaInformacaoUsuario tiu;
	Alg::TelaIntroducao ti;
	Alg::TelaQuestao1 tq1;
	Alg::TelaQuestao2 tq2;
	Alg::TelaQuestao3 tq3;
	Alg::TelaQuestao4 tq4;
	Alg::TelaQuestao5 tq5;
	Alg::TelaQuestao6 tq6;
	Alg::TelaDeRank tdr;
	Alg::TelaGrafico tg;



	
};

