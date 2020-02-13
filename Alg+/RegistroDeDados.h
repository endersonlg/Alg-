#pragma once
#include "ConversorDeTipos.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
class RegistroDeDados
{
	typedef struct{
		string NomeJogador;
		int Idade;
		int TempoJogado;
		double Pontuacao;
	}DadosPartida;

private:
	string NomeJogador,IdadeString,TempoJogadoString,PontuacaoString;
	int TempoJogado,Idade;
	double Pontuacao;
	vector<int> IdadesDeTodos;
	vector<double> PontuacaoDeTodos;

	vector <DadosPartida> DadosDasPartidas;

	void ConverterOTipoDasVariaveis();
	void guardarDadosNoVetor();
public:
	RegistroDeDados();
	~RegistroDeDados();
	void setInformacaoDaPartida(string,int, int, double);
	void setFraseERegistrarFraseNoArquivo(string);
	void registrarDadosNoArquivo();
	void lerDadosDoArquivo();
	int getQuantidadeDeDados();
	void getDadosLidosDoArquivo(string*,int*,int*,double*,int);
	int getIdadeLidaDoArquivo(int);
	double getPontuacaoLidaDoArquivo(int);
};

