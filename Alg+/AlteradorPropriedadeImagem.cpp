#include "AlteradorPropriedadeImagem.h"


AlteradorPropriedadeImagem::AlteradorPropriedadeImagem()
{
}

AlteradorPropriedadeImagem::~AlteradorPropriedadeImagem()
{

}

void AlteradorPropriedadeImagem::alterarVisiabilidadeParaVerdadeiro(PictureBox^ Imagem)
{
	Imagem->Visible = true;
}

void AlteradorPropriedadeImagem::alterarVisiabilidadeParaFalso(PictureBox^ Imagem)
{
	Imagem->Visible = false;
}

void AlteradorPropriedadeImagem::alterarImagemDeFundo(PictureBox^ Imagem)
{
}