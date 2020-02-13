#include "Grafico.h"


Grafico::Grafico()
{
	SomatoriaDaPontuacaoComAIdade10a11 = 0;
	SomatoriaDaPontuacaoComAIdade12a14 = 0;
	SomatoriaDaPontuacaoComAIdade15a17 = 0;
	SomatoriaDaPontuacaoComAIdade18a29 = 0;
	SomatoriaDaPontuacaoComAIdade30a39 = 0;
	SomatoriaDaPontuacaoComAIdade40a49 = 0;
	SomatoriaDaPontuacaoComAIdade50a59 = 0;
	SomatoriaDaPontuacaoComAIdade60a64 = 0;
	SomatoriaDaPontuacaoComAIdade65a89 = 0;

	QuantidadePessoasComIDade10a11 = 0;
	QuantidadePessoasComIDade12a14 = 0;
	QuantidadePessoasComIDade15a17 = 0;
	QuantidadePessoasComIDade18a29 = 0;
	QuantidadePessoasComIDade30a39 = 0;
	QuantidadePessoasComIDade40a49 = 0;
	QuantidadePessoasComIDade50a59 = 0;
	QuantidadePessoasComIDade60a64 = 0;
	QuantidadePessoasComIDade65a89 = 0;

	MediaDaPontuacaoIdade10a11 = 0;
	MediaDaPontuacaoIdade12a14 = 0;
	MediaDaPontuacaoIdade15a17 = 0;
	MediaDaPontuacaoIdade18a29 = 0;
	MediaDaPontuacaoIdade30a39 = 0;
	MediaDaPontuacaoIdade40a49 = 0;
	MediaDaPontuacaoIdade50a59 = 0;
	MediaDaPontuacaoIdade60a64 = 0;
	MediaDaPontuacaoIdade65a89 = 0;
}

void Grafico::pegarIdadesEPontuacaoNoArquivo()
{
	RegistroDeDados rdd;
	int QuantidadeDeDados = 0;
	rdd.lerDadosDoArquivo();
	QuantidadeDeDados = rdd.getQuantidadeDeDados();
	for (int cont = 0; cont < QuantidadeDeDados; cont++)
	{
		IdadesDeTodos.push_back(rdd.getIdadeLidaDoArquivo(cont));
		PontuacaoDeTodos.push_back(rdd.getPontuacaoLidaDoArquivo(cont));
	}
}

void Grafico::fazerSomatoriaDaPontuacao()
{
	for (int cont = 0; cont < IdadesDeTodos.size(); cont++)
	{
		if (IdadesDeTodos[cont] >= 10 && IdadesDeTodos[cont] <= 11)
		{
			SomatoriaDaPontuacaoComAIdade10a11 += PontuacaoDeTodos[cont];
			QuantidadePessoasComIDade10a11++;
		}
		else if (IdadesDeTodos[cont] >= 12 && IdadesDeTodos[cont] <= 14)
		{
			SomatoriaDaPontuacaoComAIdade12a14 += PontuacaoDeTodos[cont];
			QuantidadePessoasComIDade12a14++;
		}
		else if (IdadesDeTodos[cont] >= 15 && IdadesDeTodos[cont] <= 17)
		{
			SomatoriaDaPontuacaoComAIdade15a17 += PontuacaoDeTodos[cont];
			QuantidadePessoasComIDade15a17++;
		}
		else if (IdadesDeTodos[cont] >= 18 && IdadesDeTodos[cont] <= 29)
		{
			SomatoriaDaPontuacaoComAIdade18a29 += PontuacaoDeTodos[cont];
			QuantidadePessoasComIDade18a29++;
		}
		else if (IdadesDeTodos[cont] >= 30 && IdadesDeTodos[cont] <= 39)
		{
			SomatoriaDaPontuacaoComAIdade30a39 += PontuacaoDeTodos[cont];
			QuantidadePessoasComIDade30a39++;
		}
		else if (IdadesDeTodos[cont] >= 40 && IdadesDeTodos[cont] <= 49)
		{
			SomatoriaDaPontuacaoComAIdade40a49 += PontuacaoDeTodos[cont];
			QuantidadePessoasComIDade40a49++;
		}
		else if (IdadesDeTodos[cont] >= 50 && IdadesDeTodos[cont] <= 59)
		{
			SomatoriaDaPontuacaoComAIdade50a59 += PontuacaoDeTodos[cont];
			QuantidadePessoasComIDade50a59++;
		}
		else if (IdadesDeTodos[cont] >= 60 && IdadesDeTodos[cont] <= 64)
		{
			SomatoriaDaPontuacaoComAIdade60a64 += PontuacaoDeTodos[cont];
			QuantidadePessoasComIDade60a64++;
		}
		else if (IdadesDeTodos[cont] >= 65 && IdadesDeTodos[cont] <= 89)
		{
			SomatoriaDaPontuacaoComAIdade65a89 += PontuacaoDeTodos[cont];
			QuantidadePessoasComIDade65a89++;
		}
	}
}
void Grafico::fazerDivisaoDaPontuacao()
{
	MediaDaPontuacaoIdade10a11 = SomatoriaDaPontuacaoComAIdade10a11 / QuantidadePessoasComIDade10a11;
	MediaDaPontuacaoIdade12a14 = SomatoriaDaPontuacaoComAIdade12a14 / QuantidadePessoasComIDade12a14;
	MediaDaPontuacaoIdade15a17 = SomatoriaDaPontuacaoComAIdade15a17 / QuantidadePessoasComIDade15a17;
	MediaDaPontuacaoIdade18a29 = SomatoriaDaPontuacaoComAIdade18a29 / QuantidadePessoasComIDade18a29;
	MediaDaPontuacaoIdade30a39 = SomatoriaDaPontuacaoComAIdade30a39 / QuantidadePessoasComIDade30a39;
	MediaDaPontuacaoIdade40a49 = SomatoriaDaPontuacaoComAIdade40a49 / QuantidadePessoasComIDade40a49;
	MediaDaPontuacaoIdade50a59 = SomatoriaDaPontuacaoComAIdade50a59 / QuantidadePessoasComIDade50a59;
	MediaDaPontuacaoIdade60a64 = SomatoriaDaPontuacaoComAIdade60a64 / QuantidadePessoasComIDade60a64;
	MediaDaPontuacaoIdade65a89 = SomatoriaDaPontuacaoComAIdade65a89 / QuantidadePessoasComIDade65a89;
}

double Grafico::getMediaPontuacaoIdade10a11()
{
	return MediaDaPontuacaoIdade10a11;
}
double Grafico::getMediaPontuacaoIdade12a14()
{
	return MediaDaPontuacaoIdade12a14;
}
double Grafico::getMediaPontuacaoIdade15a17()
{
	return MediaDaPontuacaoIdade15a17;
}
double Grafico::getMediaPontuacaoIdade18a29()
{
	return MediaDaPontuacaoIdade18a29;
}
double Grafico::getMediaPontuacaoIdade30a39()
{
	return MediaDaPontuacaoIdade30a39;
}
double Grafico::getMediaPontuacaoIdade40a49()
{
	return MediaDaPontuacaoIdade40a49;
}
double Grafico::getMediaPontuacaoIdade50a59()
{
	return MediaDaPontuacaoIdade50a59;
}
double Grafico::getMediaPontuacaoIdade60a64()
{
	return MediaDaPontuacaoIdade60a64;
}
double Grafico::getMediaPontuacaoIdade65a89()
{
	return MediaDaPontuacaoIdade65a89;
}