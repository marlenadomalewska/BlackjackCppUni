#ifndef CARD_H
#define CARD_H


using namespace std;

class Card 
{
protected:
	int numer; //do 13, 11-jopek, 12-kr�lowa, 13-kr�l, 1-as, 0 - pusta karta
	int kolor; // 1- kier 2-karo 3-pik 4-trefl, 0 to pusta karta

public:
	Card::Card();
	Card::Card(int _numer, int _kolor);
	Card::Card(const Card &source);
	Card::~Card();

	int Card::getnumber();
	int Card::getkolor();

	void Card::SetCard(int numer, int kolor);
	Card Card::GetCard();
	int Card::checkStrength();
	

};



#endif