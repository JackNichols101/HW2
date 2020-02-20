#pragma once
#include "Card.hpp"
#include <list>
class Deck
{
	private:
		Card* cards[52];
		int cardsLeft = 0;
		


	public:
		Deck();
		~Deck();
		void reset();
		void shuffle();
		Card* dealCard();
		int getCardsLeft();
};

