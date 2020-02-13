#include "RegistroDeDados.h"


RegistroDeDados::RegistroDeDados()
{
}


RegistroDeDados::~RegistroDeDados()
{
}

void RegistroDeDados::setInformacaoDaPartida(string NomeJogador,int Idade, int Tempo, double Pontuacao)
{
	this->NomeJogador = NomeJogador;
	this->Idade = Idade;
	this->TempoJogado = Tempo;
	this->Pontuacao = Pontuacao;
}
void RegistroDeDados::setFraseERegistrarFraseNoArquivo(string Frase)
{
	remove("Frase.txt");
	ofstream Arquivo;
	Arquivo.open("Frase.txt", ios::binary | ios::app);
	if (Arquivo.is_open() && Arquivo.good())
	{
		Arquivo<<Frase;
	}
	Arquivo.close();
}

void RegistroDeDados::registrarDadosNoArquivo()
{
	ofstream Arquivo;
	Arquivo.open("Rank.dat", ios::binary | ios::app);

	if (Arquivo.is_open() && Arquivo.good())
	{
		Arquivo << NomeJogador << endl;
		Arquivo << Idade << endl;
		Arquivo << TempoJogado << endl;
		Arquivo << Pontuacao << endl;
	}
	Arquivo.close();
}
void RegistroDeDados::lerDadosDoArquivo()
{
	ifstream Arquivo;
	Arquivo.open("Rank.dat", ios::in);
	if (Arquivo.is_open() && Arquivo.good())
	{
		while (getline(Arquivo, NomeJogador))
		{
			getline(Arquivo, IdadeString);
			getline(Arquivo, TempoJogadoString);
			getline(Arquivo, PontuacaoString);
		    ConverterOTipoDasVariaveis();
			guardarDadosNoVetor();
		}
	}
	Arquivo.close();
}

void RegistroDeDados::ConverterOTipoDasVariaveis()
{
	ConversorDeTipos cdt;
	Idade = cdt.ConverterStringParaInt(IdadeString);
	TempoJogado=cdt.ConverterStringParaInt(TempoJogadoString);
	Pontuacao = cdt.ConverterStringParaDouble(PontuacaoString);
	Pontuacao = Pontuacao - 8000;
}

void RegistroDeDados::guardarDadosNoVetor()
{
	DadosPartida DadosDasPartidasAux;
	DadosDasPartidasAux.NomeJogador = NomeJogador;
	DadosDasPartidasAux.Idade = Idade;
	DadosDasPartidasAux.TempoJogado = TempoJogado;
	DadosDasPartidasAux.Pontuacao = Pontuacao;

	DadosDasPartidas.push_back(DadosDasPartidasAux);
}

int RegistroDeDados::getQuantidadeDeDados()
{
	return DadosDasPartidas.size();
}

void RegistroDeDados::getDadosLidosDoArquivo(string *NomeJogador,int *Idade,int *TempoJogado, double *Pontuacao, int Contador)
{
	*NomeJogador = DadosDasPartidas[Contador].NomeJogador;
	*Idade = DadosDasPartidas[Contador].Idade;
	*TempoJogado = DadosDasPartidas[Contador].TempoJogado;
	*Pontuacao = DadosDasPartidas[Contador].Pontuacao;
}
int RegistroDeDados::getIdadeLidaDoArquivo(int indice)
{
	return DadosDasPartidas[indice].Idade;
}
double RegistroDeDados::getPontuacaoLidaDoArquivo(int indice)
{
	return DadosDasPartidas[indice].Pontuacao;
}