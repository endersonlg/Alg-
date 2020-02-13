#include "Rank.h"

Rank::Rank()
{
	NomeJogador = "";
	TempoJogado = 0;
	Pontuacao = 0;
	Idade = 0;
	for (int i = 0; i < 10; i++)
		OsMelhoresJogadores[i].NomeJogador = "",OsMelhoresJogadores[i].Idade=0,OsMelhoresJogadores[i].TempoJogado = 0, OsMelhoresJogadores[i].Pontuacao = 0;
}


Rank::~Rank()
{
}

void Rank::setNomeDoJogador(string NomeJogador)
{
	this->NomeJogador = NomeJogador;
}
void Rank::setIdade(int Idade)
{
	this->Idade = Idade;
}
void Rank::setTempoDeJogo(int TempoJogado)
{
	this->TempoJogado = TempoJogado;
}

void Rank::setPontuacao(double Pontuacao)
{
	this->Pontuacao = Pontuacao;
}

void Rank::guardarDados()
{
	RegistroDeDados rdd;
	
	rdd.setInformacaoDaPartida(NomeJogador,Idade, TempoJogado, Pontuacao);
	rdd.registrarDadosNoArquivo();
}

void Rank::PegarDadosDoArquivo()
{
	RegistroDeDados rdd;
	DadosPartida DadosDasPartidasAux = { "",0, 0, 0 };
	int QuantidadeDeDados=0;

	rdd.lerDadosDoArquivo();
	QuantidadeDeDados = rdd.getQuantidadeDeDados();
	for (int cont = 0; cont < QuantidadeDeDados; cont++)
	{
		rdd.getDadosLidosDoArquivo(&DadosDasPartidasAux.NomeJogador,&DadosDasPartidasAux.Idade, &DadosDasPartidasAux.TempoJogado, &DadosDasPartidasAux.Pontuacao, cont);
		DadosDasPartidas.push_back(DadosDasPartidasAux);
	}
}

