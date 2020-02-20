#include "Deck.hpp"

Deck::Deck()
{
	int placeInDeck = 0;
	for (int suit = 0; suit <= 3; suit++)
	{
		for (int num = 0; num <= 13; num++)
		{
			cards[placeInDeck] = new Card(num, suit);
			placeInDeck++;
		}
	}
	cardsLeft = 52;
}

Deck::~Deck()
{
}

void Deck::reset()
{
	cardsLeft = 52;
}

void Deck::shuffle()
{
	for (int i = 0; i < 52; i++)
	{
		int swap = rand() % 52 + 1;
		Card* temp = cards[i];
		cards[i] = cards[swap];
		cards[swap] = temp;
	}
}
