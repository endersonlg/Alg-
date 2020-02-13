#pragma once
#include "RegistroDeDados.h"
#include<vector>
class Grafico
{
private:
	vector<int>IdadesDeTodos;
	vector<double>PontuacaoDeTodos;
	double SomatoriaDaPontuacaoComAIdade10a11,
		SomatoriaDaPontuacaoComAIdade12a14,
		SomatoriaDaPontuacaoComAIdade15a17,
		SomatoriaDaPontuacaoComAIdade18a29,
		SomatoriaDaPontuacaoComAIdade30a39,
		SomatoriaDaPontuacaoComAIdade40a49,
		SomatoriaDaPontuacaoComAIdade50a59,
		SomatoriaDaPontuacaoComAIdade60a64,
		SomatoriaDaPontuacaoComAIdade65a89;

	int QuantidadePessoasComIDade10a11,
		QuantidadePessoasComIDade12a14,
		QuantidadePessoasComIDade15a17,
		QuantidadePessoasComIDade18a29,
		QuantidadePessoasComIDade30a39,
		QuantidadePessoasComIDade40a49,
		QuantidadePessoasComIDade50a59,
		QuantidadePessoasComIDade60a64,
		QuantidadePessoasComIDade65a89;
	
	double MediaDaPontuacaoIdade10a11,
		MediaDaPontuacaoIdade12a14,
		MediaDaPontuacaoIdade15a17,
		MediaDaPontuacaoIdade18a29,
		MediaDaPontuacaoIdade30a39,
		MediaDaPontuacaoIdade40a49,
		MediaDaPontuacaoIdade50a59,
		MediaDaPontuacaoIdade60a64,
		MediaDaPontuacaoIdade65a89;


public:
	Grafico();
	void pegarIdadesEPontuacaoNoArquivo();
	void fazerSomatoriaDaPontuacao();
	void fazerDivisaoDaPontuacao();
	double getMediaPontuacaoIdade10a11();
	double getMediaPontuacaoIdade12a14();
	double getMediaPontuacaoIdade15a17();
	double getMediaPontuacaoIdade18a29();
	double getMediaPontuacaoIdade30a39();
	double getMediaPontuacaoIdade40a49();
	double getMediaPontuacaoIdade50a59();
	double getMediaPontuacaoIdade60a64();
	double getMediaPontuacaoIdade65a89();
};