void Rank::ArrumarTabelaDePontuacao()
{
	for (int contador = 0; contador < DadosDasPartidas.size(); contador++)
	{
		if (DadosDasPartidas[contador].Pontuacao>OsMelhoresJogadores[0].Pontuacao)
		{
			OsMelhoresJogadores[9] = OsMelhoresJogadores[8];
			OsMelhoresJogadores[8] = OsMelhoresJogadores[7];
			OsMelhoresJogadores[7] = OsMelhoresJogadores[6]; 
			OsMelhoresJogadores[6] = OsMelhoresJogadores[5];
			OsMelhoresJogadores[5] = OsMelhoresJogadores[4];
			OsMelhoresJogadores[4] = OsMelhoresJogadores[3];
			OsMelhoresJogadores[3] = OsMelhoresJogadores[2];
			OsMelhoresJogadores[2] = OsMelhoresJogadores[1];
			OsMelhoresJogadores[1] = OsMelhoresJogadores[0];

			OsMelhoresJogadores[0] = DadosDasPartidas[contador];
		}
		else if(DadosDasPartidas[contador].Pontuacao>OsMelhoresJogadores[1].Pontuacao)
		{
			OsMelhoresJogadores[9] = OsMelhoresJogadores[8];
			OsMelhoresJogadores[8] = OsMelhoresJogadores[7];
			OsMelhoresJogadores[7] = OsMelhoresJogadores[6];
			OsMelhoresJogadores[6] = OsMelhoresJogadores[5];
			OsMelhoresJogadores[5] = OsMelhoresJogadores[4];
			OsMelhoresJogadores[4] = OsMelhoresJogadores[3];
			OsMelhoresJogadores[3] = OsMelhoresJogadores[2];
			OsMelhoresJogadores[2] = OsMelhoresJogadores[1];

			OsMelhoresJogadores[1] = DadosDasPartidas[contador];
		}
		else if (DadosDasPartidas[contador].Pontuacao>OsMelhoresJogadores[2].Pontuacao)
		{
			OsMelhoresJogadores[9] = OsMelhoresJogadores[8];
			OsMelhoresJogadores[8] = OsMelhoresJogadores[7];
			OsMelhoresJogadores[7] = OsMelhoresJogadores[6];
			OsMelhoresJogadores[6] = OsMelhoresJogadores[5];
			OsMelhoresJogadores[5] = OsMelhoresJogadores[4];
			OsMelhoresJogadores[4] = OsMelhoresJogadores[3];
			OsMelhoresJogadores[3] = OsMelhoresJogadores[2];

			OsMelhoresJogadores[2] = DadosDasPartidas[contador];
		}
		else if (DadosDasPartidas[contador].Pontuacao>OsMelhoresJogadores[3].Pontuacao)
		{
			OsMelhoresJogadores[9] = OsMelhoresJogadores[8];
			OsMelhoresJogadores[8] = OsMelhoresJogadores[7];
			OsMelhoresJogadores[7] = OsMelhoresJogadores[6];
			OsMelhoresJogadores[6] = OsMelhoresJogadores[5];
			OsMelhoresJogadores[5] = OsMelhoresJogadores[4];
			OsMelhoresJogadores[4] = OsMelhoresJogadores[3];

			OsMelhoresJogadores[3] = DadosDasPartidas[contador];
		}
		else if (DadosDasPartidas[contador].Pontuacao>OsMelhoresJogadores[4].Pontuacao)
		{
			OsMelhoresJogadores[9] = OsMelhoresJogadores[8];
			OsMelhoresJogadores[8] = OsMelhoresJogadores[7];
			OsMelhoresJogadores[7] = OsMelhoresJogadores[6];
			OsMelhoresJogadores[6] = OsMelhoresJogadores[5];
			OsMelhoresJogadores[5] = OsMelhoresJogadores[4];

			OsMelhoresJogadores[4] = DadosDasPartidas[contador];
		}
		else if (DadosDasPartidas[contador].Pontuacao>OsMelhoresJogadores[5].Pontuacao)
		{
			OsMelhoresJogadores[9] = OsMelhoresJogadores[8];
			OsMelhoresJogadores[8] = OsMelhoresJogadores[7];
			OsMelhoresJogadores[7] = OsMelhoresJogadores[6];
			OsMelhoresJogadores[6] = OsMelhoresJogadores[5];

			OsMelhoresJogadores[5] = DadosDasPartidas[contador];
		}
		else if (DadosDasPartidas[contador].Pontuacao>OsMelhoresJogadores[6].Pontuacao)
		{
			OsMelhoresJogadores[9] = OsMelhoresJogadores[8];
			OsMelhoresJogadores[8] = OsMelhoresJogadores[7];
			OsMelhoresJogadores[7] = OsMelhoresJogadores[6];

			OsMelhoresJogadores[6] = DadosDasPartidas[contador];
		}
		else if (DadosDasPartidas[contador].Pontuacao>OsMelhoresJogadores[7].Pontuacao)
		{
			OsMelhoresJogadores[9] = OsMelhoresJogadores[8];
			OsMelhoresJogadores[8] = OsMelhoresJogadores[7];

			OsMelhoresJogadores[7] = DadosDasPartidas[contador];
		}
		else if (DadosDasPartidas[contador].Pontuacao > OsMelhoresJogadores[8].Pontuacao)
		{
			OsMelhoresJogadores[9] = OsMelhoresJogadores[8];

			OsMelhoresJogadores[8] = DadosDasPartidas[contador];
		}
		else if (DadosDasPartidas[contador].Pontuacao>OsMelhoresJogadores[9].Pontuacao)
		{
			OsMelhoresJogadores[9] = DadosDasPartidas[contador];
		}

	}
}

void Rank::getTabelaDePontuacao(string NomeJogador[10],int Idade[10], int TempoJogado[10], double Pontuacao[10])
{
	for (int Contador = 0; Contador < 10; Contador++)
	{
		NomeJogador[Contador] = OsMelhoresJogadores[Contador].NomeJogador;
		Idade[Contador] = OsMelhoresJogadores[Contador].Idade;
		TempoJogado[Contador] = OsMelhoresJogadores[Contador].TempoJogado;
		Pontuacao[Contador] = OsMelhoresJogadores[Contador].Pontuacao;
	}
}