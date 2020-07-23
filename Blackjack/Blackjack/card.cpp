#include "stdafx.h"
#include "card.h"

Card::Card(): numer(0), kolor(0)
{
}

Card::Card(int _numer, int _kolor):  numer(_numer), kolor(_kolor)
{
}
Card::Card(const Card &source): numer(source.numer), kolor(source.kolor)
{
}
Card::~Card()
 {
 }

int Card::getnumber()
{
	return this->numer;
}
int Card::getkolor()
{
	return this->kolor;
}



int Card::checkStrength()
{
	int sila = 0;
	if (this->numer<=10 && this->numer>=2)
	{
		sila = this->numer;
	}
	else if (this->numer == 0)
	{
		sila = 0;
	}
	else if (this->numer >= 11 && this->numer <=13)
	{
		sila = 10;
	}
	else if (this->numer == 1)
	{
		sila = 11;
	}
	else if(this->numer == 0)
	{
		sila = 0;

	}

	return sila;
}

void Card::SetCard(int numer, int kolor)
{
	this->numer = numer;
	this->kolor = kolor;


}

Card Card::GetCard()
{
	return *this;
}



