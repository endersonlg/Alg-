#pragma once
#include"TelaExplicacaoAlgoritmo1.h"
#include"TelaExplicacaoAlgoritmo2.h"
#include"TelaExplicacaoAlgoritmo3.h"
#include"TelaExplicacaoCondicao1.h"
#include"TelaExplicacaoCondicao2.h"
#include"TelaExplicacaoRepeticao1.h"
#include"TelaExplicacaoRepeticao2.h"
#include"TelaExplicacaoRepeticao3.h"
#include"TelaExplicacaoVariaveis1.h"
#include"TelaExplicacaoVariaveis2.h"

ref class Explicacao
{
public:
	Explicacao();
	Alg::TelaExplicacaoAlgoritmo1 tea1;
	Alg::TelaExplicacaoAlgoritmo2 tea2;
	Alg::TelaExplicacaoAlgoritmo3 tea3;
	Alg::TelaExplicacaoCondicao1 tec1;
	Alg::TelaExplicacaoCondicao2 tec2;
	Alg::TelaExplicacaoRepeticao1 ter1;
	Alg::TelaExplicacaoRepeticao2 ter2;
	Alg::TelaExplicacaoRepeticao3 ter3;
	Alg::TelaExplicacaoVariaveis1 tev1;
	Alg::TelaExplicacaoVariaveis2 tev2;
};

