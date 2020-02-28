#include "Deck.hpp"
#include <iostream>
#include <time.h>
#include <ctime>

Deck::Deck()
{
	int placeInDeck = 0;
	for (int suit = 1; suit <= 4; suit++)
	{
		for (int num = 1; num <= 13; num++)
		{
			cards[placeInDeck] = new Card(num, suit);
			//std::cout << cards[placeInDeck]->toString();
			placeInDeck++;
		}
	}
	cardsLeft = 52;
}

Deck::~Deck()
{
	delete []cards;
}

void Deck::reset()
{
	cardsLeft = 52;
}

void Deck::shuffle()
{
	srand(time(NULL));
	for (int i = 0; i < 52; i++)
	{
		
		int swap = rand() % 52;
		Card* temp = cards[i];
		cards[i] = cards[swap];
		cards[swap] = temp;
	}
}

Card* Deck::dealCard()
{
	if (cardsLeft > 0)
	{
		cardsLeft--;
		return cards[cardsLeft];
	}
	else
	{
		return NULL;
	}
}

int Deck::getCardsLeft()
{
	return cardsLeft;
}
bool Deck::isEmpty() {
	return (cardsLeft == 0);
}
