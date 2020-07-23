#ifndef PULA_H
#define PULA_H
#include "card.h"


class Pula
{
protected:

	Card UzPula[7];
	Card KrPula[5];
	
	Card Talia[52];

	unsigned int Wager;
	unsigned int TokenPull;
	unsigned int HoldT; 

	string ImiePula;

	unsigned int iloscWin;
	unsigned int iloscLose;
	unsigned int maxWin;

	unsigned int licznikHit;
	unsigned int licznikStand;
	unsigned int licznikDouble;




public:
	Pula::Pula();
	Pula::Pula(const Pula &source);
	Pula::~Pula();

	int Pula::SumUz();
	int Pula::SumKr();
	bool Pula::checkWin();
	bool Pula::CheckHold();
	void Pula::createTalia();
	void Pula::ResetTable();
	void Pula::StartLosowanie();
	bool Pula::Hit();
	void Pula::AfterStand();
	bool Pula::Double();

	bool Pula::CheckBlackjackUz();
	bool Pula::CheckBlackjackKr();
	bool Pula::EndingRoundUz();
	bool Pula::EndingRoundKr();

	unsigned int Pula::GetHoldT();

	Card Pula::GetPulaUz(int i);
	Card Pula::GetPulaKr(int i);
	Card Pula::GetTalia(int i);

	void Pula::SetPulaUz(int i, Card karta);
	void Pula::SetPulaKr(int i, Card karta);
	void Pula::SetTalia(int i, Card karta);

	void Pula::SetTokenUz(unsigned int Pula, unsigned int Stawka);
	void Pula::SetTokenUzPula(unsigned int x);
	void Pula::SetTokenUzStawka(unsigned int x);
	void Pula::SetHoldT(unsigned int x);

	unsigned int Pula::ZwrocPule();
	unsigned int Pula::ZwrocStawke();

	string Pula::GetImie();
	void Pula::SetImie(string imie);

	void Pula::ZetonyDlaWygranejRundy();
	void Pula::ZetonyDlaPrzegranejRundy();
	void Pula::ZetonyDlaRemisu();

	void Pula::setIloscWin(unsigned int x);
	unsigned int Pula::getIloscWin();
	void Pula::setIloscLose(unsigned int x);
	unsigned int Pula::getIloscLose();
	void Pula::setMaxWin(unsigned int x);
	unsigned int Pula::getMaxWin();

	unsigned int Pula::GetLHit();
	unsigned int Pula::GetLStand();
	unsigned int Pula::GetLDouble();

	void Pula::SetLHit(unsigned int x);
	void Pula::SetLStand(unsigned int x);
	void Pula::SetLDouble(unsigned int x);

	void Pula::IncreaseToken();
	void Pula::DecreaseToken();



};

#endif 