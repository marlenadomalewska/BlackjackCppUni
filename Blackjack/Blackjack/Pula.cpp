#include "stdafx.h"
#include "Pula.h"

Pula::Pula()
{
    for (int i = 0; i<7; i++)
    {
        UzPula[i] = Card();
    }

    for (int i = 0; i<5; i++)
    {
        KrPula[i] = Card();
    }
	
    for (int i = 0; i<52; i++)
    {
        Talia[i] = Card();
    }
	this->TokenPull = 0;
	this->Wager = 0;
	this->HoldT = 0;
	this->ImiePula = "nieznane";
	this->iloscWin = 0;
	this->iloscLose = 0;
	this->maxWin = 0;
	this->licznikDouble = 0;
	this->licznikHit=0;
	this->licznikStand=0;

	
}

Pula::Pula(const Pula &source)
{
	for (int i = 0; i < 7; i++)
	{
		this->UzPula[i] = source.UzPula[i];
	}
	for (int i = 0; i < 5; i++)
	{
		this->KrPula[i] = source.KrPula[i];
	}
	for (int i = 0; i < 52; i++)
	{
		this->Talia[i] = source.Talia[i];
	}
	this->TokenPull = source.TokenPull;
	this->Wager = source.Wager;
	this->HoldT = source.HoldT;
	this->ImiePula = source.ImiePula;

	this->iloscWin = source.iloscWin;
	this->iloscLose = source.iloscLose;
	this->maxWin = source.maxWin;
	
	this->licznikDouble = source.licznikDouble;
	this->licznikHit = source.licznikHit;
	this->licznikStand = source.licznikStand;
}
Pula::~Pula()
{

}


int Pula::SumUz()
{
	int licznikas = 0;  
	int mocUz = 0;
    for (int i = 0; i<7; i++)
    {
        if (this->UzPula[i].checkStrength()==11)
        {
            licznikas += 1; 
			
        }
        mocUz = mocUz + UzPula[i].checkStrength();
    }
	for(int i = 1; i <= licznikas; i++)
	{
		if(mocUz>21)
		{
			mocUz = mocUz - 10;
		}
	}



return mocUz;
}
int Pula::SumKr()
{
	int licznikas = 0;
	int mocKr = 0;
    for (int i = 0; i<5; i++)
    {
        if (this->KrPula[i].checkStrength()==11)
        {
            licznikas += 1;  
			
        }
        mocKr = mocKr + KrPula[i].checkStrength();
    }
	for(int i = 1; i <= licznikas; i++)
	{
		if(mocKr>21)
		{
			mocKr = mocKr - 10;
		}
	}


return mocKr;
}



bool Pula::checkWin()
{
    if (this->SumUz() > this->SumKr())
    {

        return true;
    }

    else if (this->SumUz() < this->SumKr())
    {

		return false;
    }
}

bool Pula::CheckHold()
{
	 if (this->SumUz() == this->SumKr())
    {

        return true;
    }
	 else
	 {
		 return false;
	 }

}


void Pula::createTalia()
{
    int i = 0;
    while(i<52)
    {
       for(int nr = 1; nr <=13; nr++)
       {
           for(int kolor = 1; kolor <= 4; kolor++ )
           {
               this->Talia[i] = Card(nr, kolor);
               i++;
           }
       }
    }
    
}

void Pula::ResetTable()
{
	this->createTalia();
	for (int i = 0; i < 7; i++)
	{
	this->UzPula[i] = Card();
	}
	for (int i = 0; i < 5; i++)
	{
		this->KrPula[i] = Card();
	}

}

void Pula::StartLosowanie()
{
	int i1, i2, j1, j2;
	i1 = rand() % 52;
	
	do
	{
		i2 = rand() % 52;

	} while (i1==i2);
	do
	{
		j1 = rand() % 52;

	} while (j1 == i2 || j1 == i1);
	do
	{
		j2 = rand() % 52;

	} while (j2 == i1 || j2 == i2 || j2 == j1 );

	this->UzPula[0] = this->Talia[i1];
	this->Talia[i1] = Card();

	this->UzPula[1] = this->Talia[i2];
	this->Talia[i2] = Card();

	this->KrPula[0] = this->Talia[j1];
	this->Talia[j1] = Card();

	this->KrPula[1] = this->Talia[j2];
	this->Talia[j2] = Card();

}

bool Pula::Hit()
{

	int free;
	int i1;
	for(int i = 0; i < 7; i++)
	{
		if (UzPula[i].getnumber() == 0)
		{
			free = i;
			break;
		}
	}
	do
	{
		i1 = rand() % 52;

	} while (Talia[i1].getnumber() == 0);
	UzPula[free] = Talia[i1];
	Talia[i1] = Card();


	return true;
}

