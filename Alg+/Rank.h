#pragma once
#include "RegistroDeDados.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Rank
{
	typedef struct{
		string NomeJogador;
		int Idade;
		int TempoJogado;
		double Pontuacao;
	}DadosPartida;
private:
	string NomeJogador;
	int Idade;
	int TempoJogado;
	double Pontuacao;
	vector<DadosPartida> DadosDasPartidas;
	DadosPartida OsMelhoresJogadores[10];
public:
	Rank();
	~Rank();
	void setNomeDoJogador(string);
	void setIdade(int);
	void setTempoDeJogo(int);
	void setPontuacao(double);
	void guardarDados();
	void PegarDadosDoArquivo();
	void ArrumarTabelaDePontuacao();
	void getTabelaDePontuacao(string[10],int[10], int[10], double[10]);
	
};