void Pula::AfterStand()
{
	int free = 2;
	int i1;

	for (int i = 0; i <5 && this->SumKr()<17 && this->SumUz() >= this->SumKr() ; i++)
	{
		if (this->GetPulaKr(i).getnumber() == 0)
		{
			free = i;
			do
			{
				i1 = rand() % 52;
			} while (this->Talia[i1].getnumber() == 0);
		
			this->SetPulaKr(free, this->Talia[i1]);
			
			this->SetTalia(i1, Card());
			
		}
					
	
	}
}

bool Pula::Double()
{
	if(this->TokenPull >= this->Wager)
	{
		this->TokenPull = this->TokenPull - this->Wager;
		this->Wager = this->Wager*2;
		this->licznikDouble++;
		return true;
	}
	else
	{
		return false;
	}

}

bool Pula::CheckBlackjackUz()
{
	if (this->SumUz() == 21)
	{
		return true;
		
	}
	else
	{
		return false;
	}
	
}
bool Pula::CheckBlackjackKr()
{
	if (this->SumKr() == 21 && this->SumKr() != this->SumUz())
	{
		return true;
		
	}
	else
	{
		return false;
	}


}

bool Pula::EndingRoundUz()
{
	if (this->SumUz() > 21)
	{
		return true;
	}
	
	else
	{
		return false;
	}

}

bool Pula::EndingRoundKr()
{
if (this->SumKr() > 21)
	{
		
		return true;
	}
else
	{
		return false;
	}
}


unsigned int Pula::GetHoldT()
{
	return this->HoldT;
}

Card Pula::GetPulaUz(int i)
{
 return this->UzPula[i];
}
Card Pula::GetPulaKr(int i)
{
	return this->KrPula[i];

}

Card Pula::GetTalia(int i)
{
	return this->Talia[i];
}

void Pula::SetPulaUz(int i, Card karta)
{
	this->UzPula[i] = karta;

}
void Pula::SetPulaKr(int i, Card karta)
{
	this->KrPula[i] = karta;
}
void Pula::SetTalia(int i, Card karta)
{
	this->Talia[i] = karta;
}

void Pula::SetTokenUz(unsigned int Pula, unsigned int Stawka)
{
	this->Wager = Stawka;
	this->TokenPull = Pula;
}

void Pula::SetTokenUzPula(unsigned int x)
{
	this->TokenPull = x;
}
void Pula::SetTokenUzStawka(unsigned int x)
{
	this->Wager = x;
}

void Pula::SetHoldT(unsigned int x)
{
	this->HoldT = x;
}

unsigned int Pula::ZwrocPule()
{
	return this->TokenPull;
}
unsigned int Pula::ZwrocStawke()
{
	return this->Wager;
}

string Pula::GetImie()
{
	return this->ImiePula;
}
void Pula::SetImie(string imie)
{
	this->ImiePula = imie;
}


void Pula::ZetonyDlaWygranejRundy()
{
	 this->TokenPull = this->TokenPull + (this->Wager)*2 + this->HoldT;
	 this->Wager = 0;
	 this->HoldT = 0;
	 this->iloscWin++;


}
void Pula::ZetonyDlaPrzegranejRundy()
{

	 this->Wager = 0;
	 this->HoldT = 0;
	 this->iloscLose++;
}
void Pula::ZetonyDlaRemisu()
{
	this->HoldT = this->Wager*2 + this->HoldT;
	this->Wager = 0;
}

void Pula::setIloscWin(unsigned int x)
{
	this->iloscWin = x;
}
unsigned int Pula::getIloscWin()
{
	return this->iloscWin;
}
void Pula::setIloscLose(unsigned int x)
{
	this->iloscLose = x;
}
unsigned int Pula::getIloscLose()
{
	return this->iloscLose;
}
void Pula::setMaxWin(unsigned int x)
{
	this->maxWin = x;
}
unsigned int Pula::getMaxWin()
{
	return this->maxWin;
}

unsigned int Pula::GetLHit()
{
	return this->licznikHit;
}
unsigned int Pula::GetLStand()
{
	return this->licznikStand;
}
unsigned int Pula::GetLDouble()
{
	return this->licznikDouble;
}

void Pula::SetLHit(unsigned int x)
{
	this->licznikHit = x;
}

void Pula::SetLStand(unsigned int x)
{
	this->licznikStand = x;
}
void Pula::SetLDouble(unsigned int x)
{
	this->licznikDouble = x;
}

void Pula::IncreaseToken()
{
	if(this->Wager<3 && this->TokenPull>0)
	{
	this->Wager++;
	this->TokenPull--;
	}
}
void Pula::DecreaseToken()
{
	if(this->Wager>0)
	{
	this->Wager--;
	this->TokenPull++;
	}

}
